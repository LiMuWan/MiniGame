using System.Collections;
using UnityEngine;
using UniFramework.Singleton;
using YooAsset;
using System.Threading.Tasks;
using System;
using GameFramework.Resource;
using UnityEngine.EventSystems;
using UniFramework.Window;

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
        var canvas = ResourcesManager.Instance.LoadAsset<GameObject>($"UICanvas");
        GameObject.DontDestroyOnLoad(canvas);
        var desktop = canvas.transform.Find("Desktop").gameObject;
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
            Debug.LogError("EventSystem.current is null !");
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
    /// 同步打开窗口
    /// </summary>
    /// <typeparam name="T">窗口类</typeparam>
    /// <param name="location">资源定位地址</param>
    /// <param name="userDatas">用户自定义数据</param>
    public static OpenWindowOperation OpenWindowSync<T>(params System.Object[] userDatas) where T : UIWindow
    {
        return UniWindow.OpenWindowSync<T>(userDatas);
    }

    /// <summary>
    /// 异步打开窗口
    /// </summary>
    /// <param name="location">资源定位地址</param>
    /// <param name="userDatas">用户自定义数据</param>
    public static OpenWindowOperation OpenWindowAsync<T>(string location, params System.Object[] userDatas) where T : UIWindow
    {
        return UniWindow.OpenWindowAsync(typeof(T), location, userDatas);
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

    public static UIWindow GetWindow<T>()
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
