using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//每回合数据
public class BattleRound 
{
    public int RoundIndex;
    //攻击方
    public ItemData Attacker;
    //受击方
    public ItemData Target;
    //出手队伍
    public EBatteTeam AttackTeam;
    public float Damage;
    
    //左边队伍出战索引
    public int Left_battle_index = 0;
    //右边队伍出战索引
    public int Right_battle_index = 0;
    //受击方是否死亡
    public bool IsDefeated;
    public bool IsEndBattle;
}

//战斗队伍
public enum EBatteTeam
{
    LeftTeam = 0,
    RightTeam = 1,
}
