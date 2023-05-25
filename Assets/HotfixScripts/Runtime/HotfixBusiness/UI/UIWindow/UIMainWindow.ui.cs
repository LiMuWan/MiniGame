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
public partial class UIMainWindow : UIWindow
{
    public class item_bagTableTemplate : TableItemTemplate
    {
        public item_bagTableTemplate(){}

        public override void InitTemplate()
        {

        }
    }

    protected Image icon;
    protected GridLayoutGroup item_bag;

    protected AutoUITableManager<AutoGenTableItem<item_bagTableTemplate, item_bagTableModel>> item_bagTableManager = new AutoUITableManager<AutoGenTableItem<item_bagTableTemplate, item_bagTableModel>>();

    protected override void InitTemplate()
    {
        icon = FindChild<Image>("icon");
        item_bag = FindChild<GridLayoutGroup>("item_bag");

        item_bagTableManager.InitFromLayout(item_bag);

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