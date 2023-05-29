using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using Hotfix.EventDefine;

public class UserDataManager : SingletonInstance<UserDataManager>, ISingleton
{
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
                UserEventDefine.UserLevelUp.SendEventMessage(level,value);
                level = value;
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
                UserEventDefine.UserLevelUp.SendEventMessage(egg_level,value);
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
                egg_num = value;
            }
        }
    }

    public void Init(JPlayerData playerData)
    {
       PlayerId = playerData.playerId;
       OpenId = playerData.openId;
       CreateTime = playerData.createTime;
       Coin = playerData.coin;
       Level = playerData.lv;
       EggLevel = playerData.boxLv;
       EggLevelUpTime = playerData.boxLvUpEndTime;
       Experience = playerData.exp;
       EggNum = playerData.boxNum;

       //读配置
       MaxExperience = ConfigLoader.Instance.Tables.TbPlayerLevelUp.Get(Level).Exp;
       //称号 ToDo
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
}
