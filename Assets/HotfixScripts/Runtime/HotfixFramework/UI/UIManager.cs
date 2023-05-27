using System.Collections;
using UnityEngine;
using UniFramework.Singleton;
using YooAsset;
using System.Threading.Tasks;
using System;
using GameFramework.Resource;
using UnityEngine.EventSystems;
using UniFramework.Window;
using UniFramework.Utility;
using UnityEngine.UI;

public static class UIManager
{
    private const string UIPath = "Assets/HotfixAssets/";
    private static GameObject stuckPanel;
    private static EventSystem s_EventSystem;
    public static EventSystem EventSystem
    {
        get
        {
            return s_EventSystem;
        }
    }

    public static void Init()
    {
       UniSingleton.StartCoroutine(InitAsync());
    }

    public static IEnumerator InitAsync()
    {
        var handle = ResourcesManager.Instance.LoadAssetAsync<GameObject>($"UICanvas");
        yield return handle;
        GameObject canvas = handle.InstantiateSync();
        handle.Release();
        GameObject.DontDestroyOnLoad(canvas);
        var desktop = canvas.transform.Find("Desktop").gameObject;
        // var uicanvas = canvas.GetComponent<CanvasScaler>();
        // Debug.LogWarning($"screen.width = {Screen.width},screen.height = {Screen.height} , ratio = {(Screen.height/Screen.width).ToString("F2")}");
        UniWindow.Initalize(desktop);
        s_EventSystem = canvas.GetComponentInChildren<EventSystem>();
    }

    public static void OnDestroy()
    {
        s_EventSystem = null;
    }


    #region EventSystem

    public static void SetEventSystemEnable(bool enable)
    {
        if (EventSystem != null)
        {
            EventSystem.enabled = enable;
        }
        else
        {
            UniLogger.Error("EventSystem.current is null !");
        }
    }

    #endregion

    #region 显示

    // private IEnumerator OpenWindow<T>(Action<T> callback,params System.Object[] userDatas) where T : UIWindow
    // {
    //     OpenWindowOperation openWindowOperation = OpenWindowSync<T>(userDatas);
    //     yield return openWindowOperation;
    //     callback?.Invoke(openWindowOperation);
    // }

    /// <summary>
    /// 异步打开窗口
    /// </summary>
    /// <param name="location">资源定位地址</param>
    /// <param name="userDatas">用户自定义数据</param>
    public static void OpenWindowAsync<T>(Action<UIWindow> onCreateCallback,params System.Object[] userDatas) where T : UIWindow
    {
        UniWindow.OpenWindowAsync<T>(typeof(T).FullName,onCreateCallback, userDatas);
    }
    #endregion

    #region 隐藏

    /// <summary>
    /// 关闭窗口
    /// </summary>
    public static void CloseWindow<T>() where T : UIWindow
    {
        UniWindow.CloseWindow(typeof(T));
    }

      /// <summary>
    /// 关闭窗口
    /// </summary>
    public static void CloseWindow(UIWindow window)
    {
        UniWindow.CloseWindow(window);
    }

    /// <summary>
    /// 关闭所有窗口
    /// </summary>
    public static void CloseAll()
    {
        UniWindow.CloseAll();
    }
    #endregion

    public static UIWindow GetWindow<T>() where T:UIWindow
    {
        return UniWindow.GetWindow<T>();
    }

    /// <summary>
    /// 查询窗口是否存在
    /// </summary>
    public static bool HasWindow<T>()
    {
        return UniWindow.HasWindow(typeof(T));
    }

    /// <summary>
    /// 获取所有层级下顶部的窗口名称
    /// </summary>
    public static string GetTopWindow()
    {
        return UniWindow.GetTopWindow();
    }

    /// <summary>
    /// 获取指定层级下顶部的窗口名称
    /// </summary>
    public static string GetTopWindow(int layer)
    {
        return UniWindow.GetTopWindow(layer);
    }

    /// <summary>
    /// 是否有任意窗口正在加载
    /// </summary>
    public static bool IsAnyLoading()
    {
        return UniWindow.IsAnyLoading();
    }
}
