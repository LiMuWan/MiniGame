using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Setting.asset", menuName = "Setting Asset", order = 0)]
public class SettingAsset : ScriptableObject
{
    public SettingKey[] Keys;

    public string GetValue(string key)
    {
        if (Keys == null) return null;
        foreach (var i in Keys)
        {
            if (i.Key == key) return i.Value;
        }
        return null;
    }

    public void TryCreate(string key, string value, string type, string group)
    {
        if (GetValue(key) != null) return;

        var list = new List<SettingKey>();
        if (Keys != null) list.AddRange(Keys);
        list.Add(new SettingKey
        {
            Key = key,
            Value = value,
            Type = type,
            Group = group
        });
        Keys = list.ToArray();
    }
}
