using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Tween;
using System;
using TMPro;
using UniFramework.Utility;

public class BattleSystem : MonoBehaviour
{  
    [SerializeField]
    public Camera camera;
    public EBattleState battleState;
    #region 战斗UI
    [SerializeField]
    public GameObject hud_tips;
    [SerializeField]
    public Transform hud_parent;
    [SerializeField]
    public TextMeshProUGUI round_text;
    [SerializeField]
    public BattleResultUI battleResultUI;
    #endregion

    #region 队伍
    private PositioningManager positioningManager;
    private TeamManager teamManager;

    private List<ItemData> team_left_items;
    private List<ItemData> team_right_items;

    private List<GameObject> team_left_entities;
    private List<GameObject> team_right_entities;
    #endregion

    #region 当前战斗单位
    private GameObject cur_player_battle_entity;
    private GameObject cur_enemy_battle_entity;

    private ItemData cur_player_battle_info;
    private ItemData cur_enemy_battle_info;
    
    public BattleHUD enemyHUD;
    public BattleHUD playerHUD;
    
    private Transform player_battle_station;
    private Transform enemy_battle_station;
    #endregion

    private List<BattleRound> battleRounds;
    private int battleRoundIndex = 0;
    public AnimationCurve EaseCurve;

    private void Awake()
    {
        positioningManager = GetComponent<PositioningManager>();
        teamManager = GetComponent<TeamManager>();
    }

    private void Start()
    {
        UniTween.Initalize();
        List<ItemData> team_left = new List<ItemData>()
        {
            new ItemData(){Hp = 100,Atk = 10,Spd = 1,Def = 5,CurHp = 100},
            new ItemData(){Hp = 200,Atk = 20,Spd = 3,Def = 7,CurHp = 200},
            new ItemData(){Hp = 300,Atk = 30,Spd = 5,Def = 9,CurHp = 300},
        };
        List<ItemData> team_right = new List<ItemData>()
        {
            new ItemData(){Hp = 300,Atk = 30,Spd = 5,Def = 9,CurHp = 300},
            new ItemData(){Hp = 200,Atk = 20,Spd = 3,Def = 7,CurHp = 200},
            new ItemData(){Hp = 100,Atk = 10,Spd = 1,Def = 5,CurHp = 100},
        };
        teamManager.SetUp(team_left, team_right);
        battleState = EBattleState.Start;
        SetupBattle();
    }
    
    private void OnDestroy()
    {
        team_left_items = null;
        team_right_items = null;
        team_left_entities = null;
        team_right_entities = null;
        battleRounds.Clear();
        teamManager = null;
        positioningManager = null;
        battleResultUI = null;
        round_text = null;
        hud_parent = null;
        hud_tips = null;
        playerHUD = null;
        enemyHUD = null;
    }

    private void Update() 
    {
       if(battleState == EBattleState.Win)
       {
          battleResultUI?.ShowResult(true);
       }
       else if(battleState == EBattleState.Lost)
       {
          battleResultUI?.ShowResult(false);
       }
    }

    private void SetupBattle()
    {
        // teamManager.SetUp()
        team_left_items = teamManager.TeamLeftItems;
        team_right_items = teamManager.TeamRightItems;
        team_left_entities = teamManager.TeamLeftEntities;
        team_right_entities = teamManager.TeamRightEntities;
        player_battle_station = positioningManager.TeamLeftPositions[0];
        enemy_battle_station = positioningManager.TeamRightPositions[0];
        cur_player_battle_info = team_left_items[0];
        cur_enemy_battle_info = team_right_items[0];
        cur_player_battle_entity = team_left_entities[0];
        cur_enemy_battle_entity = team_right_entities[0];

        battleRounds = GetBattleRoundData(team_left_items, team_right_items);
        TestBattleRounds(battleRounds);
        if (battleRounds[battleRoundIndex].AttackTeam == EBatteTeam.LeftTeam)
        {
            battleState = EBattleState.PlayerTurn;
            playerHUD.SetHUD(battleRounds[battleRoundIndex].Attacker, cur_player_battle_entity.transform);
            enemyHUD.SetHUD(battleRounds[battleRoundIndex].Target, cur_enemy_battle_entity.transform);
            PlayerTurn();
        }
        else
        {
            battleState = EBattleState.EnemyTurn;
            playerHUD.SetHUD(battleRounds[battleRoundIndex].Target, cur_player_battle_entity.transform);
            enemyHUD.SetHUD(battleRounds[battleRoundIndex].Attacker, cur_enemy_battle_entity.transform);
            EnemyTurn();
        }
    }

    private void TestBattleRounds(List<BattleRound> rounds)
    {
        foreach(var r in rounds)
        {
            UniLogger.Log($"第{r.RoundIndex}回合,当前left_team_index = {r.Left_battle_index},当前right_ream_index = {r.Right_battle_index} ,攻击方：{r.AttackTeam},攻击力：{r.Damage},敌方剩余血量：{r.Target.CurHp}");
        }
    }

    private void SetBattleRound(int battleRound)
    {
        round_text.text = $"回合{battleRound}";
    }

    private void NextRounds()
    {
        battleRoundIndex += 1;
        if (battleRounds[battleRoundIndex].AttackTeam == EBatteTeam.LeftTeam)
        {
            battleState = EBattleState.PlayerTurn;
            PlayerTurn();
        }
        else
        {
            battleState = EBattleState.EnemyTurn;
            EnemyTurn();
        }
    }
    
    private IEnumerator DelayCo(float seconds,Action callback)
    {
        yield return new WaitForSeconds(seconds);
        callback?.Invoke();
        StopCoroutine(DelayCo(seconds,callback));
    }

    private void Delay(float seconds,Action callback)
    {
        StartCoroutine(DelayCo(seconds,callback));
    }

    private void OnTargetDefeated(BattleRound battleRound)
    {    
        //如果攻击方是右边，证明玩家动物死亡一个
        if(battleRound.AttackTeam == EBatteTeam.RightTeam)
        {
            playerHUD.SetHUD(battleRound.Target, null);
            playerHUD.gameObject.SetActive(false);
            cur_player_battle_entity.SetActive(false);
        }
        else
        {
            enemyHUD.SetHUD(battleRound.Target, null);
            enemyHUD.gameObject.SetActive(false);
            cur_enemy_battle_entity.SetActive(false);
        }
    }

    //玩家回合
    private void PlayerTurn()
    {
        PlayerAttack();
    }

    //敌方回合
    private void EnemyTurn()
    {
        EnemyAttack();
    }

    private void PlayerAttack()
    {
        //当前回合
        var currentBattleRounds = battleRounds[battleRoundIndex];
        // 当前回合
        SetBattleRound(currentBattleRounds.RoundIndex);
        //对敌人造成伤害
        cur_player_battle_entity = team_left_entities[currentBattleRounds.Left_battle_index];
        cur_enemy_battle_entity = team_right_entities[currentBattleRounds.Right_battle_index];
        void OnMoveComplete()
        {
            //敌方抖动
            cur_enemy_battle_entity.transform.DOShake(0.2f, Vector3.right * 0.2f);
            //我方抖动
            cur_player_battle_entity.transform.DOShake(0.2f, Vector3.left * 0.2f, OnShakeComplete);

            void OnShakeComplete()
            {
                //弹出伤害值
                PopDamage(currentBattleRounds.Damage, cur_enemy_battle_entity.transform.position + Vector3.right * 0.5f, cur_enemy_battle_entity.transform.position + Vector3.up * 2f + Vector3.right * 0.5f);
                //设置血量
                enemyHUD.SetHP(currentBattleRounds.Target);
                UniLogger.Log($"PlayerAttack 回合数：{currentBattleRounds.RoundIndex},Left_battle_index = { currentBattleRounds.Left_battle_index },Right_battle_index = {currentBattleRounds.Right_battle_index},攻击方 = {currentBattleRounds.AttackTeam.ToString()},伤害值 = {currentBattleRounds.Damage}，防守方血量 = {currentBattleRounds.Target.CurHp}");
                //判断当前目标是否死亡，如果死亡，判断游戏是否结束，
                if (currentBattleRounds.IsEndBattle)
                {
                    if(currentBattleRounds.IsDefeated)
                    {
                        cur_enemy_battle_entity.transform.DoScale(EaseCurve, 0.2f, Vector3.one, Vector3.zero, OnScaleComplete);
                    }
                    Delay(0.3f,()=>{ battleState = EBattleState.Win;});
                    UniLogger.Log("You Win");
                    //如果结束，弹出游戏胜利结束面板
                    return;
                }
                //如果没结束，下一个目标移动到当前目标
                if (currentBattleRounds.IsDefeated)
                {
                    UniLogger.Log("当前回合，防守方被击败一个动物");
                    cur_enemy_battle_entity.transform.DoScale(EaseCurve, 0.2f, Vector3.one, Vector3.zero, OnScaleComplete);
                    Delay(2f,()=>{NextRounds();});
                }
                else
                {
                     //回去
                     cur_player_battle_entity.transform.DoMove(EaseCurve, 0.3f, Vector3.zero, false, () =>
                     {
                         //下一回合
                         Delay(0.2f,()=>{NextRounds();});
                     });
                }
            }

            void OnScaleComplete()
            {
                OnTargetDefeated(currentBattleRounds);
                //攻击方回去
                cur_player_battle_entity.transform.DoMove(EaseCurve, 0.3f, Vector3.zero, false);
                //下一个敌人移动回来
                team_right_entities[currentBattleRounds.Right_battle_index + 1].transform.DoMove(EaseCurve, 1f, cur_enemy_battle_entity.transform.position, true, OnNextEnemyEntityMoveComplete);
            }
        }

        void OnNextEnemyEntityMoveComplete()
        {
            var nextBattleBound = battleRounds[battleRoundIndex + 1];
            cur_enemy_battle_entity = team_right_entities[nextBattleBound.Right_battle_index];
            cur_enemy_battle_entity.transform.parent = enemy_battle_station;
            cur_enemy_battle_entity.transform.SetTRSNormalize();
            cur_enemy_battle_entity.SetActive(true);

            if (nextBattleBound.AttackTeam == EBatteTeam.LeftTeam)
            {
                enemyHUD.SetHUD(nextBattleBound.Target, cur_enemy_battle_entity.transform);
                enemyHUD.SetHP(nextBattleBound.Target);
            }
            else
            {
                enemyHUD.SetHUD(nextBattleBound.Attacker, cur_enemy_battle_entity.transform);
                enemyHUD.SetHP(nextBattleBound.Attacker);
            }
            enemyHUD.gameObject.SetActive(true);
        }

        cur_player_battle_entity.transform.DoMove(EaseCurve, 1f, cur_enemy_battle_entity.transform.position + Vector3.left * 1f, true, OnMoveComplete);
    }

    private void EndBattle()
    {
        if (battleState == EBattleState.Win)
        {
            UniLogger.Log("player 赢得了战斗！");
        }
        else if (battleState == EBattleState.Lost)
        {
            UniLogger.Log("player 被击败了");
        }
    }

    private void EnemyAttack()
    {
        //当前回合
        var currentBattleRounds = battleRounds[battleRoundIndex];
        //显示回合数
        SetBattleRound(currentBattleRounds.RoundIndex);
        //对敌人造成伤害
        cur_player_battle_entity = team_right_entities[currentBattleRounds.Right_battle_index];
        cur_player_battle_entity = team_left_entities[currentBattleRounds.Left_battle_index];
        void OnMoveComplete()
        {
            //敌方抖动
            cur_player_battle_entity.transform.DOShake(0.2f, Vector3.left * 0.2f);
            //我方抖动
            cur_player_battle_entity.transform.DOShake(0.2f, Vector3.right * 0.2f, OnShakeComplete);

            void OnShakeComplete()
            {
                //弹出伤害值
                PopDamage(currentBattleRounds.Damage, cur_player_battle_entity.transform.position + Vector3.right * 0.5f, cur_player_battle_entity.transform.position + Vector3.up * 2f + Vector3.right * 0.5f);
                //设置血量
                playerHUD.SetHP(currentBattleRounds.Target);
                UniLogger.Log($"EnemyAttack 回合数：{currentBattleRounds.RoundIndex},Left_battle_index = { currentBattleRounds.Left_battle_index },right_battle_index = {currentBattleRounds.Right_battle_index} , 攻击方 = {currentBattleRounds.AttackTeam.ToString()},伤害值 = {currentBattleRounds.Damage}，防守方血量 = {currentBattleRounds.Target.CurHp}");
                //判断当前目标是否死亡，如果死亡，判断游戏是否结束，
                if (currentBattleRounds.IsEndBattle)
                {
                    if(currentBattleRounds.IsDefeated)
                    {
                        cur_player_battle_entity.transform.DoScale(EaseCurve, 0.2f, Vector3.one, Vector3.zero, OnScaleComplete);
                    }
                    Delay(0.3f,()=>{ battleState = EBattleState.Lost;});
                    UniLogger.Log("You Lost");
                    return;
                }
                //如果没结束，下一个目标移动到当前目标
                if (currentBattleRounds.IsDefeated)
                {
                    UniLogger.Log("当前回合，防守方被击败一个动物");
                    cur_player_battle_entity.transform.DoScale(EaseCurve, 0.2f, Vector3.one, Vector3.zero, OnScaleComplete);
                    Delay(2f,()=>{NextRounds();});
                }
                else
                {
                    //回去
                     cur_enemy_battle_entity.transform.DoMove(EaseCurve, 0.3f, Vector3.zero, false, () =>
                     {
                         Delay(0.2f,()=>{NextRounds();});
                     });
                }
            }

            void OnScaleComplete()
            {
                OnTargetDefeated(currentBattleRounds);
                //攻击方回去
                cur_enemy_battle_entity.transform.DoMove(EaseCurve, 0.3f, Vector3.zero, false);
                //受击方下一个过来
                team_left_entities[currentBattleRounds.Left_battle_index + 1].transform.DoMove(EaseCurve, 1f, cur_player_battle_entity.transform.position, true, OnNextPlayeEntityMoveComplete);
            }
        }

        void OnNextPlayeEntityMoveComplete()
        {
            cur_player_battle_entity = team_left_entities[currentBattleRounds.Left_battle_index + 1];
            cur_player_battle_entity.transform.parent = player_battle_station;
            cur_player_battle_entity.transform.SetTRSNormalize();
            cur_player_battle_entity.SetActive(true);

            var nextBattleBound = battleRounds[battleRoundIndex + 1];
            if (nextBattleBound.AttackTeam == EBatteTeam.RightTeam)
            {
                playerHUD.SetHUD(nextBattleBound.Target, cur_player_battle_entity.transform);
                playerHUD.SetHP(nextBattleBound.Target);
            }
            else
            {
                playerHUD.SetHUD(nextBattleBound.Attacker, cur_player_battle_entity.transform);
                playerHUD.SetHP(nextBattleBound.Attacker);
            }
            playerHUD.gameObject.SetActive(true);
        }
        //攻击方移动到目标身边
        cur_enemy_battle_entity.transform.DoMove(EaseCurve, 1f, cur_player_battle_entity.transform.position + Vector3.right * 1f, true, OnMoveComplete);
    }

    //弹出伤害
    private void PopDamage(float damage, Vector3 originPos, Vector3 destPos)
    {
        var hud_tip = GameObject.Instantiate(hud_tips, hud_parent);
        hud_tip.transform.position = camera.WorldToScreenPoint(originPos);
        hud_tip.SetActive(true);
        hud_tip.GetComponent<TextMeshProUGUI>().text = damage.ToString();
        destPos = camera.WorldToScreenPoint(destPos);
        var tween = hud_tip.transform.TweenMove(0.5f, destPos, true);
        tween.SetOnComplete(() => { Destroy(hud_tip); });
        UniTween.Play(tween);
    }

    //模拟战斗
    public List<BattleRound> GetBattleRoundData(List<ItemData> team_left_items, List<ItemData> team_right_items)
    {
        List<BattleRound> battleRounds = new List<BattleRound>();
        int roundIndex = 1;
        int left_battle_index = 0;
        int right_battle_index = 0;
        var cur_player_battle_info = team_left_items[left_battle_index];
        var cur_enemy_battle_info = team_right_items[right_battle_index];

        while (cur_player_battle_info.CurHp > 0 && cur_enemy_battle_info.CurHp > 0)
        {
            if (cur_player_battle_info.Spd > cur_enemy_battle_info.Spd)
            {
                //己方出手
                TurnPlayer();
            }
            else if (cur_player_battle_info.Spd < cur_enemy_battle_info.Spd)
            {
                //敌方出手
                TurnEnemy();
            }
            else
            {
                //取随机值
                int random = UnityEngine.Random.Range(0, 2);
                if (random == 0)
                {
                    //己方出手
                    TurnPlayer();
                }
                else
                {
                    //敌方出手
                    TurnEnemy();
                }
            }
        }

        return battleRounds;

        void TurnPlayer()
        {
            float damage = cur_player_battle_info.Atk - cur_enemy_battle_info.Def;
            bool isDefeated = cur_enemy_battle_info.TakeDamage(cur_player_battle_info.Atk, cur_enemy_battle_info.Def);
            bool isEndBattle = right_battle_index + 1 >= team_right_items.Count && isDefeated;
            BattleRound battleRound = new BattleRound()
            {
                RoundIndex = roundIndex,
                Attacker = new BattleItemData().Copy(cur_player_battle_info),
                Target = new BattleItemData().Copy(cur_enemy_battle_info),
                AttackTeam = EBatteTeam.LeftTeam,
                Damage = damage,
                Left_battle_index = left_battle_index,
                Right_battle_index = right_battle_index,
                IsDefeated = isDefeated,
                IsEndBattle = isEndBattle
            };
            battleRounds.Add(battleRound);
            if (!isEndBattle)
            {
                roundIndex += 1;
            }
            else return;
            if (isDefeated)
            {
                right_battle_index += 1;
                cur_enemy_battle_info = team_right_items[right_battle_index];
            }
            else
            {
                TurnEnemy();
            }
        }

        void TurnEnemy()
        {
            float damage = cur_enemy_battle_info.Atk - cur_player_battle_info.Def;
            bool isDefeated = cur_player_battle_info.TakeDamage(cur_enemy_battle_info.Atk, cur_player_battle_info.Def);
            bool isEndBattle = left_battle_index + 1 >= team_left_items.Count && isDefeated;
            BattleRound battleRound = new BattleRound()
            {
                RoundIndex = roundIndex,
                Attacker = new BattleItemData().Copy(cur_enemy_battle_info),
                Target = new BattleItemData().Copy(cur_player_battle_info),
                AttackTeam = EBatteTeam.RightTeam,
                Damage = damage,
                Left_battle_index = left_battle_index,
                Right_battle_index = right_battle_index,
                IsDefeated = isDefeated,
                IsEndBattle = isEndBattle
            };
            battleRounds.Add(battleRound);
            if (!isEndBattle)
            {
                roundIndex += 1;
            }
            else return;
            if (isDefeated)
            {
                left_battle_index += 1;
                cur_player_battle_info = team_left_items[left_battle_index];
            }
            else
            {
                TurnPlayer();
            }
        }
    }
}
