using GameFramework.Resource;
using UniFramework.Utility;

public class Main 
{
    public static void Run()
    {
        ResourcesManager.Instance.LoadScene("Main", 0, new LoadSceneCallbacks(LoadSceneSuccessCallback));
    }

    private static void LoadSceneSuccessCallback(string sceneAssetName, UnityEngine.SceneManagement.Scene scene, float duration, object userData)
    {
        UniLogger.Log("Load Scene Main!!!");
    }
}

