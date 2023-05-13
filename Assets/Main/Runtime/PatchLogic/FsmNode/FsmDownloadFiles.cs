using System.Collections;
using UniFramework.Machine;
using UniFramework.Singleton;
using YooAsset;

/// <summary>
/// 更新下载文件
/// </summary>
internal class FsmDownloadFiles : IStateNode
{
    private StateMachine _machine;
    public void OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public void OnEnter()
    {
        PatchEventDefine.PatchStatesChange.SendEventMessage("开始下载补丁文件！");
        UniSingleton.StartCoroutine(BeginDownload());
    }

    public void OnExit()
    {
        
    }

    public void OnUpdate()
    {
       
    }

    private IEnumerator BeginDownload()
    {
        var downloader = PatchManager.Instance.Downloader;

        //注册下载回调
        downloader.OnDownloadErrorCallback = PatchEventDefine.WebFileDownloadFailed.SendEventMessage;
        downloader.OnDownloadProgressCallback = PatchEventDefine.DownloadProgressUpdate.SendEventMessage;
        downloader.BeginDownload();
        yield return downloader;

        //检测下载结果
        if (downloader.Status != EOperationStatus.Succeed)
            yield break;

        _machine.ChangeState<FsmPatchDone>();
    }
}
