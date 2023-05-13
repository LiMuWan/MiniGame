using System;
using System.Collections;
using System.Collections.Generic;
using UniFramework.Event;
using UniFramework.Machine;
using UniFramework.Singleton;
using UnityEngine;
using YooAsset;

public class PatchManager : SingletonInstance<PatchManager>,ISingleton
{
    /// <summary>
    /// 运行模式
    /// </summary>
    public EPlayMode PlayMode{private set;get;}

    /// <summary>
    /// 包裹的版本信息
    /// </summary>
    public string PackageVersion{set;get;}

    /// <summary>
    /// 下载器
    /// </summary>
    public ResourceDownloaderOperation Downloader{set;get;}

    private bool _isRun = false;
    private EventGroup _eventGroup = new EventGroup();
    private StateMachine _machine;

    public void OnCreate(object createParam)
    {
       
    }

    public void OnDestroy()
    {
        _eventGroup.RemoveAllListener();
    }

    public void OnUpdate()
    {
        if(_machine != null)
        {
            _machine.Update();
        }
    }

    public void Run(EPlayMode playMode)
    {
        if(_isRun == false)
        {
            _isRun = true;
            PlayMode = playMode;

            //注册监听事件
            _eventGroup.AddListener<UserEventDefine.UserTryInitalize>(OnHandleEventMessage);
            _eventGroup.AddListener<UserEventDefine.UserBeginDownloadWebFiles>(OnHandleEventMessage);
            _eventGroup.AddListener<UserEventDefine.UserTryUpdatePackageVersion>(OnHandleEventMessage);
            _eventGroup.AddListener<UserEventDefine.UserTryUpdatePatchManifest>(OnHandleEventMessage);
            _eventGroup.AddListener<UserEventDefine.UserTryDownloadWebFiles>(OnHandleEventMessage);

            Debug.Log("开启补丁更新流程...");
        }
        else
        {
            Debug.LogWarning("补丁更新正在进行中");
        }
    }

    private void OnHandleEventMessage(IEventMessage message)
    {
        throw new NotImplementedException();
    }
}
