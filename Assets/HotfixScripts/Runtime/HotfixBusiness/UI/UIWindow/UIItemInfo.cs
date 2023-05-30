using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;
using GameFramework.Resource;
using UnityEngine;

//Donot use base.[MethodName] 
public partial class UIItemInfo
{
    public class PropertiesTableModel : TableItemModel<PropertiesTableTemplate>
    {
        public PropertiesTableModel(){}
        public override void InitModel()
        {
            //todo
        }
    }

    protected override void InitModel()
    {
           //To do: init
    }

    protected override void OnSetVisible(bool visible) 
    { 
        
    }
    
    private ItemData itemData;

    public void ShowItemInfo(ItemData oldItem,ItemData newItem)
    { 
        if(oldItem != null && newItem != null)
        {
            ShowOld(oldItem, "已拥有");
            ShowNew(newItem, "新获得");
            return;
        }

        if (oldItem == null)
        {
            oldGo.SetActive(false);
        }
        else
        {
            oldGo.SetActive(true);
            ShowOld(oldItem,"动物信息");
        }
        if (newItem == null)
        {
            newGo.SetActive(false);
        }
        else
        {
            newGo.SetActive(true);
            ShowNew(newItem,"新获得");
        }
    }

    private void ShowOld(ItemData itemData,string title)
    {
        this.itemData = itemData;
        var qualityConfig = ConfigLoader.Instance.Tables.ItemQuality.Get(itemData.Quality);
        var item_icon = ConfigLoader.Instance.Tables.Item.Get(itemData.ItemId).Icon;
        if (itemData.Type < 9)
        {
            old_title.text = title;
            ResourcesManager.Instance.LoadAssetAsync<Texture>(qualityConfig.Icon, (texture) => { old_quality_icon.texture = texture; });
            ResourcesManager.Instance.LoadAssetAsync<Texture>(item_icon, (texture) => { old_item_icon.texture = texture; });
            if (itemData.Sex == 0)
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(UIDefine.female_icon, (sprite) => { old_sex_icon.sprite = sprite; });
            }
            else
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(UIDefine.male_icon, (sprite) => { old_sex_icon.sprite = sprite; });
            }
            old_item_name.text = itemData.Name;
            old_item_lv.text = itemData.Level.ToString();
            old_quality_text.text = qualityConfig.Title;
            old_PropertiesTableManager.Count = 4;
            old_PropertiesTableManager.Each(OnEachProperties);
        }
    }

    private void ShowNew(ItemData itemData, string title)
    {
        this.itemData = itemData;
        var qualityConfig = ConfigLoader.Instance.Tables.ItemQuality.Get(itemData.Quality);
        var item_icon = ConfigLoader.Instance.Tables.Item.Get(itemData.ItemId).Icon;
        if (itemData.Type < 9)
        {
            new_title.text = title;
            ResourcesManager.Instance.LoadAssetAsync<Texture>(qualityConfig.Icon, (texture) => { new_quality_icon.texture = texture; });
            ResourcesManager.Instance.LoadAssetAsync<Texture>(item_icon, (texture) => { new_item_icon.texture = texture; });
            if (itemData.Sex == 0)
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(UIDefine.female_icon, (sprite) => { new_sex_icon.sprite = sprite; });
            }
            else
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(UIDefine.male_icon, (sprite) => { new_sex_icon.sprite = sprite; });
            }
            new_item_name.text = itemData.Name;
            new_item_lv.text = itemData.Level.ToString();
            new_quality_text.text = qualityConfig.Title;
            new_PropertiesTableManager.Count = 4;
            new_PropertiesTableManager.Each(OnEachProperties);
        }
    }

    private bool OnEachProperties(AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel> item, int index)
    {
       item.Template.InitOrRefresh(this.itemData,index);
       if(index >= 3) return true;
       return false;
    }
}