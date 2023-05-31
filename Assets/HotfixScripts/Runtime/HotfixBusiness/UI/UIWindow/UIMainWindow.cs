using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Hotfix.EventDefine;
using UniFramework.Event;
using UniFramework.Utility;
using UnityEngine.UI;

//Donot use base.[MethodName] 
public partial class UIMainWindow
{
    private List<ItemData> animalDatas => UserDataManager.Instance.AnimalDatas;
    private List<ItemData> foodDatas => UserDataManager.Instance.FoodDatas;
    private List<ItemData> homeDatas => UserDataManager.Instance.HomeDatas;
    
    private EventGroup eventGroup = new EventGroup();

    public class item_animal_bagTableModel : TableItemModel<item_animal_bagTableTemplate>
    {
        public ItemData AimalData;
        public item_animal_bagTableModel() { }

        //默认初始化函数,此类写item逻辑
        public override void InitModel()
        {
            //todo
        }

        public void RefreshData(ItemData itemData)
        {
            AimalData = itemData;
        }
    }

    public class item_food_bagTableModel : TableItemModel<item_food_bagTableTemplate>
    {

        public ItemData FoodData;
        public item_food_bagTableModel() { }
        public override void InitModel()
        {
            //todo
        }

        public void RefreshData(ItemData itemData)
        {
            FoodData = itemData;
        }
    }

    public class item_home_bagTableModel : TableItemModel<item_home_bagTableTemplate>
    {
        public ItemData HomeData;
        public item_home_bagTableModel() { }
        public override void InitModel()
        {
            //todo
        }

        public void RefreshData(ItemData itemData)
        {
            HomeData = itemData;
        }
    }

    protected override void InitModel()
    {
        RefreshBag();
        btn_egg.onClick.AddListener(()=>{NetMessageHandler.SendOpenTreasureBox();});
    }

    private void RefreshBag()
    {
        item_animal_bagTableManager.Each(EachAnimalSlot);
        item_food_bagTableManager.Each(EachFoodSlot);
        item_home_bagTableManager.Each(EachHomeSlot);
    }

    private void InitEvent()
    {
        eventGroup.AddListener<UserEventDefine.UserOpenTreasureBox>(Handler);
        eventGroup.AddListener<UserEventDefine.UserCoinFresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserLevelUp>(Handler);
        eventGroup.AddListener<UserEventDefine.UserExperienceRefresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserMaxExperienceRefresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserEggLevelUp>(Handler);
        eventGroup.AddListener<UserEventDefine.UserEquipRefresh>(Handler);
    }
    
    
    private void Handler(IEventMessage message)
    {
        if(message is UserEventDefine.UserOpenTreasureBox uotb)
        {
            var tuple = UserDataManager.Instance.GetEquipStatus();
            if (tuple.Item1 == 0)
            {
                //第一次获取
                ApplicationStatusManager.s_currentAppStatus.OpenUI<UIItemInfo>((ui) =>
                {
                    ui.ShowItemInfo(null, tuple.Item2);
                });
            }
            else
            {
                //装备比较
                ApplicationStatusManager.s_currentAppStatus.OpenUI<UIItemInfo>((ui) =>
                {
                    ui.ShowItemInfo(tuple.Item2, UserDataManager.Instance.GetTempEquipData());
                });
            }
        }
        else if(message is UserEventDefine.UserEquipRefresh uer)
        {
           RefreshBag();
        }
        else if (message is UserEventDefine.UserCoinFresh ucf)
        {
            coin_text.text = $"{ucf.coin}";
        }
        else if (message is UserEventDefine.UserMaxExperienceRefresh ume)
        {
            user_level_slider.maxValue = ume.max_experience;
            user_level_slider.value = 0;
        }
        else if (message is UserEventDefine.UserExperienceRefresh ue)
        {
            user_level_slider.value = ue.experience;
        }
        if (message is UserEventDefine.UserLevelUp ulu)
        {
            level_text.text = $"{ulu.currentLevel}";
        }
    }
    
    private bool EachHomeSlot(AutoGenTableItem<item_home_bagTableTemplate, item_home_bagTableModel> item, int index)
    {
        UniLogger.Log($"index = {index}");
        item.Model.RefreshData(homeDatas[index]);
        item.Template.RefreshUI(homeDatas[index]);
        if (index >= homeDatas.Count - 1) return true;
        return false;
    }

    private bool EachFoodSlot(AutoGenTableItem<item_food_bagTableTemplate, item_food_bagTableModel> item, int index)
    {
        UniLogger.Log($"index = {index}");
        item.Model.RefreshData(foodDatas[index]);
        item.Template.RefreshUI(foodDatas[index]);
        if (index >= foodDatas.Count - 1) return true;
        return false;
    }

    protected override void OnSetVisible(bool visible)
    {

    }

    private bool EachAnimalSlot(AutoGenTableItem<item_animal_bagTableTemplate, item_animal_bagTableModel> item, int index)
    {
        UniLogger.Log($"index = {index}");
        item.Model.RefreshData(animalDatas[index]);
        item.Template.RefreshUI(animalDatas[index]);
        if (index >= animalDatas.Count - 1) return true;
        return false;
    }
}