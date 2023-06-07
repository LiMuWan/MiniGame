using System.Collections;
using System.Collections.Generic;
using GameFramework.Resource;
using UniFramework.Utility;
using  UnityEngine.SceneManagement;
using UnityEngine;
using System;

public class SceneLoaderManager 
{
    private static Dictionary<string,Scene> sceneDic = new Dictionary<string, Scene>();
    private static Action onLoadSceneHandler;
    private static Action onUnLoadSceneHandler;

    public static void LoadMain(Action callback = null)
    {
        onLoadSceneHandler = callback;
        ResourcesManager.Instance.LoadScene("Main", 0, new LoadSceneCallbacks(LoadSceneSuccessCallback));
    }

    public static void LoadBattle(Action callback = null)
    {
        onLoadSceneHandler = callback;
        ResourcesManager.Instance.LoadScene("Battle", 0, new LoadSceneCallbacks(LoadSceneSuccessCallback), UnityEngine.SceneManagement.LoadSceneMode.Additive);
    }

    private static void LoadSceneSuccessCallback(string sceneAssetName,Scene scene, float duration, object userData)
    {
        UniLogger.Log($"Load Scene {sceneAssetName}!!!");
        sceneDic.TryAdd(sceneAssetName,scene);
        onLoadSceneHandler?.Invoke();
        onLoadSceneHandler = null;
    }
    
    public static void UnLoadScene(string sceneAssetName,Action callback)
    {  
        Scene scene;
        sceneDic.TryGetValue(sceneAssetName,out scene);
        onUnLoadSceneHandler = callback;
        UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(scene).completed += OnUnLoadComplete();
    }

    private static Action<AsyncOperation> OnUnLoadComplete()
    {
        Debug.Log("卸载场景成功");
        onUnLoadSceneHandler?.Invoke();
        onUnLoadSceneHandler = null;
        return null;
    }
}
