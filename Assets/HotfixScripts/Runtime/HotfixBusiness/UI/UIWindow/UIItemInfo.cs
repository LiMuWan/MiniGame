using GameFramework.Resource;
using UnityEngine;
using UniFramework.Utility;

//Donot use base.[MethodName] 
public partial class UIItemInfo
{
    public class PropertiesTableModel : TableItemModel<PropertiesTableTemplate>
    {
        public PropertiesTableModel() { }
        public override void InitModel()
        {
            //todo
        }
    }

    protected override void InitModel()
    {
        //To do: init
        btn_sell.onClick.AddListener(() =>
        {
            NetMessageHandler.SendSellTempEquip();
            ApplicationStatusManager.s_currentAppStatus.CloseUI<UIItemInfo>();
        });
        btn_get.onClick.AddListener(() =>
         {
             NetMessageHandler.SendWearTempEquip();
             ApplicationStatusManager.s_currentAppStatus.CloseUI<UIItemInfo>();
         });
        btn_mask.onClick.AddListener(() =>
        {
            ApplicationStatusManager.s_currentAppStatus.CloseUI<UIItemInfo>();
        });
    }

    protected override void OnSetVisible(bool visible)
    {

    }

    private ItemData oldItemData;
    private ItemData newItemData;
    public void ShowItemInfo(ItemData oldItem, ItemData newItem)
    {
        if (oldItem != null && newItem != null)
        {
            ShowOld(oldItem, "已拥有");
            ShowNew(newItem, oldItem, "新获得");
            return;
        }

        if (oldItem == null)
        {
            oldGo.SetActive(false);
        }
        else
        {
            oldGo.SetActive(true);
            ShowOld(oldItem, "动物信息");
        }
        if (newItem == null)
        {
            newGo.SetActive(false);
        }
        else
        {
            newGo.SetActive(true);
            ShowNew(newItem, oldItem, "新获得");
        }
    }
   
    private string NamesFormat(string name,string quality)
    {
        return $"[{quality}]{name}";
    }

    private void ShowOld(ItemData itemData, string title)
    {
        this.oldItemData = itemData;
        var qualityConfig = ConfigLoader.Instance.Tables.ItemQuality.Get(itemData.Quality);
        var item_icon = ConfigLoader.Instance.Tables.Item.Get(itemData.ItemId).Icon;
        old_PropertiesTableManager.Count = 4;
        old_PropertiesTableManager.Each(OnOldEachProperties);
        old_title.text = title;
        old_item_name.text = NamesFormat(itemData.Name,qualityConfig.Title);
        old_item_lv.text = $"Lv.{itemData.Level}";
        // old_quality_text.text = qualityConfig.Title;
        Color color = ColorTool.HtmlStringToColor(qualityConfig.Color);
        old_item_name.SetColor(color);
        ResourcesManager.Instance.LoadAssetAsync<Texture>(qualityConfig.Icon, (texture) => { old_quality_icon.texture = texture; });
        ResourcesManager.Instance.LoadAssetAsync<Sprite>(item_icon, (sprite) => { old_item_icon.sprite = sprite; old_item_icon.SetNativeSize();});
        if (itemData.Type < 9)
        {
            if (itemData.Sex == (int)ItemSex.Female)
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(UIDefine.female_icon, (sprite) => { old_sex_icon.sprite = sprite; });
            }
            else
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(UIDefine.male_icon, (sprite) => { old_sex_icon.sprite = sprite; });
            }
        }
    }

    private void ShowNew(ItemData itemData, ItemData oldItemData, string title)
    {
        this.newItemData = itemData;
        itemData.CompareOther(oldItemData);
        var qualityConfig = ConfigLoader.Instance.Tables.ItemQuality.Get(itemData.Quality);
        var item_icon = ConfigLoader.Instance.Tables.Item.Get(itemData.ItemId).Icon;
        new_title.text = title;
        ResourcesManager.Instance.LoadAssetAsync<Texture>(qualityConfig.Icon, (texture) => { new_quality_icon.texture = texture; });
        ResourcesManager.Instance.LoadAssetAsync<Sprite>(item_icon, (sprite) => { new_item_icon.sprite = sprite; new_item_icon.SetNativeSize();});
        new_item_name.text = NamesFormat(itemData.Name,qualityConfig.Title);
        new_item_lv.text = $"Lv.{itemData.Level}";
        // new_quality_text.text = qualityConfig.Title;
        Color color = ColorTool.HtmlStringToColor(qualityConfig.Color);
        new_item_name.SetColor(color);
        new_PropertiesTableManager.Count = 4;
        new_PropertiesTableManager.Each(OnNewEachProperties);
        if (itemData.Type < 9)
        {
            if (itemData.Sex == (int)ItemSex.Female)
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(UIDefine.female_icon, (sprite) => { new_sex_icon.sprite = sprite; });
            }
            else
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(UIDefine.male_icon, (sprite) => { new_sex_icon.sprite = sprite; });
            }
        }
        if (oldItemData == null)
        {
            btn_sell.gameObject.SetActive(false);
        }
        else
        {
            btn_sell.gameObject.SetActive(true);
        }
    }

    private bool OnOldEachProperties(AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel> item, int index)
    {
        item.Template.InitOrRefresh(this.oldItemData, index);
        if (index >= 3) return true;
        return false;
    }

    private bool OnNewEachProperties(AutoGenTableItem<PropertiesTableTemplate, PropertiesTableModel> item, int index)
    {
        item.Template.InitOrRefresh(this.newItemData, index,true);
        if (index >= 3) return true;
        return false;
    }
}