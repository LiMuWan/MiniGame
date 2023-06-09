using System.Collections.Generic;
using Hotfix.EventDefine;
using UniFramework.Event;
using UniFramework.Utility;
using UnityEngine;
using UnityEngine.UI;
using UniFramework.Singleton;

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
        btn_egg.onClick.AddListener(()=>
        {
            UniSingleton.Delay(3f,()=>
            {
                if (UserDataManager.Instance.EquipList.tempEquip != null)
                {
                    OpenTreasureBox();
                }
                else
                {
                    NetMessageHandler.SendOpenTreasureBox();
                }
                egg_UIParticle.Stop();
            });
            // egg_UIParticle.gameObject.SetActive(true);
            egg_UIParticle.Play();
           
        });

        ForceRefreshLayout(avator_horizontalLayoutGroup);
    }

    private void ForceRefreshLayout(HorizontalLayoutGroup layoutGroup)
    {
        layoutGroup.enabled = false;
        UniSingleton.Delay(0.1f,()=>{ layoutGroup.enabled = true;});
    }

    private void RefreshBag()
    {   UniLogger.Log("item_animal_bagTableManager.Each(EachAnimalSlot);");
        item_animal_bagTableManager.Each(EachAnimalSlot);
        UniLogger.Log(" item_food_bagTableManager.Each(EachFoodSlot);");
        item_food_bagTableManager.Each(EachFoodSlot);
        UniLogger.Log(" item_home_bagTableManager.Each(EachHomeSlot);");
        item_home_bagTableManager.Each(EachHomeSlot);
    }

    private void OpenTreasureBox()
    {
        var tuple = UserDataManager.Instance.GetEquipStatus();
        if (tuple.Item1 == (int)EEquipGetStatus.FirstGet)
        {
            UniLogger.Log($"UserOpenTreasureBox = {"第一次获得装备"}");
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

    private void InitEvent()
    {
        eventGroup.AddListener<UserEventDefine.UserOpenTreasureBox>(Handler);
        eventGroup.AddListener<UserEventDefine.UserCoinFresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserLevelUp>(Handler);
        eventGroup.AddListener<UserEventDefine.UserExperienceRefresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserMaxExperienceRefresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserEggLevelUp>(Handler);
        eventGroup.AddListener<UserEventDefine.UserEquipRefresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserEggNumRefresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserGetPVPEnemy>(Handler);
        eventGroup.AddListener<UserEventDefine.UserPVPStart>(Handler);
        eventGroup.AddListener<UserEventDefine.UserPVPComplete>(Handler);
        eventGroup.AddListener<UserEventDefine.UserGetRankList>(Handler);
    }
    
    
    private void Handler(IEventMessage message)
    {
        if(message is UserEventDefine.UserOpenTreasureBox uotb)
        {
            OpenTreasureBox();
        }
        else if(message is UserEventDefine.UserEquipRefresh uer)
        {
           RefreshBag();
        }
        else if (message is UserEventDefine.UserCoinFresh ucf)
        {
            coin_text.text = $"{ucf.coin}";
        }
        else if (message is UserEventDefine.TaskRefresh)
        {
            RefreshTask();
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
        else if (message is UserEventDefine.UserLevelUp ulu)
        {
            user_level.text = $"{ulu.currentLevel}";
        }
        else if (message is UserEventDefine.UserEggLevelUp uelu)
        {
            egg_level.text = $"{uelu.currentLevel}";
        }
        else if (message is UserEventDefine.UserEggNumRefresh uenr)
        {
            egg_count_text.text = $"{uenr.egg_num}";
        }
        else if (message is UserEventDefine.UserGetPVPEnemy ugpvp)
        {
            ApplicationStatusManager.s_currentAppStatus.OpenUI<UIChallengeOpponent>();
        }
        else if (message is UserEventDefine.UserPVPStart upvpstart)
        {   
            //进入战斗
                  SceneLoaderManager.LoadBattle(() =>
            {
               UIManager.UICanvas.SetActive(false);
           });
        }
        else if (message is UserEventDefine.UserPVPComplete upvpend)
        {   
            //退出战斗
        }
        else if (message is UserEventDefine.UserGetRankList getRank)
        {   
            ApplicationStatusManager.s_currentAppStatus.OpenUI<UIRankList>();
        }
    }
    
    private bool EachHomeSlot(AutoGenTableItem<item_home_bagTableTemplate, item_home_bagTableModel> item, int index)
    {
        UniLogger.Log($"EachHomeSlot index = {index}");
        item.Model.RefreshData(homeDatas[index]);
        item.Template.RefreshUI(homeDatas[index]);
        if (index >= homeDatas.Count - 1) return true;
        return false;
    }

    private bool EachFoodSlot(AutoGenTableItem<item_food_bagTableTemplate, item_food_bagTableModel> item, int index)
    {
        UniLogger.Log($"EachFoodSlot index = {index}");
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
        UniLogger.Log($"EachAnimalSlot index = {index}");
        item.Model.RefreshData(animalDatas[index]);
        item.Template.RefreshUI(animalDatas[index]);
        if (index >= animalDatas.Count - 1) return true;
        return false;
    }
}