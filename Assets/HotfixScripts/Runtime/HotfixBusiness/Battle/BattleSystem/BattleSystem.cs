using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Tween;
using System;
using TMPro;

public class BattleSystem : MonoBehaviour
{
    public Camera camera;
    public BattleState State;
    public GameObject hud_tips;
    public Transform hud_parent;
    public TextMeshProUGUI round_text;
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

    public Transform player_battle_station;
    public Transform enemy_battle_station;
    #endregion

    private List<BattleRound> battleRounds;
    private int battleRoundIndex = 0;
    public AnimationCurve EaseCurve;

    private void Awake()
    {
        positioningManager = GetComponent<PositioningManager>();
        teamManager = GetComponent<TeamManager>();
    }

    void Start()
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
        State = BattleState.Start;
        SetupBattle();
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
        if (battleRounds[battleRoundIndex].AttackTeam == EBatteTeam.LeftTeam)
        {
            State = BattleState.PlayerTurn;
            playerHUD.SetHUD(battleRounds[battleRoundIndex].Attacker, cur_player_battle_entity.transform);
            enemyHUD.SetHUD(battleRounds[battleRoundIndex].Target, cur_enemy_battle_entity.transform);
            PlayerTurn();
        }
        else
        {
            State = BattleState.EnemyTurn;
            playerHUD.SetHUD(battleRounds[battleRoundIndex].Target, cur_player_battle_entity.transform);
            enemyHUD.SetHUD(battleRounds[battleRoundIndex].Attacker, cur_enemy_battle_entity.transform);
            EnemyTurn();
        }
    }

    private void SetBattleRound(int battleRound)
    {
        round_text.text = $"回合{battleRound}";
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
        GameObject attackerGo = team_left_entities[currentBattleRounds.Left_battle_index];
        GameObject targetGo = team_right_entities[currentBattleRounds.Right_battle_index];
        void OnMoveComplete()
        {
            //敌方抖动
            targetGo.transform.DOShake(0.2f, Vector3.right * 0.2f);
            //我方抖动
            attackerGo.transform.DOShake(0.2f, Vector3.left * 0.2f, OnShakeComplete);
            void OnShakeComplete()
            {
                //弹出伤害值
                PopDamage(currentBattleRounds.Damage, targetGo.transform.position + Vector3.right * 0.5f, targetGo.transform.position + Vector3.up * 2f + Vector3.right * 0.5f);
                //设置血量
                enemyHUD.SetHP(currentBattleRounds.Target);
                Debug.Log($"PlayerAttack 回合数：{currentBattleRounds.RoundIndex},攻击方 = {currentBattleRounds.AttackTeam.ToString()},伤害值 = {currentBattleRounds.Damage}，防守方血量 = {currentBattleRounds.Target.CurHp}");
                //判断当前目标是否死亡，如果死亡，判断游戏是否结束，
                if (currentBattleRounds.IsEndBattle)
                {
                    State = BattleState.Win;
                    //如果结束，弹出游戏胜利结束面板
                    return;
                }
                //如果没结束，下一个目标移动到当前目标
                if (currentBattleRounds.IsDefeated)
                {
                    Debug.Log("当前回合，防守方被击败一个动物");
                    void OnScaleComplete()
                    {
                        team_right_entities[currentBattleRounds.Right_battle_index + 1].transform.DoMove(EaseCurve, 1f, cur_enemy_battle_entity.transform.position, true, OnNextEnemyEntityMoveComplete);
                        enemyHUD.SetHUD(currentBattleRounds.Target, null);
                        enemyHUD.gameObject.SetActive(false);
                    }
                    cur_enemy_battle_entity.transform.DoScale(EaseCurve, 0.2f, Vector3.one, Vector3.zero, OnScaleComplete);
                }
                else
                {
                    //回去
                    cur_player_battle_entity.transform.DoMove(EaseCurve, 0.3f, Vector3.zero, false, () =>
                     {
                         State = BattleState.EnemyTurn;
                         EnemyTurn();
                         //下一回合
                         battleRoundIndex += 1;
                     });
                }
            }
        }

        void OnNextEnemyEntityMoveComplete()
        {
            GameObject.DestroyImmediate(cur_enemy_battle_entity);
            cur_enemy_battle_entity = team_right_entities[currentBattleRounds.Right_battle_index + 1];
            cur_enemy_battle_entity.transform.parent = enemy_battle_station;
            cur_enemy_battle_entity.transform.SetTRSNormalize();

            var nextBattleBound = battleRounds[battleRoundIndex + 1];
            //下一回合
            battleRoundIndex += 1;
            if (nextBattleBound.AttackTeam == EBatteTeam.LeftTeam)
            {
                // playerHUD.SetHUD(nextBattleBound.Attacker, cur_player_battle_entity.transform);
                enemyHUD.SetHUD(nextBattleBound.Target, cur_enemy_battle_entity.transform);
                enemyHUD.SetHP(nextBattleBound.Target);
            }
            else
            {
                // playerHUD.SetHUD(nextBattleBound.Target, cur_player_battle_entity.transform);
                enemyHUD.SetHUD(nextBattleBound.Attacker, cur_enemy_battle_entity.transform);
                enemyHUD.SetHP(nextBattleBound.Attacker);
            }
            enemyHUD.gameObject.SetActive(true);
            //回去
            cur_player_battle_entity.transform.DoMove(EaseCurve, 0.3f, Vector3.zero, false, () =>
            {
                cur_player_battle_entity = team_left_entities[currentBattleRounds.Left_battle_index + 1];
                cur_player_battle_info = team_left_items[currentBattleRounds.Left_battle_index + 1];

                if (nextBattleBound.AttackTeam == EBatteTeam.LeftTeam)
                {
                    State = BattleState.PlayerTurn;
                    PlayerTurn();
                }
                else
                {
                    State = BattleState.EnemyTurn;
                    EnemyTurn();
                }
            });

        }

        attackerGo.transform.DoMove(EaseCurve, 1f, targetGo.transform.position + Vector3.left * 1f, true, OnMoveComplete);
    }

    private void EndBattle()
    {
        if (State == BattleState.Win)
        {
            Debug.Log("player 赢得了战斗！");
        }
        else if (State == BattleState.Lost)
        {
            Debug.Log("player 被击败了");
        }
    }

    private void EnemyAttack()
    {
        //当前回合
        var currentBattleRounds = battleRounds[battleRoundIndex];
        //显示回合数
        SetBattleRound(currentBattleRounds.RoundIndex);
        //对敌人造成伤害
        GameObject attackerGo = team_right_entities[currentBattleRounds.Right_battle_index];
        GameObject targetGo = team_left_entities[currentBattleRounds.Left_battle_index];
        void OnMoveComplete()
        {
            //敌方抖动
            targetGo.transform.DOShake(0.2f, Vector3.left * 0.2f);
            //我方抖动
            attackerGo.transform.DOShake(0.2f, Vector3.right * 0.2f, OnShakeComplete);

            void OnShakeComplete()
            {
                //弹出伤害值
                PopDamage(currentBattleRounds.Damage, targetGo.transform.position + Vector3.right * 0.5f, targetGo.transform.position + Vector3.up * 2f + Vector3.right * 0.5f);
                //设置血量
                playerHUD.SetHP(currentBattleRounds.Target);
                Debug.Log($"EnemyAttack 回合数：{currentBattleRounds.RoundIndex},攻击方 = {currentBattleRounds.AttackTeam.ToString()},伤害值 = {currentBattleRounds.Damage}，防守方血量 = {currentBattleRounds.Target.CurHp}");
                //判断当前目标是否死亡，如果死亡，判断游戏是否结束，
                if (currentBattleRounds.IsEndBattle)
                {
                    State = BattleState.Lost;
                    //如果结束，弹出游戏失败结束面板
                    Debug.Log("You Lost");
                    return;
                }
                //如果没结束，下一个目标移动到当前目标
                if (currentBattleRounds.IsDefeated)
                {
                    Debug.Log("当前回合，防守方被击败一个动物");
                    void OnScaleComplete()
                    {
                        team_left_entities[currentBattleRounds.Left_battle_index + 1].transform.DoMove(EaseCurve, 1f, cur_player_battle_entity.transform.position, true, OnNextPlayeEntityMoveComplete);
                        playerHUD.SetHUD(currentBattleRounds.Target, null);
                        playerHUD.gameObject.SetActive(false);
                    }
                    cur_player_battle_entity.transform.DoScale(EaseCurve, 0.2f, Vector3.one, Vector3.zero, OnScaleComplete);
                }
                else
                {
                    //回去
                    cur_enemy_battle_entity.transform.DoMove(EaseCurve, 0.3f, Vector3.zero, false, () =>
                     {
                         State = BattleState.PlayerTurn;
                         PlayerTurn();
                         battleRoundIndex += 1;
                     });
                }
            }

        }

        void OnNextPlayeEntityMoveComplete()
        {
            GameObject.DestroyImmediate(cur_player_battle_entity);
            cur_player_battle_entity = team_left_entities[currentBattleRounds.Left_battle_index + 1];
            cur_player_battle_entity.transform.parent = player_battle_station;
            cur_enemy_battle_entity.transform.SetTRSNormalize();

            var nextBattleBound = battleRounds[battleRoundIndex + 1];
            battleRoundIndex += 1;
            if (nextBattleBound.AttackTeam == EBatteTeam.RightTeam)
            {
                //   enemyHUD.SetHUD(nextBattleBound.Attacker, cur_enemy_battle_entity.transform);
                playerHUD.SetHUD(nextBattleBound.Target, cur_player_battle_entity.transform);
                playerHUD.SetHP(nextBattleBound.Target);
            }
            else
            {
                //   enemyHUD.SetHUD(nextBattleBound.Target, cur_enemy_battle_entity.transform);
                playerHUD.SetHUD(nextBattleBound.Attacker, cur_player_battle_entity.transform);
                playerHUD.SetHP(nextBattleBound.Attacker);
            }
            playerHUD.gameObject.SetActive(true);
            //回去
            cur_enemy_battle_entity.transform.DoMove(EaseCurve, 0.3f, Vector3.zero, false, () =>
              {
                  cur_enemy_battle_entity = team_right_entities[currentBattleRounds.Right_battle_index + 1];
                  cur_enemy_battle_info = team_right_items[currentBattleRounds.Right_battle_index + 1];

                  if (nextBattleBound.AttackTeam == EBatteTeam.RightTeam)
                  {
                      State = BattleState.EnemyTurn;
                      EnemyTurn();
                  }
                  else
                  {
                      State = BattleState.PlayerTurn;
                      PlayerTurn();
                  }
              });
        }
        //攻击方移动到目标身边
        attackerGo.transform.DoMove(EaseCurve, 1f, targetGo.transform.position + Vector3.right * 1f, true, OnMoveComplete);
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
            bool isEndBattle = right_battle_index + 1 >= team_right_items.Count;
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
            bool isEndBattle = left_battle_index + 1 >= team_left_items.Count;
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
