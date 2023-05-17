using System.Collections;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Singleton;
using YooAsset;
using GameFramework.Resource;

/// <summary>
/// 更新资源清单
/// </summary>
internal class FsmUpdateManifest : IStateNode
{
    private StateMachine _machine;

    public void OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public void OnEnter()
    {
        PatchEventDefine.PatchStatesChange.SendEventMessage("更新资源清单!");
        UniSingleton.StartCoroutine(UpdateManifest());
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }

    private IEnumerator UpdateManifest()
    {
        yield return new WaitForSecondsRealtime(0.5f);

        bool savePackageVersion = true;
        var operation = ResourcesManager.Instance.UpdatePackageManifestAsync(ResourcesManager.Instance.PackageVersion,savePackageVersion);
        yield return operation;

        if(operation.Status == EOperationStatus.Succeed)
        {
            _machine.ChangeState<FsmCreateDownloader>();
        }
        else
        {
            Debug.LogWarning(operation.Error);
            PatchEventDefine.PatchManifestUpdateFailed.SendEventMessage();
        }
    }
}
