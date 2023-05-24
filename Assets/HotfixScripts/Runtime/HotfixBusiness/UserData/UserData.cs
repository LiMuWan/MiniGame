using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;

public class UserData : SingletonInstance<UserData>, ISingleton
{
    //金币
    private int coin;
    //钻石
    private int diamond;
    //昵称
    private int nick_name;
    //称号
    private int level_title;
    //等级
    private int level;
    //当前等级经验值
    private int experience;
    //当前等级最大经验值
    private int max_experience;
    //头像名称
    private string headIconName;
    //头像下载网址
    private string headHostUrl;
    //任务进度
    private int task;
    //唯一id
    private string uid;
    //宠物蛋等级
    private int egg_level;


    public int Coin
    {
        set{
            if(value != coin)
            {
                value =coin;
                //派发金币改变事件，通知刷新
            }
        }
        get
        {
            return coin;
        }
    }

    public int Diamond
    {
        set{
            if(value != diamond)
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
