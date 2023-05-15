using System.Collections;
using UnityEngine;
using UniFramework.Singleton;
using YooAsset;
using System.Threading.Tasks;
using System;
using Feif.UIFramework;
using UIModule.UI;

public class UIManager : SingletonInstance<UIManager>, ISingleton
{
    private GameObject stuckPanel;
    private IEnumerator InitCanvas()
    {
        var handle = YooAssets.LoadAssetAsync<GameObject>("UIFrame");
        yield return handle;
        var canvas = handle.InstantiateSync();
        GameObject.DontDestroyOnLoad(canvas);
        stuckPanel = canvas.transform.Find("SutckPanel").gameObject;
        // 注册资源请求释放事件
        UIFrame.OnAssetRequest += OnAssetRequest;
        UIFrame.OnAssetRelease += OnAssetRelease;
        // 注册UI卡住事件
        // 加载时间超过0.5s后触发UI卡住事件
        UIFrame.StuckTime = 0.5f;
        UIFrame.OnStuckStart += OnStuckStart;
        UIFrame.OnStuckEnd += OnStuckEnd;
        // <------------------------------>
        // 自动绑定事件
        AutoBindUGUIButtonEvent.Enable();
        // <------------------------------>
        // var data = new UITestAData_Demo2();
        // data.Title = "This is UITestA";
        // UIFrame.Show<UITestA_Demo2>(data);
    }

    // 资源请求事件，type为UI脚本的类型
    // 可以使用Addressables，YooAssets等第三方资源管理系统
    private Task<GameObject> OnAssetRequest(Type type)
    {
        if (UIFrame.IsPanel(type))
        {
            return Task.FromResult(Resources.Load<GameObject>($"Demo2/Panel/{type.Name}"));
        }
        else
        {
            return Task.FromResult(Resources.Load<GameObject>($"Demo2/Window/{type.Name}"));
        }
    }

    // 资源释放事件
    private void OnAssetRelease(Type type)
    {
        // TODO
    }

    private void OnStuckStart()
    {
        stuckPanel.SetActive(true);
    }

    private void OnStuckEnd()
    {
        stuckPanel.SetActive(false);
    }

    void ISingleton.OnCreate(object createParam)
    {
         UniSingleton.StartCoroutine(InitCanvas());
    }

    void ISingleton.OnUpdate()
    {
       
    }

    void ISingleton.OnDestroy()
    {
        UIFrame.OnAssetRequest -= OnAssetRequest;
        UIFrame.OnAssetRelease -= OnAssetRelease;
        UIFrame.OnStuckStart -= OnStuckStart;
        UIFrame.OnStuckEnd -= OnStuckEnd;
        stuckPanel = null;
    }
}
