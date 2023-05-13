using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;

internal class FsmPatchPrepare : IStateNode
{
    private StateMachine _machine;
    public void OnCreate(StateMachine machine)
    {
       _machine = machine;
    }

    public void OnEnter()
    {
        //加载更新面板
        var go = Resources.Load<GameObject>("PatchWindow");
        GameObject.Instantiate(go);

        _machine.ChangeState<FsmInitialize>();
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }
}
