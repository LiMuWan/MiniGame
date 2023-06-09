using Main.EventDefine;
using UniFramework.Event;
using UniFramework.Machine;
using UniFramework.Singleton;
using UniFramework.Utility;
using YooAsset;

public class PatchManager : SingletonInstance<PatchManager>, ISingleton
{
    private bool _isRun = false;
    private EventGroup _eventGroup = new EventGroup();
    private StateMachine _machine;

    public void OnCreate(object createParam)
    {

    }

    public void OnDestroy()
    {
        _eventGroup.RemoveAllListener();
    }

    public void OnUpdate()
    {
        if (_machine != null)
        {
            _machine.Update();
        }
    }

    public void Run(EPlayMode playMode)
    {
        if (_isRun == false)
        {
            _isRun = true;

            //注册监听事件
            _eventGroup.AddListener<UserEventDefine.UserTryInitalize>(OnHandleEventMessage);
            _eventGroup.AddListener<UserEventDefine.UserBeginDownloadWebFiles>(OnHandleEventMessage);
            _eventGroup.AddListener<UserEventDefine.UserTryUpdatePackageVersion>(OnHandleEventMessage);
            _eventGroup.AddListener<UserEventDefine.UserTryUpdatePatchManifest>(OnHandleEventMessage);
            _eventGroup.AddListener<UserEventDefine.UserTryDownloadWebFiles>(OnHandleEventMessage);

            UniLogger.Log("开启补丁更新流程...");
            _machine = new StateMachine(this);
            _machine.AddNode<FsmPatchPrepare>();
            _machine.AddNode<FsmInitialize>();
            _machine.AddNode<FsmUpdateVersion>();
            _machine.AddNode<FsmUpdateManifest>();
            _machine.AddNode<FsmCreateDownloader>();
            _machine.AddNode<FsmDownloadFiles>();
            _machine.AddNode<FsmDownloadOver>();
            _machine.AddNode<FsmClearCache>();
            _machine.AddNode<FsmPatchDone>();
            _machine.Run<FsmPatchPrepare>();
        }
        else
        {
            UniLogger.Warning("补丁更新正在进行中");
        }
    }

    /// <summary>
    /// 接收事件
    /// </summary>
    /// <param name="message"></param>
    private void OnHandleEventMessage(IEventMessage message)
    {
        if(message is UserEventDefine.UserTryInitalize)
        {
            _machine.ChangeState<FsmInitialize>();
        }
        else if(message is UserEventDefine.UserBeginDownloadWebFiles)
        {
            _machine.ChangeState<FsmDownloadFiles>();
        }
        else if(message is UserEventDefine.UserTryUpdatePackageVersion)
        {
            _machine.ChangeState<FsmUpdateVersion>();
        }
        else if(message is UserEventDefine.UserTryUpdatePatchManifest)
        {
            _machine.ChangeState<FsmUpdateManifest>();
        }
        else if(message is UserEventDefine.UserTryDownloadWebFiles)
        {
            _machine.ChangeState<FsmCreateDownloader>();
        }
        else
        {
            throw new System.NotImplementedException($"{message.GetType()}");
        }
    }
}
