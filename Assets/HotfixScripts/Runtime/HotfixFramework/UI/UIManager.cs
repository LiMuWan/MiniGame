using System.Collections;
using UnityEngine;
using UniFramework.Singleton;
using YooAsset;
using System.Threading.Tasks;
using System;
using Feif.UIFramework;
using UIModule.UI;
using GameFramework.Resource;
using UnityEngine.EventSystems;

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

    public static UIBase CurrentPanel
    {
        get
        {
            return UIFrame.CurrentPanel;
        }
    }
    
    public static void Init()
    {
        var canvas =  ResourcesManager.Instance.LoadAsset<GameObject>($"{UIPath}UIPanel/UIFrame.prefab");
        s_EventSystem = canvas.GetComponentInChildren<EventSystem>();
        stuckPanel = canvas.transform.Find("SutckPanel").gameObject;
        stuckPanel.SetActive(false);
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
    private static async Task<GameObject> OnAssetRequest(Type type)
    {
        Debug.Log($"UIType = {type.Name}");
        // return await ResourcesManager.Instance.LoadAssetAsync<GameObject>($"{type.Name}");
        if (UIFrame.IsPanel(type))
        {
            return await ResourcesManager.Instance.LoadAssetAsync<GameObject>($"{UIPath}UIPanel/{type.Name}.prefab");
        }
        else
        {
            return await ResourcesManager.Instance.LoadAssetAsync<GameObject>($"{UIPath}UIWindow/{type.Name}.prefab");
        }
    }

    // 资源释放事件
    private static void OnAssetRelease(Type type)
    {
        // if (UIFrame.IsPanel(type))
        // {
        //     ResourcesManager.Instance.UnloadAsset<GameObject>($"Assets/HotfixAssets/UIPanel{type.Name}");
        // }
        // else
        // {
        //     ResourcesManager.Instance.LoadAssetAsync<GameObject>($"Assets/HotfixAssets/UIWindow{type.Name}");
        // }
    }

    private static void OnStuckStart()
    {
        stuckPanel.SetActive(true);
    }

    private static void OnStuckEnd()
    {
        stuckPanel.SetActive(false);
    }

    // async void ISingleton.OnCreate(object createParam)
    // {
    //     //await InitCanvas();
    // }

    // void ISingleton.OnUpdate()
    // {

    // }

    public static void OnDestroy()
    {
        UIFrame.OnAssetRequest -= OnAssetRequest;
        UIFrame.OnAssetRelease -= OnAssetRelease;
        UIFrame.OnStuckStart -= OnStuckStart;
        UIFrame.OnStuckEnd -= OnStuckEnd;
        stuckPanel = null;
        s_EventSystem = null;
    }

    
    #region EventSystem

    public static void SetEventSystemEnable(bool enable)
    {
        if(EventSystem != null)
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

    /// <summary>
    /// 显示UI
    /// </summary>
    public static async Task Show(UIBase ui, UIData data = null)
    {
        await UIFrame.Show(ui, data);
    }

    /// <summary>
    /// 显示Panel或Window
    /// </summary>
    public static async Task Show<T>(UIData data = null)
    {
        await UIFrame.Show(typeof(T), data);
    }

    /// <summary>
    /// 显示Panel或Window
    /// </summary>
    public static async Task Show(Type type, UIData data = null)
    {
        await UIFrame.Show(type, data);
    }

    #endregion

    #region 隐藏

    /// <summary>
    /// 隐藏Panel或Window
    /// </summary>
    public static Task Hide<T>()
    {
        return UIFrame.Hide(typeof(T));
    }

    /// <summary>
    /// 隐藏UI
    /// </summary>
    public static Task Hide(UIBase ui)
    {
       return UIFrame.Hide(ui);
    }
    #endregion

    #region 刷新
    /// <summary>
    /// 刷新UI。data为null时，将用之前的data刷新
    /// </summary>
    public static Task Refresh<T>(UIData data = null)
    {
        return UIFrame.Refresh(typeof(T), data);
    }
    #endregion

    /// <summary>
    /// 创建UI GameObject
    /// </summary>
    public static Task<GameObject> Instantiate(GameObject prefab, Transform parent = null, UIData data = null)
    {
        return UIFrame.Instantiate(prefab, parent, data);
    }

    /// <summary>
    /// 销毁UI GameObject
    /// </summary>
    public static void Destroy(GameObject instance)
    {
        UIFrame.Destroy(instance);
    }

    /// <summary>
    /// 立即销毁UI GameObject
    /// </summary>
    public static void DestroyImmediate(GameObject instance)
    {
        UIFrame.DestroyImmediate(instance);
    }

    /// <summary>
    /// 强制释放已经关闭的UI，即使UI的AutoDestroy为false，仍然释放该资源
    /// </summary>
    public static void Release()
    {
        UIFrame.Release();
    }

}
