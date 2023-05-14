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

       //创建游戏管理器

       //开启游戏流程
       //加载热更程序集
       UniSingleton.StartCoroutine(LoadDll.Instance.LoadDllAsset());
    //    GameManager.Instance.Run();
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }
}
