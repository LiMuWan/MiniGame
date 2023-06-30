using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UniFramework.Window;
using GameFramework.Resource;

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
        
        public void InitOrRefresh(ItemData itemData,int index,bool isNew = false)
        {
            bool isShowCompareIcon = itemData.CompareData.Count > 0 && isNew;
            compare_icon.gameObject.SetActive(isShowCompareIcon);
            if(isShowCompareIcon)
            {
                var value = itemData.CompareData[index];
                if ((ECompareResult)value == ECompareResult.Equals) compare_icon.gameObject.SetActive(false);
                else
                {
                    var icon_name = (ECompareResult)value == ECompareResult.MoreThan ? UIDefine.arrow_up_icon : UIDefine.arrow_down_icon;
                    ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(icon_name, (sprite) => { compare_icon.sprite = sprite; });
                }
            }
            if (index == 0)
            {
                title_text.text = "血量";
                value_text.text = itemData.Hp.ToString();
            }
            else if (index == 1)
            {
                title_text.text = "速度";
                value_text.text = itemData.Spd.ToString();
            }
            else if (index == 2)
            {
                title_text.text = "攻击";
                value_text.text = itemData.Atk.ToString();
            }
            else if (index == 3)
            {
                title_text.text = "防御";
                value_text.text = itemData.Def.ToString();
            }
        }
    }
    
    //old or current
    protected GameObject oldGo;
    protected TextMeshProUGUI old_title;
    protected RawImage old_quality_icon;
    protected Image old_item_icon;
    protected Image old_sex_icon;
    protected TextMeshProUGUI old_quality_text;
    protected TextMeshProUGUI old_item_name;
    protected TextMeshProUGUI old_item_lv;
    protected VerticalLayoutGroup old_Properties;

    //new 
    protected GameObject newGo;
    protected TextMeshProUGUI new_title;
    protected RawImage new_quality_icon;
    protected Image new_item_icon;
    protected Image new_sex_icon;
    protected TextMeshProUGUI new_quality_text;
    protected TextMeshProUGUI new_item_name;
    protected TextMeshProUGUI new_item_lv;
    protected VerticalLayoutGroup new_Properties;

    protected Button btn_sell;
    protected Button btn_get;
    protected Button btn_mask;

    protected AutoUITableManager<AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel>> old_PropertiesTableManager = new AutoUITableManager<AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel>>();
    
    protected AutoUITableManager<AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel>> new_PropertiesTableManager = new AutoUITableManager<AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel>>();
    protected override void InitTemplate()
    {
        //old 
        oldGo = Find<Transform>("old").gameObject;
        old_title = Find<TextMeshProUGUI>("old/title");
        old_quality_icon = Find<RawImage>("old/left/quality_icon");
        old_item_icon = Find<Image>("old/left/item_icon");
        old_sex_icon = Find<Image>("old/left/sex_icon");
        old_item_lv = Find<TextMeshProUGUI>("old/left/lv_text");
        old_quality_text = Find<TextMeshProUGUI>("old/right/quality_text");
        old_item_name = Find<TextMeshProUGUI>("old/right/item_name");
        old_Properties = Find<VerticalLayoutGroup>("old/right/Properties");
        old_PropertiesTableManager.InitFromLayout(old_Properties);

        //new
        newGo = Find<Transform>("new").gameObject;
        new_title  = Find<TextMeshProUGUI>("new/title");
        new_quality_icon = Find<RawImage>("new/left/quality_icon");
        new_item_icon = Find<Image>("new/left/item_icon");
        new_sex_icon = Find<Image>("new/left/sex_icon");
        new_item_lv = Find<TextMeshProUGUI>("new/left/lv_text");
        new_quality_text = Find<TextMeshProUGUI>("new/right/quality_text");

        new_item_name = Find<TextMeshProUGUI>("new/right/item_name");
        new_Properties = Find<VerticalLayoutGroup>("new/right/Properties");
        btn_sell = FindChild<Button>("btn_sell");
        btn_get = FindChild<Button>("btn_get");
        btn_mask = FindChild<Button>("btn_mask");
        new_PropertiesTableManager.InitFromLayout(new_Properties);
    }

    public override void OnCreate()
    {
        base.OnCreate();
    }

    public override void OnDestroy()
    {
       btn_sell.onClick.RemoveAllListeners();
       btn_get.onClick.RemoveAllListeners();
       btn_mask.onClick.RemoveAllListeners();
    }

    public override void OnRefresh()
    {
       
    }

    public override void OnUpdate()
    {
        
    }
}