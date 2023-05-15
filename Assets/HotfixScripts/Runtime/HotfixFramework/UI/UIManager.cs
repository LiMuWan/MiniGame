using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using UniFramework.Window;
using YooAsset;

public class UIManager 
{
    public static void Init()
    {
       UniSingleton.StartCoroutine(InitCanvas());
    }

    private static IEnumerator InitCanvas()
    {
        var handle = YooAssets.LoadAssetAsync<GameObject>("UICanvas");
        yield return handle;
        var canvas = handle.InstantiateSync();
        var desktop = canvas.transform.Find("Desktop").gameObject;
        GameObject.DontDestroyOnLoad(canvas);

        // 初始化窗口系统
        UniWindow.Initalize(desktop);
    }
}
