using GameFramework.Resource;
using UniFramework.Event;
using UniFramework.Singleton;
using UnityEngine;
using YooAsset;

public class Boot : MonoBehaviour
{
    public EPlayMode PlayMode = EPlayMode.EditorSimulateMode;

    private void Awake()
    {
        Debug.Log($"资源系统运行模式：{PlayMode}");
        Application.targetFrameRate = 60;
        Application.runInBackground = true;
    }

    private void Start()
    {
        //初始化事件系统
        UniEvent.Initalize();

        //初始化单例系统
        UniSingleton.Initialize();

        //初始化资源系统
        UniSingleton.CreateSingleton<ResourcesManager>().PlayMode = PlayMode;
        
        //创建补丁管理器  //开始补丁更新流程
        UniSingleton.CreateSingleton<PatchManager>().Run(PlayMode);
    }
}
