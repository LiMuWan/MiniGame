using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//物品数据
public class ItemData
{
    public int ItemId;
    public int Type;
    public int Quality;
    public int Sex;
    public string Name;
    public int Level;
    public float Hp;
    public float Spd;
    public float Atk;
    public float Def;

    //属性变化值
    private List<bool> compareData = new List<bool>();
    public List<bool> CompareData
    {
        get { return compareData; }
        private set { }
    }

    public void CompareOther(ItemData otherItemData)
    {
        if (otherItemData == null)
        {
            compareData.Clear();
        }
        else
        {
            compareData.Add(Hp > otherItemData.Hp);
            compareData.Add(Spd > otherItemData.Spd);
            compareData.Add(Atk > otherItemData.Atk);
            compareData.Add(Def > otherItemData.Def);
        }
    }

    public bool TakeDamage(float atk, float def)
    {
        float damage = atk - def;
        Hp -= damage;
        if (Hp <= 0)
            return true;
        else
            return false;
    }
}