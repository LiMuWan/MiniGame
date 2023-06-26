using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Singleton;
using Main.EventDefine;

/// <summary>
/// 流程更新完毕
/// </summary>
internal class FsmPatchDone : IStateNode
{
    private StateMachine _machine;
    public void OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public void OnEnter()
    {
        PatchEventDefine.PatchStatesChange.SendEventMessage("开始游戏!");

        //加载热更程序集
        UniSingleton.CreateSingleton<LoadDll>();
        LoadDll.Instance.LoadDllAssets();
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {

    }
}
