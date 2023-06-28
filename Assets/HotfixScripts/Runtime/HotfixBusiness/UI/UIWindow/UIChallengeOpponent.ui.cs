using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UniFramework.Window;
using Arena;

//AUTO GenCode Don't edit it.
[WindowAttribute(100, false)]
public partial class UIChallengeOpponent : UIWindow
{

    private GridView gridView;
    protected Button btn_add;
    protected Button btn_refresh;


    protected override void InitTemplate()
    {
        gridView = FindChild<GridView>("Grid View");
        btn_add = FindChild<Button>("btn_add");
        btn_refresh = FindChild<Button>("btn_refresh"); 
    }

    public override void OnCreate()
    {
        base.OnCreate();
        GenerateCells(8);
        gridView.OnCellClicked(OnSelctHandler);
    }

    private void SelectCell()
    {
        if (gridView.DataCount == 0)
        {
            return;
        }
        gridView.UpdateSelection(0);
        // TryParseValue(selectIndexInputField, 0, gridView.DataCount - 1, index =>
        // {
            
        //     gridView.ScrollTo(index, 0.4f, Ease.InOutQuint, (Alignment)alignmentDropdown.value);
        // });
    }

    private void GenerateCells(int dataCount)
    {
        gridView.UpdateContents(UserDataManager.Instance.EnemyInfos);
        SelectCell();
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