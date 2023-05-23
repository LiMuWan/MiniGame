using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using GameConfig;
using Bright.Serialization;
using GameFramework.Resource;
using System;

public class ConfigLoader : SingletonInstance<ConfigLoader>, ISingleton
{
    public delegate void LoadConfigCompleteCallback(bool result, string resultMessage = "");
    private Tables m_tables;

    public Tables Tables
    {
        get
        {
            return m_tables;
        }
    }
    
    private List<string> cfgNames = new List<string>(){
        "item_tbitem",
        "battle_tbskill",
        "battle_tbbuff",
        "battle_tbbuffattr",
    };
    private Dictionary<string, Byte[]> m_Configs = new Dictionary<string, Byte[]>();

    void ISingleton.OnCreate(object createParam)
    {

    }

    void ISingleton.OnDestroy()
    {

    }

    void ISingleton.OnUpdate()
    {

    }

    /// <summary>
    /// 注册配置资源。
    /// </summary>
    /// <param name="key">资源Key</param>
    /// <param name="value">资源TextAsset</param>
    /// <returns></returns>
    public bool RegisterTextAssets(string key, Byte[] value)
    {
        if (string.IsNullOrEmpty(key))
        {
            return false;
        }

        if (value == null)
        {
            return false;
        }
        m_Configs[key] = value;
        return true;
    }

    /// <summary>
    /// 加载配置
    /// </summary>
    public void Load(LoadConfigCompleteCallback callback)
    {
        UniSingleton.StartCoroutine(LoadAllConfigs(callback));
    }

    // public async UniTask<Tables> LoadAllUserConfig()
    // {
    //     var tables = new Tables();
    //     await tables.LoadAsync(file => ConfigByteLoader(file));
    //     return tables;
    // }

    // private async UniTask<ByteBuf> ConfigByteLoader(string file)
    // {
    //     var rawFileOperationHandle = ResourcesManager.Instance.LoadRawFileSync(file);
    //     await rawFileOperationHandle;
    //     return new ByteBuf(rawFileOperationHandle.GetRawFileData());
    // }

    /// <summary>
    /// 加载二进制配置
    /// </summary>
    /// <param name="file">FileName</param>
    /// <returns>ByteBuf</returns>
    private ByteBuf LoadByteBuf(string file)
    {
        byte[] ret = null;
        string key = $"{file}.bytes";
        if (m_Configs.ContainsKey(key))
        {
            // 如果已经缓存，则直接使用缓存中的数据
            ret = m_Configs[key];
        }
        else
        {
            // 如果没有缓存，则进行异步加载
            // UniSingleton.StartCoroutine(LoadByteBufAsync(file));
            // var rawFileOperationHandle = ResourcesManager.Instance.LoadRawFileAsync(file);

            // if (rawFileOperationHandle.Status == EOperationStatus.Succeed)
            // {
            //     // 如果加载操作已经完成，则直接获取结果并缓存
            //     ret = rawFileOperationHandle.GetRawFileData();
            //     m_Configs.Add(key, ret);
            //     Debug.Log($"Cache TextAssets, {key}");
            // }
            // else
            // {
            //     // 如果加载操作未完成，则添加完成事件监听器，并返回一个空 ByteBuf
            //     rawFileOperationHandle.Completed += handle =>
            //     {
            //         var result = handle.GetRawFileData();
            //         if (result != null)
            //         {
            //             m_Configs.Add(key, result);
            //             Debug.Log($"Cache TextAssets, {key}");
            //         }
            //     };
            // }
        }
        return new ByteBuf(ret ?? new byte[0]);
    }

    public IEnumerator LoadAllConfigs(LoadConfigCompleteCallback callback)
    {
        byte[] ret = null;

        foreach (var cfgName in cfgNames)
        {
            string key = $"{cfgName}.bytes";
            var rawFileOperationHandle = ResourcesManager.Instance.LoadRawFileAsync(cfgName);
            yield return rawFileOperationHandle;
            // 如果加载操作已经完成，则直接获取结果并缓存
            ret = rawFileOperationHandle.GetRawFileData();
            m_Configs.Add(key, ret);
        }

        m_tables = new Tables(LoadByteBuf);
        callback?.Invoke(true);
    }
}
