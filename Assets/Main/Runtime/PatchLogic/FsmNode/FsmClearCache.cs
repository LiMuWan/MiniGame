using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using YooAsset;

/// <summary>
/// 清理未使用的缓存文件
/// </summary>
internal class FsmClearCache : IStateNode
{
    private StateMachine _machine;
    public void OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public void OnEnter()
    {
        PatchEventDefine.PatchStatesChange.SendEventMessage("清理未使用的缓存文件！");
        var package = YooAssets.GetPackage("DefaultPackage");
        var operation = package.ClearUnusedCacheFilesAsync();
        operation.Completed += Operation_Completed;
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }

    private void Operation_Completed(AsyncOperationBase obj)
    {
        _machine.ChangeState<FsmPatchDone>();
    }
}
