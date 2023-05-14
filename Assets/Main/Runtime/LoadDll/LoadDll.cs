using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using System.Linq;
using YooAsset;

public class LoadDll : SingletonInstance<LoadDll>, ISingleton
{
    //补充元数据dll的列表
    //通过RuntimeApi.LoadMetadataForAOTAssembly()函数来补充AOT泛型的原始元数据
    // TODO 可以用配置文件
    public static List<string> AOTMetaAssemblyNames {get;} = new List<string>()
    {
        "mscorlib",
        "System",
        "System.Core",
        "UniFramework.Machine",
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
        var package = YooAssets.GetPackage("DefaultPackage");

        var assets = new List<string>
        {
            "Assembly-CSharp",
            "Hotfix",
        }.Concat(AOTMetaAssemblyNames);

        foreach(var asset in assets)
        {
            RawFileOperationHandle handle = package.LoadRawFileAsync(asset);
            yield return handle;
            byte[] fileData = handle.GetRawFileData();
            assetDatas[asset] = fileData;
            Debug.Log($"dll:{asset} size : {fileData.Length}");
        }

        // GameObject main = new GameObject("HotFix.Main");
        // main.AddComponent<Main>();
    }
}
