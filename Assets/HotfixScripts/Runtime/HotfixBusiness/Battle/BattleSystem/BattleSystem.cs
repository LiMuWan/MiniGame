using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleSystem : MonoBehaviour
{
    public BattleState State;
    public GameObject playerPrefab;
    public GameObject enemyPrefab;
    public Transform playerBattleStation;
    public Transform enemyBattleStation;

    public CharacterInfo enemyCharacterInfo;
    public CharacterInfo playerCharacterInfo;

    public BattleHUD enemyHUD;
    public BattleHUD playerHUD;

    void Start()
    {
        State = BattleState.Start;
        SetupBattle();
    }

    private void SetupBattle()
    {
        GameObject enemy = Instantiate(playerPrefab, playerBattleStation);
        enemyCharacterInfo = enemy.GetComponent<CharacterInfo>();
        GameObject player = Instantiate(enemyPrefab, enemyBattleStation);
        playerCharacterInfo = player.GetComponent<CharacterInfo>();
        playerHUD.SetHUD(playerCharacterInfo);
        enemyHUD.SetHUD(enemyCharacterInfo);

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

    public void OnHealButton()
    {
        if (State != BattleState.PlayerTurn)
            return;
        StartCoroutine(PlayerHeal());
    }

    private IEnumerator PlayerAttack()
    {
        //对敌人造成伤害
        bool isDefeated = enemyCharacterInfo.TakeDamage(playerCharacterInfo.Attack, enemyCharacterInfo.Defense);
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

    private IEnumerator PlayerHeal()
    {
        playerCharacterInfo.Heal(5);
        playerHUD.SetHP(playerCharacterInfo.Hp);
        Debug.Log("player 使用了治疗！");
        yield return new WaitForSeconds(1f);
        Debug.Log("player 的体力恢复了！");
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
        bool isDefeated = playerCharacterInfo.TakeDamage(enemyCharacterInfo.Attack, playerCharacterInfo.Defense);
        playerHUD.SetHP(playerCharacterInfo.Hp);
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
}
