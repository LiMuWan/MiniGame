using UniFramework.Machine;

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
       _machine.ChangeState<FsmClearCache>();
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
        
    }
}
