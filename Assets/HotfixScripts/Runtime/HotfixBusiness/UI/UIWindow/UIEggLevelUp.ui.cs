using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UniFramework.Window;

//AUTO GenCode Don't edit it.
[WindowAttribute(100, false)]
public partial class UIEggLevelUp : UIWindow
{

    protected TextMeshProUGUI coin_text;
    protected Button btn_buy_coin;
    protected Slider count_time_slider;
    protected Button btn_levelup;


    protected override void InitTemplate()
    {
                    coin_text = FindChild<TextMeshProUGUI>("coin_text");
        btn_buy_coin = FindChild<Button>("btn_buy_coin");
        count_time_slider = FindChild<Slider>("count_time_slider");
        btn_levelup = FindChild<Button>("btn_levelup");

            
    }

    public override void OnCreate()
    {
        base.OnCreate();
    }

    public override void OnDestroy()
    {
       
    }

    public override void OnRefresh()
    {
       
    }

    public override void OnUpdate()
    {
        
    }
}