using System.Collections;
using UniFramework.Machine;
using UniFramework.Singleton;
using UnityEngine;
using YooAsset;
using System.IO;
using GameFramework.Resource;
using Main.EventDefine;
using UniFramework.Utility;

/// <summary>
/// 初始化资源包
/// </summary>
internal class FsmInitialize : IStateNode
{
    private StateMachine _machine;
    public void OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public void OnEnter()
    {
        PatchEventDefine.PatchStatesChange.SendEventMessage("初始化资源包!");
        UniSingleton.StartCoroutine(InitPackage());
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }

    private IEnumerator InitPackage()
    {
        var initializationOperation = ResourcesManager.Instance.InitPackage();
        yield return new WaitForSeconds(1f);
        yield return initializationOperation.IsDone;

        yield return initializationOperation;
        PatchEventDefine.GameVersionInitOrRefresh.SendEventMessage();
        if (initializationOperation.Status == EOperationStatus.Succeed)
        {
            _machine.ChangeState<FsmUpdateVersion>();
        }
        else
        {
            UniLogger.Warning($"{initializationOperation.Error}");
            PatchEventDefine.InitializeFailed.SendEventMessage();
        }
    }
}