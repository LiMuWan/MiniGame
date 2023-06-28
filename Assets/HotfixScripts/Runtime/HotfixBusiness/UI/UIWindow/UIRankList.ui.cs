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
    protected Button btn_challenge;
    private Cell myData;


    protected override void InitTemplate()
    {
        ScrollView = FindChild<ScrollView>("ScrollView");

        btn_challenge = FindChild<Button>("btn_challenge");
        myData = FindChild<Cell>("select");
    }

    public override void OnCreate()
    {
        base.OnCreate();
        GenerateCell();
        // ScrollView.OnSelectHandle = OnSelctHandler;
    }
    
    private void GenerateCell()
    {
        Debug.Log("rankList.count = " + UserDataManager.Instance.RankInfo.rankInfoList.Count);
        ScrollView.UpdateData(UserDataManager.Instance.RankInfo.rankInfoList);
        // ScrollView.SelectCell(0);
    }

    private void OnSelctHandler(int index)
    {
       //TODO
       //select.UpdateContent();
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