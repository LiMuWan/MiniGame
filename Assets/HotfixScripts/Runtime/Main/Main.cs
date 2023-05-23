using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameFramework.Resource;

public class Main 
{
    public static void Run()
    {
        ResourcesManager.Instance.LoadScene("Main", 0, new LoadSceneCallbacks(LoadSceneSuccessCallback));
    }

    private static void LoadSceneSuccessCallback(string sceneAssetName, UnityEngine.SceneManagement.Scene scene, float duration, object userData)
    {
        Debug.Log("Load Scene Main!!!");
    }
}

