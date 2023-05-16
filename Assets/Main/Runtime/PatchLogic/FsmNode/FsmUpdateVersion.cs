using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Singleton;
using YooAsset;
using GameFramework.Resource;

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
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Debug.LogWarning("The device is not connected to the network");
            // UILoadMgr.Show(UIDefine.UILoadUpdate, LoadText.Instance.Label_Net_UnReachable);
            // UILoadTip.ShowMessageBox(LoadText.Instance.Label_Net_UnReachable, MessageShowType.TwoButton,
            //     LoadStyle.StyleEnum.Style_Retry,
            //     GetStaticVersion().Forget,
            //     () => { ChangeState<ProcedureInitResources>(procedureOwner); });
        }
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

        var operation = ResourcesManager.Instance.UpdatePackageVersionAsync();
        yield return operation;

        if(operation.Status == EOperationStatus.Succeed)
        {
            //线上最新版本operation.PackageVersion
            ResourcesManager.Instance.PackageVersion = operation.PackageVersion;
            _machine.ChangeState<FsmUpdateManifest>();
        }
        else
        {
            Debug.LogWarning(operation.Error);
            PatchEventDefine.PackageVersionUpdateFailed.SendEventMessage();
        }
    }
}
