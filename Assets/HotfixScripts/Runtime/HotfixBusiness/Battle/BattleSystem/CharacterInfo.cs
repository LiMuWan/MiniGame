using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterInfo : MonoBehaviour
{
    public string Name;
    public int Hp;
    public int MaxHp;
    public int Mp;
    public int MaxMp;
    public int Attack;
    public int Defense;
    public int Speed;

    public bool TakeDamage(int atk,int def)
    {
        int damage = atk - def;
        Hp -= damage;
        if (Hp <= 0)
            return true;
        else
            return false;
    }
    
    public void Heal(int healAmount)
    {
        Hp += healAmount;
        if (Hp > MaxHp)
            Hp = MaxHp;
    }
}
