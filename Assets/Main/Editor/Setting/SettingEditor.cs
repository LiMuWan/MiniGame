using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;
using UnityEngine.Assertions;

public class SettingEditor : EditorWindow
{
    private const string PATH = "Assets/Resources/Setting.asset";
    private SettingAsset _asset;
    [MenuItem("Tools/Setting")]
    static void OpenSetting()
    {
        var res = AssetDatabase.LoadAssetAtPath<SettingAsset>(PATH);
        if (res == null)
        {
            res = CreateInstance<SettingAsset>();
            AssetDatabase.CreateAsset(res, null);
        }

        var keys = new Dictionary<string, SettingKey>();
        foreach (var i in AppDomain.CurrentDomain.GetAssemblies())
        {
            foreach (var t in i.GetTypes())
            {
                var attributes = t.GetCustomAttributes<SettingConfigAttribute>();
                if (!attributes.Any()) continue;

                foreach (var a in attributes)
                {
                    if (keys.ContainsKey(a.Key)) continue;
                    keys.Add(a.Key, new SettingKey
                    {
                        Key = a.Key,
                        Value = a.Value,
                        Type = a.Label ?? t.ToString(),
                        Group = a.Group
                    });
                }
            }
        }
        foreach (var i in keys.Values)
        {
            res.TryCreate(i.Key, i.Value, i.Type, i.Group);
        }

        var ui = GetWindow<SettingEditor>();
        ui._asset = res;
        ui.titleContent = new GUIContent("Setting");
    }
    private Vector2 _scroll = Vector2.zero;
    private void OnGUI()
    {
        GUILayout.Space(5);
        EditorGUILayout.BeginHorizontal();
        GUILayout.Space(5);
        EditorGUILayout.BeginVertical(GUILayout.Width(position.width - 10));
        EditorGUILayout.BeginHorizontal(GUILayout.Height(5));
        var label = Mathf.Max(0, position.width - 150);
        GUILayout.Label($"{PATH}", GUILayout.Width(label));
        if (GUILayout.Button("Save"))
        {
            EditorUtility.SetDirty(_asset);
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }
        EditorGUILayout.EndHorizontal();
        _scroll = EditorGUILayout.BeginScrollView(_scroll, GUILayout.Height(position.height - 40));

        if (_asset.Keys != null)
        {
            var groups = from t in _asset.Keys
                         group t by t.Group
                         into g
                         orderby g.Key
                         select new { Group = g.Key, Keys = g.ToArray() }
                ;
            var style = GUIStyle.none;
            style.border = new RectOffset(110, 1, 1, 1);
            //style.normal.textColor = Color.black;

            foreach (var g in groups)
            {
                var tLabel = string.IsNullOrEmpty(g.Group) ? "Setting" : g.Group;

                GUILayout.Box($"{tLabel}");

                EditorGUILayout.BeginVertical(style);

                foreach (var i in g.Keys)
                {
                    EditorGUILayout.LabelField(i.Type);
                    EditorGUILayout.BeginHorizontal();
                    EditorGUILayout.LabelField(i.Key, GUILayout.MaxWidth(150));
                    i.Value = EditorGUILayout.TextField(i.Value ?? string.Empty, GUILayout.MinWidth(150));
                    EditorGUILayout.EndHorizontal();
                }
                GUILayout.Space(10);

                EditorGUILayout.EndVertical();
            }
        }
        EditorGUILayout.EndScrollView();
        EditorGUILayout.EndVertical();
        EditorGUILayout.EndHorizontal();
    }
    
    [OnOpenAsset(1)]
    public static bool OpenAsset(int instanceID, int line)
    {
        var go = EditorUtility.InstanceIDToObject(instanceID);
        if (!(go is SettingAsset)) return false;
        Assert.AreEqual(AssetDatabase.GetAssetPath(go), PATH);
        OpenSetting();
        return true;
    }
}
