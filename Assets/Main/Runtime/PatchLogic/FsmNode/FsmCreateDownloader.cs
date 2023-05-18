using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Singleton;
using YooAsset;
using GameFramework.Resource;

/// <summary>
/// 创建文件下载器
/// </summary>
internal class FsmCreateDownloader : IStateNode
{
    private StateMachine _machine;
    public void OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public void OnEnter()
    {
        Debug.Log("创建补丁下载器");
        PatchEventDefine.PatchStatesChange.SendEventMessage("创建补丁下载器");
        UniSingleton.StartCoroutine(CreateDownLoader());
    }

    public void OnExit()
    {

    }

    public void OnUpdate()
    {

    }

    IEnumerator CreateDownLoader()
    {
        yield return new WaitForSecondsRealtime(0.5f);

        int downloadingMaxNum = 10;
        int failedTryAgain = 3;
        var downloader = ResourcesManager.Instance.CreateResourceDownloader(downloadingMaxNum, failedTryAgain);

        if (downloader.TotalDownloadCount == 0)
        {
            Debug.Log("Not found any download files !");
            _machine.ChangeState<FsmDownloadOver>();
        }
        else
        {
            Debug.Log($"Found total {downloader.TotalDownloadCount} files that need download !");

            //发现新更新文件后，挂起流程系统
            //注意：开发者需要在下载前检测磁盘空间不足
            int totalDownloadCount = downloader.TotalDownloadCount;
            long totalDownloadBytes = downloader.TotalDownloadBytes;
            PatchEventDefine.FoundUpdateFiles.SendEventMessage(totalDownloadCount, totalDownloadBytes);
        }
    }
}
