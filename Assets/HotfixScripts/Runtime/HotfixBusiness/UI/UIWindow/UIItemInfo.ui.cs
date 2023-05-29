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
public partial class UIItemInfo : UIWindow
{
    public class PropertiesTableTemplate : TableItemTemplate
    {
        public PropertiesTableTemplate(){}
        public TextMeshProUGUI title_text;
        public TextMeshProUGUI value_text;
        public Image compare_icon;

        public override void InitTemplate()
        {
            title_text = FindChild<TextMeshProUGUI>("title_text");
            value_text = FindChild<TextMeshProUGUI>("value_text");
            compare_icon = FindChild<Image>("compare_icon");

        }
    }
    
    //old or current
    protected TextMeshProUGUI old_title;
    protected Image old_quality_icon;
    protected Image old_item_icon;
    protected Image old_sex_icon;
    protected TextMeshProUGUI old_quality_text;
    protected TextMeshProUGUI old_item_name;
    protected VerticalLayoutGroup old_Properties;

    //new 
    protected TextMeshProUGUI new_title;
    protected Image new_quality_icon;
    protected Image new_item_icon;
    protected Image new_sex_icon;
    protected TextMeshProUGUI new_quality_text;
    protected TextMeshProUGUI new_item_name;
    protected VerticalLayoutGroup new_Properties;

    protected Button btn_sell;
    protected Button btn_get;

    protected AutoUITableManager<AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel>> old_PropertiesTableManager = new AutoUITableManager<AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel>>();
    
    protected AutoUITableManager<AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel>> new_PropertiesTableManager = new AutoUITableManager<AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel>>();
    protected override void InitTemplate()
    {
        //old 
        old_title = Find<TextMeshProUGUI>("old/left/title");
        old_quality_icon = Find<Image>("old/left/quality_icon");
        old_item_icon = Find<Image>("old/left/item_icon");
        old_sex_icon = Find<Image>("old/left/sex_icon");
        old_quality_text = Find<TextMeshProUGUI>("old/right/quality_text");
        old_item_name = Find<TextMeshProUGUI>("old/right/item_name");
        old_Properties = Find<VerticalLayoutGroup>("old/right/Properties");
        old_PropertiesTableManager.InitFromLayout(old_Properties);

        //new
        new_quality_icon = Find<Image>("new/left/quality_icon");
        new_item_icon = Find<Image>("new/left/item_icon");
        new_sex_icon = Find<Image>("new/left/sex_icon");
        new_quality_text = Find<TextMeshProUGUI>("new/right/quality_text");
        new_item_name = Find<TextMeshProUGUI>("new/right/item_name");
        new_Properties = Find<VerticalLayoutGroup>("new/right/Properties");
        btn_sell = FindChild<Button>("btn_sell");
        btn_get = FindChild<Button>("btn_get");
        new_PropertiesTableManager.InitFromLayout(new_Properties);
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