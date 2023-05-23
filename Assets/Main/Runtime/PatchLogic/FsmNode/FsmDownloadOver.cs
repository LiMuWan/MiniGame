using UniFramework.Machine;
using UniFramework.Utility;
using UnityEngine;

/// <summary>
/// 下载完毕
/// </summary>
internal class FsmDownloadOver : IStateNode
{

    private StateMachine _machine;
    public void OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public void OnEnter()
    {
        UniLogger.Log("下载完成!!!");
       _machine.ChangeState<FsmClearCache>();
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }
}
