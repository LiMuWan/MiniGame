#if UNITY_EDITOR
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEditor;
using UnityEngine;

/// <summary>
/// 该脚本允许一键更换所有TMP_Text与TMP_InputField的字体
/// 包括场景及预制体
/// </summary>
public class ChangeFontWindow : EditorWindow
{
    /*
     * MenuItem属性在编辑器上方创建了一个选项类
     * 默认的类有File, Edit, Assets, GameObject, Component, Window, Help七类
     */

    [MenuItem("Tools/TMP_Text Fonts Change")]
    public static void Open()
    {
        /*
         * GetWindow方法则直接打开了一个小窗口
         * 并调用其中的OnGUI方法
         */
        GetWindow(typeof(ChangeFontWindow));
    }

    private TMP_FontAsset fontToChange;//这个作局部变量使用，用于保护静态变量被随意修改
    private static TMP_FontAsset m_fontToChange;

    private void OnGUI()
    {
        /*
         *  EditorGUILayout.ObjectField生成了一个选项栏，允许给予特定的类型或资产
         *  其返回类型为Object，需要自己进行类型转换
         */
        fontToChange =
            EditorGUILayout.ObjectField(fontToChange, typeof(TMP_FontAsset), true, GUILayout.MinWidth(100f))
            as TMP_FontAsset;

        m_fontToChange = fontToChange;

        /*
         * GUILayout.Button方法绘制了一个按钮，按钮上的字符串便是参数中的值
         * 如果按下了按钮，则该值返回true，并随之调用设定好的函数
         */
        if (GUILayout.Button("Change Fonts In Canvas"))
        {
            ChangeInCanvas();
        }
        if (GUILayout.Button("Change Fonts In Prefabs"))
        {
            ChangeInPrefabs(false);
        }

        if (GUILayout.Button("Change Fonts In Select Files Prefabs"))
        {
            ChangeInPrefabs(true);
        }
    }

    #region 修改场景中的字体

    private static void ChangeInCanvas()
    {
        TMP_Text[] tmpTexts = Resources.FindObjectsOfTypeAll<TMP_Text>();
        TMP_InputField[] tmpInputs = Resources.FindObjectsOfTypeAll<TMP_InputField>();
        foreach (TMP_Text text in tmpTexts)
        {
            /*
             * Undo.RecordObject用于记录场景中的物体的修改
             * EditorUtility.SetDirty用于记录预制体中的修改
             * 拓展内容见后续
             */
            Undo.RecordObject(text, text.gameObject.name);
            text.font = m_fontToChange;
            EditorUtility.SetDirty(text);
        }

        /*
         * 注意到，TMP_InputField下的TMP_Text是无法单纯更改其字体实现的
         * 需要修改TMP_InputField的参数才可以
         */
        foreach (TMP_InputField input in tmpInputs)
        {
            //同上
            Undo.RecordObject(input, input.gameObject.name);
            input.fontAsset = m_fontToChange;
            EditorUtility.SetDirty(input);
        }

        Debug.Log("Change font in canvas succeed!");
    }

    #endregion 修改场景中的字体

    #region 修改预制体中的字体

    private static void ChangeInPrefabs(bool isSelect)
    {
        List<GameObject> prefabs = GetAllPrefabs(isSelect);

        foreach (GameObject prefab in prefabs)
        {
            TMP_Text[] texts = prefab.GetComponentsInChildren<TMP_Text>(true);
            TMP_InputField[] inputFields = prefab.GetComponentsInChildren<TMP_InputField>();

            foreach (TMP_Text text in texts)
            {
                Undo.RecordObject(text, text.gameObject.name);
                text.font = m_fontToChange;
                EditorUtility.SetDirty(text);
            }

            foreach (TMP_InputField inputField in inputFields)
            {
                Undo.RecordObject(inputField, inputField.gameObject.name);
                inputField.fontAsset = m_fontToChange;
                EditorUtility.SetDirty(inputField);
            }

            //使用新方法进行储存预制体
            PrefabUtility.SavePrefabAsset(prefab);
        }

        Debug.Log("Change font in prefabs succeed!");
    }

    /// <summary>
    /// 获取所有的预制体
    /// </summary>
    /// <returns></returns>
    private static List<GameObject> GetAllPrefabs(bool isSelect)
    {
        List<GameObject> prefabs = new List<GameObject>();
        string resourcesPath = string.Empty;
        if (isSelect)
        {
            resourcesPath = GetCurrentAssetDirectory();
            Debug.Log($"resourcesPath = {resourcesPath}");
        }
        else
        {
            resourcesPath = Application.dataPath;
        }

        //利用C#自带的查找文件方式，查找该目录下所有包含该字符串的文件地址
        //位于System.IO命名空间下
        string[] absolutePaths = Directory.GetFiles(resourcesPath, "*.prefab", SearchOption.AllDirectories);
        for (int i = 0; i < absolutePaths.Length; i++)
        {
            //如果数量比较多，有必要显示进度条
            EditorUtility.DisplayProgressBar("获取预制体……", "获取预制体中……", (float)i / absolutePaths.Length);

            /*
             * 对于文件路径，斜杠及反斜杠的讨论
             * 见下
             */
            string path = resourcesPath + absolutePaths[i].Remove(0, resourcesPath.Length);
            path = path.Replace("\\", "/");
            Debug.Log(path);
            GameObject prefab = AssetDatabase.LoadAssetAtPath(path, typeof(GameObject)) as GameObject;
            if (prefab != null)
            {
                prefabs.Add(prefab);
            }
            else
            {
                Debug.Log("预制体不存在！ " + path);
            }
        }
        EditorUtility.ClearProgressBar();
        return prefabs;
    }

    #endregion 修改预制体中的字体


    public static string GetCurrentAssetDirectory()
    {
        foreach (var obj in Selection.GetFiltered<Object>(SelectionMode.Assets))
        {
            var path = AssetDatabase.GetAssetPath(obj);
            if (string.IsNullOrEmpty(path))
                continue;

            if (System.IO.Directory.Exists(path))
                return path;
            else if (System.IO.File.Exists(path))
                return System.IO.Path.GetDirectoryName(path);
        }

        return "Assets";
    }
}
#endif