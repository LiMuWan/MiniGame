using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using UniFramework.Event;
using Hotfix.EventDefine;
using System;
using UniFramework.Utility;

public class GameManager : SingletonInstance<GameManager>, ISingleton
{
    private bool _isRun = false;

    private EventGroup _eventGroup = new EventGroup();
    public void OnCreate(object createParam)
    {
        
    }

    public void OnDestroy()
    {
        _eventGroup.RemoveAllListener();
    }

    public void OnUpdate()
    {
       
    }

    public void Run()
    {
        if (_isRun == false)
        {
            _isRun = true;

            //注册监听事件
            _eventGroup.AddListener<UserEventDefine.UserLoginSuccess>(OnHandleEventMessage);
            // _eventGroup.AddListener<UserEventDefine.UserBeginDownloadWebFiles>(OnHandleEventMessage);
            // _eventGroup.AddListener<UserEventDefine.UserTryUpdatePackageVersion>(OnHandleEventMessage);
            // _eventGroup.AddListener<UserEventDefine.UserTryUpdatePatchManifest>(OnHandleEventMessage);
            // _eventGroup.AddListener<UserEventDefine.UserTryDownloadWebFiles>(OnHandleEventMessage);
            ApplicationStatusManager.EnterStatus<LoginStatus>(); //第一个状态登陆
        }
        else
        {
            UniLogger.Warning("补丁更新正在进行中");
        }
    }

    private void OnHandleEventMessage(IEventMessage message)
    {
        if(message is UserEventDefine.UserLoginSuccess)
        {
            ApplicationStatusManager.EnterStatus<MainStatus>();
        }
    }
}
