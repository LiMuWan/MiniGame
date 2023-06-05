using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class BattleHUD : MonoBehaviour
{
    public Camera camera;
    public Transform target;
    public Image hpImg;

    public void SetHUD(BattleItemData characterInfo,Transform target)
    {
        this.target = target;
        hpImg.fillAmount = characterInfo.CurHp/characterInfo.Hp;
    }

    public void SetHP(BattleItemData characterInfo)
    {
         hpImg.fillAmount = characterInfo.CurHp/characterInfo.Hp;
         Debug.Log($"血量 = { hpImg.fillAmount} characterInfo.CurHp = {characterInfo.CurHp} , characterInfo.Hp ={characterInfo.Hp} ");
    }

    private void LateUpdate()
    {
        if (target != null)
        {
            transform.position = camera.WorldToScreenPoint(target.position - Vector3.up*1f); // 将血条放在目标上方
        }
    }
}
