using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Singleton;
using YooAsset;

/// <summary>
/// 更新资源版本号
/// </summary>
internal class FsmUpdateVersion : IStateNode
{
    private StateMachine _machine;
    public void OnCreate(StateMachine machine)
    {
       _machine = machine;
    }

    public void OnEnter()
    {
        PatchEventDefine.PatchStatesChange.SendEventMessage("获取最新的资源版本！");
        UniSingleton.StartCoroutine(GetStaticVersion());
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }

    private IEnumerator GetStaticVersion()
    {
        yield return new WaitForSecondsRealtime(0.5f);

        var package = YooAssets.GetPackage("DefaultPackage");
        var operation = package.UpdatePackageVersionAsync();
        yield return operation;

        if(operation.Status == EOperationStatus.Succeed)
        {
            PatchManager.Instance.PackageVersion = operation.PackageVersion;
            _machine.ChangeState<FsmUpdateManifest>();
        }
        else
        {
            Debug.LogWarning(operation.Error);
            PatchEventDefine.PackageVersionUpdateFailed.SendEventMessage();
        }
    }
}
