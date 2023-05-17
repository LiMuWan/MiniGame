using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using cfg;
using Bright.Serialization;
using Cysharp.Threading.Tasks;
using GameFramework.Resource;

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
    
    private Dictionary<string,TextAsset> m_Congigs = new Dictionary<string, TextAsset>();

    async void ISingleton.OnCreate(object createParam)
    {
        m_tables = await LoadAllUserConfig();
    }

    void ISingleton.OnDestroy()
    {
        
    }

    void ISingleton.OnUpdate()
    {
       
    }

    public async UniTask<Tables> LoadAllUserConfig()
    {
        var tables = new Tables();
        await tables.LoadAsync(file => ConfigByteLoader(file));
        return tables;
    }

    private async UniTask<ByteBuf> ConfigByteLoader(string file)
    {
        var rawFileOperationHandle = ResourcesManager.Instance.LoadRawFileSync(file);
        await rawFileOperationHandle;
        return new ByteBuf(rawFileOperationHandle.GetRawFileData());
    }
}
