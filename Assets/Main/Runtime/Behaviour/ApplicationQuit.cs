using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;

public class ApplicationQuit : MonoBehaviour
{
    private void Awake()
    {
        DontDestroyOnLoad(this);
    }

    private void OnDestroy()
    {
        YooAssets.Destroy();
    }
}
