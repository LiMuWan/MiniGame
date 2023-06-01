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
    public Slider mpSlider;

    public void SetHUD(CharacterInfo characterInfo)
    {
        nameText.text = characterInfo.name;
        hpSlider.value = characterInfo.Hp;
        hpSlider.maxValue = characterInfo.MaxHp;
        mpSlider.value = characterInfo.Mp;
        mpSlider.maxValue = characterInfo.MaxMp;
    }

    public void SetHP(int hp)
    {
        hpSlider.value = hp;
    }

    public void SetMp(int mp)
    {
        mpSlider.value = mp;
    }
}
