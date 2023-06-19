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
public partial class UIChallengeOpponent : UIWindow
{

    protected Image ScrollView;
    protected Image head_icon;
    protected Button btn_add;
    protected Button btn_refresh;


    protected override void InitTemplate()
    {
                    ScrollView = FindChild<Image>("ScrollView");
        head_icon = FindChild<Image>("head_icon");
        btn_add = FindChild<Button>("btn_add");
        btn_refresh = FindChild<Button>("btn_refresh");

            
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