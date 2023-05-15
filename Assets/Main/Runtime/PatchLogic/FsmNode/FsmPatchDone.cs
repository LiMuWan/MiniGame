using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Singleton;

/// <summary>
/// 流程更新完毕
/// </summary>
internal class FsmPatchDone : IStateNode
{
    public void OnCreate(StateMachine machine)
    {
        
    }

    public void OnEnter()
    {
       PatchEventDefine.PatchStatesChange.SendEventMessage("开始游戏!");

       //加载热更程序集
       UniSingleton.CreateSingleton<LoadDll>();
       UniSingleton.StartCoroutine(LoadDll.Instance.LoadDllAsset());
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }
}
