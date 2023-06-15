using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UniFramework.Window;
using Rank;

//AUTO GenCode Don't edit it.
[WindowAttribute(100, false)]
public partial class UIRankList : UIWindow
{

    private ScrollView ScrollView;
    protected Image head_icon;
    protected TextMeshProUGUI avator_name;
    protected TextMeshProUGUI level_title;
    protected TextMeshProUGUI level_text;
    protected Button btn_challenge;


    protected override void InitTemplate()
    {
        ScrollView = FindChild<ScrollView>("ScrollView");
        // head_icon = FindChild<Image>("head_icon");
        // avator_name = FindChild<TextMeshProUGUI>("avator_name");
        // level_title = FindChild<TextMeshProUGUI>("level_title");
        // level_text = FindChild<TextMeshProUGUI>("level_text");
        btn_challenge = FindChild<Button>("btn_challenge");
    }

    public override void OnCreate()
    {
        base.OnCreate();
        //请求排行榜数据 TODO
        //  var items = Enumerable.Range(0, 20)
        //         .Select(i => new ItemData($"Cell {i}"))
        //         .ToArray();

            // ScrollView.UpdateData(items);
            // ScrollView.SelectCell(0);
        ScrollView.OnSelectHandle = OnSelctHandler;
    }
    
    private void OnSelctHandler(int index)
    {
       //TODO
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