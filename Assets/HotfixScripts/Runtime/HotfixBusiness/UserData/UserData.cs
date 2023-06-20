using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using Hotfix.EventDefine;
using System;
using UniFramework.Utility;

public class UserDataManager : SingletonInstance<UserDataManager>, ISingleton
{   
    public static JUserLoginData LoginData = default;
    //金币
    private int coin;
    //钻石
    private int diamond;
    //昵称
    private string nick_name;
    //称号
    private int level_title;
    //等级
    private int level;
    //当前等级经验值
    private int experience;
    //当前等级最大经验值
    private int max_experience;
    //头像名称
    private string head_icon_name;
    //头像下载网址
    private string head_host_url;
    //任务进度
    private int task;
    //唯一id
    private string uid;
    //宠物蛋等级
    private int egg_level;
    private int egg_lvUp_endTime;
    private string player_id;
    private string open_id;
    private string create_time;
    private int egg_num;
    private JEquipDataList equipList;

    public int Coin
    {
        set
        {
            if (value != coin)
            {
                UserEventDefine.UserCoinFresh.SendEventMessage(value);
                value = coin;
            }
        }
        get
        {
            return coin;
        }
    }

    public int Diamond
    {
        set
        {
            if (value != diamond)
            {
                value = diamond;
                //派发钻石改变事件，通知刷新
            }
        }
        get
        {
            return diamond;
        }
    }

    public string NickName
    {
        get { return nick_name; }
        set { nick_name = value; }
    }

    public string HeadHostUrl
    {
        get { return head_host_url; }
        set { head_host_url = value; }
    }

    public string PlayerId
    {
        get { return player_id; }
        set
        {
            if (player_id != value)
            {
                player_id = value;
            }
        }
    }

    public string OpenId
    {
        get { return open_id; }
        set
        {
            if (open_id != value)
            {
                open_id = value;
            }
        }
    }

    public string CreateTime
    {
        get { return create_time; }
        set
        {
            if (create_time != value)
            {
                create_time = value;
            }
        }
    }

    public int Level
    {
        get { return level; }
        set
        {
            if (level != value)
            {
                UserEventDefine.UserLevelUp.SendEventMessage(level, value);
                level = value;
                MaxExperience = ConfigLoader.Instance.Tables.PlayerLevelUp.Get(Level).Exp;
            }
        }
    }

    public int EggLevel
    {
        get { return egg_level; }
        set
        {
            if (egg_level != value)
            {
                UserEventDefine.UserEggLevelUp.SendEventMessage(egg_level, value);
                egg_level = value;
            }
        }
    }

    public int EggLevelUpTime
    {
        get { return egg_lvUp_endTime; }
        set
        {
            if (egg_lvUp_endTime != value)
            {
                egg_lvUp_endTime = value;
            }
        }
    }

    public int Experience
    {
        get { return experience; }
        set
        {
            if (experience != value)
            {
                UserEventDefine.UserExperienceRefresh.SendEventMessage(value);
                experience = value;
            }
        }
    }

    public int MaxExperience
    {
        get { return max_experience; }
        set
        {
            if (max_experience != value)
            {
                UserEventDefine.UserMaxExperienceRefresh.SendEventMessage(value);
                max_experience = value;
            }
        }
    }

    public int EggNum
    {
        get { return egg_num; }
        set
        {
            if (egg_num != value)
            {
                UserEventDefine.UserEggNumRefresh.SendEventMessage(value);
                egg_num = value;
            }
        }
    }

    //装备列表
    public JEquipDataList EquipList
    {
        get { return equipList; }
        set
        {
            if (equipList != value || value == null)
            {
                InitEquipData(value);
                equipList = value;
            }
        }
    }

    private List<ItemData> animalDatas;
    public List<ItemData> AnimalDatas => animalDatas;
    private List<ItemData> foodDatas;
    public List<ItemData> FoodDatas => foodDatas;
    private List<ItemData> homeDatas;
    public List<ItemData> HomeDatas => homeDatas;
    private ConfigLoader ConfigLoader => ConfigLoader.Instance;

    public void InitOrRefresh(JPlayerData playerData)
    {
        UniLogger.Log($"playerData = {playerData}");
        PlayerId = playerData.playerId;
        OpenId = playerData.openId;
        CreateTime = playerData.createTime;
        Coin = playerData.coin;
        Level = playerData.lv;
        EggLevel = playerData.boxLv;
        EggLevelUpTime = playerData.boxLvUpEndTime;
        Experience = playerData.exp;
        EggNum = playerData.boxNum;
        EquipList = playerData.equipList;

        //读配置

        //称号 ToDo
    }

    public void InitEquipData(JEquipDataList equipDataList)
    {
        UniLogger.Log($"equipDataList = {equipDataList}");
        if ((equipDataList == null || equipDataList.equipList == null || equipDataList.equipList.Length == 0) && animalDatas == null)
        {
            animalDatas = new List<ItemData>(16);
            //动物数据
            animalDatas.Add(new ItemData() { Type = 1, Sex = 1 });
            animalDatas.Add(new ItemData() { Type = 1, Sex = 2 });
            animalDatas.Add(new ItemData() { Type = 2, Sex = 1 });
            animalDatas.Add(new ItemData() { Type = 2, Sex = 2 });
            animalDatas.Add(new ItemData() { Type = 3, Sex = 1 });
            animalDatas.Add(new ItemData() { Type = 3, Sex = 2 });
            animalDatas.Add(new ItemData() { Type = 4, Sex = 1 });
            animalDatas.Add(new ItemData() { Type = 4, Sex = 2 });
            animalDatas.Add(new ItemData() { Type = 5, Sex = 1 });
            animalDatas.Add(new ItemData() { Type = 5, Sex = 2 });
            animalDatas.Add(new ItemData() { Type = 6, Sex = 1 });
            animalDatas.Add(new ItemData() { Type = 6, Sex = 2 });
            animalDatas.Add(new ItemData() { Type = 7, Sex = 1 });
            animalDatas.Add(new ItemData() { Type = 7, Sex = 2 });
            animalDatas.Add(new ItemData() { Type = 8, Sex = 1 });
            animalDatas.Add(new ItemData() { Type = 8, Sex = 2 });
            //食物数据
            foodDatas = new List<ItemData>(4);
            foodDatas.Add(new ItemData() { Type = 9 });
            foodDatas.Add(new ItemData() { Type = 9 });
            foodDatas.Add(new ItemData() { Type = 9 });
            foodDatas.Add(new ItemData() { Type = 9 });
            //爱巢数据
            homeDatas = new List<ItemData>(2);
            homeDatas.Add(new ItemData() { Type = 10 });
            homeDatas.Add(new ItemData() { Type = 10 });
        }
        else
        {
            for (int i = 0; i < EquipList.equipList.Length; i++)
            {
                InitItemData(EquipList.equipList[i]);
            }
            UserEventDefine.UserEquipRefresh.SendEventMessage();
        }
    }

    public ItemData InitItemData(JEquipData equipData)
    {
        var itemBasePropertyCfg = ConfigLoader.Tables.ItemBaseProperty.DataList[0];
        var itemQualityCfg = ConfigLoader.Tables.ItemQuality;
        var itemConfig = ConfigLoader.Tables.Item.Get(equipData.itemId);
        int type = itemConfig.Type;
        var itemData = animalDatas.Find((item) => { return item.Type == type && item.Sex == equipData.sex; });
        itemData.ItemId = equipData.itemId;
        itemData.Level = equipData.lv;
        itemData.Quality = equipData.quality;
        itemData.Name = ConfigLoader.Tables.Item.Get(equipData.itemId).Name;
        var itemTypeCfg = ConfigLoader.Tables.ItemType.Get(type);
        itemData.Hp = (itemBasePropertyCfg.HpBase * itemData.Level * itemQualityCfg.Get(itemData.Quality).Ratio * itemTypeCfg.Hp * 10 * itemConfig.Hp).RoundToOneDecimal();
        itemData.Spd = itemBasePropertyCfg.SpdBase * itemTypeCfg.Spd * itemConfig.Spd;
        itemData.Atk = (itemBasePropertyCfg.AtkBase * itemData.Level * itemQualityCfg.Get(itemData.Quality).Ratio * itemTypeCfg.Atk * 10 * itemConfig.Atk).RoundToOneDecimal();
        itemData.Def = (itemBasePropertyCfg.DefBase * itemData.Level * itemQualityCfg.Get(itemData.Quality).Ratio * itemTypeCfg.Def * 10 * itemConfig.Def).RoundToOneDecimal();
        return itemData;
    }
    public void OnCreate(object createParam)
    {

    }

    public void OnDestroy()
    {

    }

    public void OnUpdate()
    {

    }

    //新获取装备的状态
    public Tuple<int, ItemData> GetEquipStatus()
    {
        //第一次获取该类型装备
        int type = ConfigLoader.Tables.Item.Get(EquipList.tempEquip.itemId).Type;
        var itemData = AnimalDatas.Find((item) => item.Type == type && item.Sex == EquipList.tempEquip.sex);
        if (itemData.ItemId == 0)
        {
            //第一次获取
            return new Tuple<int, ItemData>(0, GetTempEquipData());
        }
        else
        {
            //已经获取,旧的数据返回
            return new Tuple<int, ItemData>(0, itemData);
        }
    }

    //获取临时装备的数据
    public ItemData GetTempEquipData()
    {
        return InitItemData(EquipList.tempEquip);
    }
}
