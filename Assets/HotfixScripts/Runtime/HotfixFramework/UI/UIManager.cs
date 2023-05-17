using System.Collections;
using UnityEngine;
using UniFramework.Singleton;
using YooAsset;
using System.Threading.Tasks;
using System;
using Feif.UIFramework;
using UIModule.UI;
using GameFramework.Resource;

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
    private async Task<GameObject> OnAssetRequest(Type type)
    {
        if (UIFrame.IsPanel(type))
        {
            return await ResourcesManager.Instance.LoadAssetAsync<GameObject>($"Assets/HotfixAssets/UIPanel{type.Name}");
        }
        else
        {
            return await ResourcesManager.Instance.LoadAssetAsync<GameObject>($"Assets/HotfixAssets/UIWindow{type.Name}");
        }
    }

    // 资源释放事件
    private void OnAssetRelease(Type type)
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
