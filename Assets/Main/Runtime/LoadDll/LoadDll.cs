using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using System.Reflection;
using System;
using GameFramework.Resource;
using HybridCLR;

public class LoadDll : SingletonInstance<LoadDll>, ISingleton
{
    //补充元数据dll的列表
    //通过RuntimeApi.LoadMetadataForAOTAssembly()函数来补充AOT泛型的原始元数据
    // TODO 可以用配置文件
    public static List<string> AOTMetaAssemblyNames { get; } = new List<string>()
    {
      "Main.Runtime.dll",
      "System.Core.dll",
      "UniFramework.Singleton.dll",
      "UniTask.dll",
      "UnityEngine.CoreModule.dll",
      "mscorlib.dll",
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

    public IEnumerator LoadDllAsset()
    {
        yield return LoadMetadataForAOTAssemblies();
        yield return LoadHotfixAssemblies();
        Debug.Log("LoadHotfixAssemblies Finish!!!");
        Assembly hotUpdateAss = Assembly.Load(GetAssetData("Hotfix.dll"));
        Debug.Log("Assembly.Load(Hotfix.dll)) Finish!!!");
        Type type = hotUpdateAss.GetType("Main");
        type.GetMethod("Run").Invoke(null, null);
        Debug.Log("Main Run Finish!!!");
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
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
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
            Debug.Log($"hotfixDllName:{hotfixDllName}");
        }
    }
    
}
