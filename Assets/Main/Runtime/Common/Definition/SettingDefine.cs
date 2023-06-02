using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingDefine 
{
    //内网
    //资源服务器
    public const string ResWebServerUrl = "http://192.168.1.15";//"http://192.168.0.111";
#if ONLINE
    //正式网
    //资源服务器
    public const string ResWebServerUrl = "192.168.1.21:8082";
#endif

    public static string GetHostServerURL()
    {
        string gameVersion = "version";

#if UNITY_EDITOR
        if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.Android)
            return $"{ResWebServerUrl}/CDN/Android/{gameVersion}";
        else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.iOS)
            return $"{ResWebServerUrl}/CDN/IPhone/{gameVersion}";
        else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.WebGL)
            return $"{ResWebServerUrl}/CDN/WebGL/{gameVersion}";
        else
            return $"{ResWebServerUrl}/CDN/PC/{gameVersion}";
#else
        if (Application.platform == RuntimePlatform.Android)
            return $"{ResWebServerUrl}/CDN/Android/{gameVersion}";
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
            return $"{ResWebServerUrl}/CDN/IPhone/{gameVersion}";
        else if (Application.platform == RuntimePlatform.WebGLPlayer)
            return $"{ResWebServerUrl}/CDN/WebGL/{gameVersion}";
        else
            return $"{ResWebServerUrl}/CDN/PC/{gameVersion}";
#endif
    }
}
