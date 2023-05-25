using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class EditorUtil
{
    [MenuItem("Tools/Open Build Dir")]
    public static void OpenBuildDIr()
    {
        System.Diagnostics.Process.Start(Application.persistentDataPath);
    }

    [MenuItem("Tools/Set Texture Readable")]
    public static void SetTexturesReadable()
    {
        // 获取所有的Texture2D资源
        string[] guids = AssetDatabase.FindAssets("t:Texture2D");

        foreach (string guid in guids)
        {
            // 获取对应路径下的Texture2D对象
            string path = AssetDatabase.GUIDToAssetPath(guid);
            TextureImporter textureImporter = (TextureImporter)TextureImporter.GetAtPath(path);
            Debug.LogWarning($"path = {path}");
            // 如果TextureType为Default，则设置为可读写打开
            if (textureImporter.textureType == TextureImporterType.Default)
            {
                textureImporter.isReadable = true;
                AssetDatabase.ImportAsset(path);
            }
        }

        AssetDatabase.Refresh();
    }

    /// <summary>
    /// 拖动文件夹获取路径
    /// </summary>
    /// <param name="rect"></param>
    /// <param name="path"></param>
    public static void DragToGetPath(Rect rect, ref string path)
    {
        if ((UnityEngine.Event.current.type == EventType.DragUpdated
             || UnityEngine.Event.current.type == EventType.DragExited)
            && rect.Contains(UnityEngine.Event.current.mousePosition))
        {
            DragAndDrop.visualMode = DragAndDropVisualMode.Generic;
            if (DragAndDrop.paths != null && DragAndDrop.paths.Length > 0)
            {
                path = DragAndDrop.paths[0];
            }
        }
    }

    /// <summary>
    /// 路径UI显示及输入
    /// </summary>
    /// <param name="name"></param>
    /// <param name="path"></param>
    public static void PathItem(string name, ref string path)
    {
        GUILayout.Label(name);
        Rect rect = EditorGUILayout.GetControlRect(GUILayout.Width(150));
        path = EditorGUI.TextField(rect, path);
        EditorUtil.DragToGetPath(rect, ref path);
    }
}
