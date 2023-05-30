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
    private List<ItemData> animalDatas = new List<ItemData>(16);
    private List<ItemData> foodDatas = new List<ItemData>(4);

    private List<ItemData> homeDatas = new List<ItemData>(2);
    
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
        // //动物数据
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 1 });
        // animalDatas.Add(new ItemData() { Name = "母狗", AnimalType = 1 });
        // animalDatas.Add(new ItemData() { Name = "公猫", AnimalType = 2 });
        // animalDatas.Add(new ItemData() { Name = "母猫", AnimalType = 2 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 3 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 3 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 4 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 4 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 5 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 5 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 6 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 6 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 7 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 7 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 8 });
        // animalDatas.Add(new ItemData() { Name = "公狗", AnimalType = 8 });
        // //食物数据
        // foodDatas.Add(new ItemData() { Name = "食物A", AnimalType = 9 });
        // foodDatas.Add(new ItemData() { Name = "食物B", AnimalType = 9 });
        // foodDatas.Add(new ItemData() { Name = "食物C", AnimalType = 9 });
        // foodDatas.Add(new ItemData() { Name = "食物D", AnimalType = 9 });
        // //爱巢数据
        // homeDatas.Add(new ItemData() { Name = "爱巢A", AnimalType = 10 });
        // homeDatas.Add(new ItemData() { Name = "爱巢B", AnimalType = 10 });

        item_animal_bagTableManager.Each(EachAnimalSlot);
        item_food_bagTableManager.Each(EachFoodSlot);
        item_home_bagTableManager.Each(EachHomeSlot);
        btn_egg.onClick.AddListener(()=>{NetMessageHandler.SendOpenTreasureBox();});
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
            
        }
        else if(message is UserEventDefine.UserEquipRefresh uer)
        {
            var tuple = UserDataManager.Instance.GetEquipStatus();
            if(tuple.Item1 == 0)
            {
                //第一次获取
                // ApplicationStatusManager.s_currentAppStatus.OpenUI<UIItemInfo>()
            }
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