using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using GameFramework.Resource;
using UnityEngine.SceneManagement;

public class Main 
{
    public static void Run()
    {
        //跳转到入口场景
        //    UniSingleton.CreateSingleton<GameManager>();
        //    GameManager.Instance.Run();
        ResourcesManager.Instance.LoadScene("Main", 0, new LoadSceneCallbacks(LoadSceneSuccessCallback));
    }

    private static void LoadSceneSuccessCallback(string sceneAssetName, UnityEngine.SceneManagement.Scene scene, float duration, object userData)
    {

    }
}

