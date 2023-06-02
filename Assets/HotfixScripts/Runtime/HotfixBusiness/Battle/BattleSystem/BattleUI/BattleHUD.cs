using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class BattleHUD : MonoBehaviour
{
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI lvText;
    public Slider hpSlider;

    public void SetHUD(ItemData characterInfo)
    {
        nameText.text = characterInfo.Name;
        hpSlider.value = characterInfo.Hp;
        hpSlider.maxValue = characterInfo.Hp;
    }

    public void SetHP(float hp)
    {
        hpSlider.value = hp;
    }
}
