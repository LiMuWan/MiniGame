using UnityEngine;
using UniFramework.Singleton;

public class SettingManager : SingletonInstance<SettingManager>, ISingleton
{
    private const string PATH = "Setting";
    public SettingAsset asset;
    void ISingleton.OnCreate(object createParam)
    {
        asset = Resources.Load<SettingAsset>(PATH);
        if (asset == null)
        {
            Debug.LogError("No setting Config Tools/Setting create one!");
        }
    }

    void ISingleton.OnDestroy()
    {
       asset = null;
    }

    void ISingleton.OnUpdate()
    {
       
    }

    public string GetValue(string key)
    {
        return asset == null ? null : asset.GetValue(key);
    }

    public void LoadNewConfig(SettingAsset asst)
    {
        this.asset = asst;
    }
}
