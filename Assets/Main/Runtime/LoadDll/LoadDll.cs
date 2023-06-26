using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using System.Reflection;
using System;
using GameFramework.Resource;
using HybridCLR;
using UniFramework.Utility;

public class LoadDll : SingletonInstance<LoadDll>, ISingleton
{
    //补充元数据dll的列表
    //通过RuntimeApi.LoadMetadataForAOTAssembly()函数来补充AOT泛型的原始元数据
    // TODO 可以用配置文件
    public static List<string> AOTMetaAssemblyNames { get; } = new List<string>()
    {
      "LitJson.dll",
      "Main.Runtime.dll",
      "System.Core.dll",
      "UniFramework.Event.dll",
      "UniFramework.Singleton.dll",
      "UnityEngine.CoreModule.dll",
      "mscorlib.dll",
      "YooAsset.dll"
    };


    // TODO 可以用配置文件
    public static List<string> HotfixAssemblyNames {get;} = new List<string>()
    {
       "Hotfix.dll",
    };     

    private static Dictionary<string,byte[]> assetDatas = new Dictionary<string, byte[]>();

    public static byte[] GetAssetData(string dllName)
    {
        return assetDatas[dllName];
    }

    public void OnCreate(object createParam)
    {
        
    }

    public void OnDestroy()
    {
        
    }

    public void OnUpdate()
    {
        
    }
    
    public void LoadDllAssets()
    {
        UniSingleton.StartCoroutine(LoadDllAssetsCo());
    }

    private IEnumerator LoadDllAssetsCo()
    {
        #if !UNITY_EDITOR
             yield return LoadMetadataForAOTAssemblies();
             yield return LoadHotfixAssemblies();
             Assembly hotUpdateAss = Assembly.Load(GetAssetData("Hotfix.dll"));
             Type type = hotUpdateAss.GetType("Main");
        #else
             yield return new WaitForEndOfFrame();
             Assembly hotUpdateAss = Assembly.Load("Hotfix");
             Type type = hotUpdateAss.GetType("Main");
        #endif
        type.GetMethod("Run").Invoke(null, null);
        UniLogger.Log("Main Run Finish!!!");
        UniSingleton.StopCoroutine(LoadDllAssetsCo());
    }

    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private IEnumerator LoadMetadataForAOTAssemblies()
    {
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in AOTMetaAssemblyNames)
        {
            var handle = ResourcesManager.Instance.LoadRawFileAsync(aotDllName);
            yield return handle;
            byte[] dllBytes = handle.GetRawFileData();
            assetDatas[aotDllName] = dllBytes;
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            int err = (int)HybridCLR.RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            UniLogger.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
    
    private IEnumerator LoadHotfixAssemblies()
    {
        foreach (var hotfixDllName in HotfixAssemblyNames)
        {
            var handle = ResourcesManager.Instance.LoadRawFileAsync(hotfixDllName);
            yield return handle;
            byte[] dllBytes = handle.GetRawFileData();
            assetDatas[hotfixDllName] = dllBytes;
            UniLogger.Log($"hotfixDllName:{hotfixDllName}");
        }
    }
    
}
