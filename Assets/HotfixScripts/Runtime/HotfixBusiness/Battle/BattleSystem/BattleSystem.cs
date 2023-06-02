using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleSystem : MonoBehaviour
{
    public BattleState State;
    
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

    private void Awake()
    {
        positioningManager = GetComponent<PositioningManager>();
        teamManager = GetComponent<TeamManager>();
    }

    void Start()
    {
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
        playerHUD.SetHUD(cur_player_battle_info);
        enemyHUD.SetHUD(cur_enemy_battle_info);

        State = BattleState.PlayerTurn;
        PlayerTurn();
    }

    private void PlayerTurn()
    {
         //玩家出手
         StartCoroutine(PlayerAttack());
    }

    public void OnAttackButton()
    {
        if (State != BattleState.PlayerTurn)
            return;
        StartCoroutine(PlayerAttack());
    }

    private IEnumerator PlayerAttack()
    {
        //对敌人造成伤害
        bool isDefeated = cur_enemy_battle_info.TakeDamage(cur_player_battle_info.Atk, cur_enemy_battle_info.Def);
        yield return new WaitForSeconds(3f);
        if (isDefeated)
        {
            //结束战斗
            State = BattleState.Win;
            EndBattle();
        }
        else
        {
            //进入敌人的回合
            State = BattleState.EnemyTurn;
            StartCoroutine(EnemyTurn());
        }
          
        //检查敌人是否被击败
        //再根据结果切换阶段
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

    private IEnumerator EnemyTurn()
    {
        //敌人是用了攻击
        yield return new WaitForSeconds(2f);
        bool isDefeated = cur_player_battle_info.TakeDamage(cur_enemy_battle_info.Atk, cur_player_battle_info.Def);
        playerHUD.SetHP(cur_player_battle_info.Hp);
        yield return new WaitForSeconds(2f);   

        if (isDefeated)
        {
            State = BattleState.Lost;
        }
        else
        {
            State = BattleState.PlayerTurn;
            PlayerTurn();
        }
    }
   
    //模拟战斗
    public List<BattleRound> GetRoundData(List<ItemData> team_left_items,List<ItemData> team_right_items)
    {
        List<BattleRound> battleRounds = new List<BattleRound>();
        int roundIndex = 1;
        int left_battle_index = 0;
        int right_battle_index = 0;
        var cur_player_battle_info = team_left_items[0];
        var cur_enemy_battle_info = team_right_items[0];
        while (cur_player_battle_info.Hp > 0 && cur_enemy_battle_info.Hp > 0)
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
                int random = Random.Range(0, 2);
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
            bool isEndBattle = right_battle_index + 1 > team_right_items.Count;
            BattleRound battleRound = new BattleRound()
            {
                RoundIndex = roundIndex,
                Attacker = cur_player_battle_info,
                Target = cur_enemy_battle_info,
                AttackTeam = EBatteTeam.LeftTeam,
                Damage = damage,
                Left_battle_index = left_battle_index,
                Right_battle_index = right_battle_index,
                IsDefeated = isDefeated,
                IsEndBattle = isEndBattle
            };
            battleRounds.Add(battleRound);
            if (isDefeated)
            {
                right_battle_index += 1;
                cur_enemy_battle_info = team_right_items[right_battle_index];
            }
            if(!isEndBattle) roundIndex += 1;
        }

        void TurnEnemy()
        {
            float damage = cur_enemy_battle_info.Atk - cur_player_battle_info.Def;
            bool isDefeated = cur_player_battle_info.TakeDamage(cur_enemy_battle_info.Atk, cur_player_battle_info.Def);
            bool isEndBattle = left_battle_index + 1 > team_left_items.Count;
            BattleRound battleRound = new BattleRound()
            {
                RoundIndex = roundIndex,
                Attacker = cur_enemy_battle_info,
                Target = cur_player_battle_info,
                AttackTeam = EBatteTeam.RightTeam,
                Damage = damage,
                Left_battle_index = left_battle_index,
                Right_battle_index = right_battle_index,
                IsDefeated = isDefeated,
                IsEndBattle = left_battle_index + 1 > team_left_items.Count
            };
            battleRounds.Add(battleRound);
            if (isDefeated)
            {
                right_battle_index += 1;
                cur_enemy_battle_info = team_left_items[left_battle_index];
            }
            if(!isEndBattle) roundIndex += 1;
        }
    }
}
