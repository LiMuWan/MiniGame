using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using UniFramework.Event;

public class GameManager : SingletonInstance<GameManager>, ISingleton
{
    private bool _isRun = false;

    private EventGroup _eventGroup;
    public void OnCreate(object createParam)
    {
        
    }

    public void OnDestroy()
    {
        
    }

    public void OnUpdate()
    {
       
    }

    public void Run()
    {
        if(!_isRun)
        {
            _isRun = true;
            //加载热更新程序集
        }
        else
        {
            Debug.LogWarning("补丁更新已经正在进行中");
        }
    }
}
