using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class UICreater : EditorWindow
{
    [MenuItem("Tools/UI/AUTO_GEN_WINDOWS_CODE #1")]
    [MenuItem("GameObject/UI/AUTO_GEN_WINDOWS_CODE", false, 0)]
    public static void OpenEditor()
    {
        window = (UICreater)GetWindow(typeof(UICreater), true, "Gen UI Code");
        window.minSize = new Vector2(300, 400);
        Init();
    }

    private static EditorWindow window;

    /// <summary>
    /// 持久化数据文件所在路径
    /// </summary>
    public static string dataPath = "Assets/HotfixScripts/Editor/UI/Data/";
    /// 持久化文件名称
    /// </summary>
    public static string dataFileName = "UICreaterData.asset";
    public bool ForIlRuntime = false;

    public void OnGUI()
    {
        if (Selection.activeGameObject != currentSelect)
        {
            Names = new Dictionary<string, string>();
            Tables = new Dictionary<string, TableComponent>();
            currentSelect = Selection.activeGameObject;
            if (currentSelect != null)
            {
                className = currentSelect.name;
                Init(currentSelect.transform);
            }
        }

        EditorGUILayout.BeginVertical();

        GUILayout.Label("Tag:" + EXPORT_TAG + " Will Be Export(请保证到处元素的唯一性)");
        GUILayout.Space(20);
        if (currentSelect != null && Names != null)
        {
            GUILayout.Label(string.Format("找到{0}个UI控件", Names.Count));
            GUILayout.BeginHorizontal();
            EditorUtil.PathItem("Windows 脚本路径", ref windowsScriptPath);
            EditorUtil.PathItem("Windows 预制体路径", ref windowsPrefabPath);
            if (GUILayout.Button("保存", GUILayout.Width(100)))
            {
                SaveDataToLocal();
                Close();
            }
            GUILayout.EndHorizontal();
            EditorGUILayout.TextField("ClassName:", className);
            GUILayout.Label("UITemplate File Name:" + className + ".ui.cs");

            createModelFile = EditorGUILayout.ToggleLeft("创建逻辑文件（PS:将覆盖原有逻辑文件，非首次创建建议不要选择）", createModelFile);
            if (showExample = EditorGUILayout.Foldout(showExample, "代码概要"))
            {
                scroll = GUILayout.BeginScrollView(scroll, GUILayout.Height(200));
                EditorGUILayout.BeginVertical();
                foreach (var i in Names)
                {
                    GUILayout.Label(string.Format("public {1} {0}", i.Key, i.Value) + " {set;get;}");
                }
                foreach (var i in Tables)
                {
                    GUILayout.Label("Table:" + i.Key);
                    foreach (var f in i.Value.Components)
                    {
                        GUILayout.Label(string.Format("   public {1} {0}", f.Key, f.Value) + " {set;get;}");
                    }
                }
                EditorGUILayout.EndVertical();
                GUILayout.EndScrollView();
            }

            var rect = new Rect(position.width - 105, position.height - 25, 100, 20);
            if (GUI.Button(rect, "Gen"))
            {
                if (EditorUtility.DisplayDialog("Save File To:", windowsScriptPath, "Create", "Cancel"))
                {
                    Export();
                    ExportPrefab();
                    Close();
                }
            }
        }
        EditorGUILayout.EndVertical();
    }

    private static readonly string tableTemplateField =
@"        public [Type] [Name];";
    private static readonly string tableTemlateFindField =
@"            [Name] = FindChild<[Type]>(" + "\"[Name]\"" + ");";
    private static readonly string tableTemplateClass =
@"    public class [TableName]TableTemplate : TableItemTemplate
    {
        public [TableName]TableTemplate(){}
[TableTemplateField]
        public override void InitTemplate()
        {
            [TableTemplateFindField]
        }
    }";
    private static string templateFields =
            @"    protected [Type] [Name];";
    private static string templateTableManager =
        @"    protected AutoUITableManager<AutoGenTableItem<[TableName]TableTemplate, [TableName]TableModel>> [TableName]TableManager = new AutoUITableManager<AutoGenTableItem<[TableName]TableTemplate, [TableName]TableModel>>();";
    private static string templateFieldFind =
@"        [Name] = FindChild<[Type]>(" + "\"[Name]\"" + ");";
    private static string templateInitTable =
@"        [TableName]TableManager.InitFromLayout([TableName]);";
    private static string templateFile =
@"using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UniFramework.Window;

//AUTO GenCode Don't edit it.
[WindowAttribute(100, false)]
public partial class [ClassName] : UIWindow
{
[TableTemplates]
[Fields]
[TableManagers]
    protected override void InitTemplate()
    {
            [FieldFinds]
            [InitTables]
    }

    public override void OnCreate()
    {
        base.OnCreate();
    }

    public override void OnDestroy()
    {
       
    }

    public override void OnRefresh()
    {
       
    }

    public override void OnUpdate()
    {
        
    }
}";
    private static readonly string tableModelClass =
@" public class [TableName]TableModel : TableItemModel<[TableName]TableTemplate>
    {
        public [TableName]TableModel(){}
        public override void InitModel()
        {
            //todo
        }
    }";
    private static readonly string modelFile =
@"using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;

//Donot use base.[MethodName] 
public partial class [ClassName]
{
    [TableModels]
    protected override void InitModel()
    {
           //To do: init
    }

    protected override void OnSetVisible(bool visible) 
    { 
        
    }
}";
    public static void Close()
    {
        AssetDatabase.Refresh();
        window.Close();
    }

    /// <summary>
    /// 数据初始化
    /// </summary>
    public static void Init()
    {
        ReadDataFromLocal();
    }

    /// <summary>
    /// 从本地读取数据
    /// </summary>
    public static void ReadDataFromLocal()
    {
        UICreaterData data = AssetDatabase.LoadAssetAtPath<UICreaterData>(dataPath + dataFileName);
        if (data != null)
        {
            windowsScriptPath = data.WindowsScriptPath;
            windowsPrefabPath = data.WindowsPrefabPath;
        }
    }

    /// <summary>
    /// 保存数据到本地
    /// </summary>
    public static void SaveDataToLocal()
    {
        Directory.CreateDirectory(dataPath);
        UICreaterData data = new UICreaterData();
        data.WindowsScriptPath = windowsScriptPath;
        data.WindowsPrefabPath = windowsPrefabPath;
        AssetDatabase.CreateAsset(data, dataPath + dataFileName);
        AssetDatabase.Refresh();
    }

    private void Export()
    {
        var fields = new StringBuilder();
        var fieldFinds = new StringBuilder();
        foreach (var i in Names)
        {
            fields.AppendLine(templateFields.Replace("[Name]", i.Key).Replace("[Type]", i.Value));
            fieldFinds.AppendLine(templateFieldFind.Replace("[Name]", i.Key).Replace("[Type]", i.Value));
        }

        var tableModel = new StringBuilder();
        var tableTemplate = new StringBuilder();
        var tableInt = new StringBuilder();
        var tableManager = new StringBuilder();
        foreach (var i in Tables)
        {
            var tempModel = tableModelClass.Replace("[TableName]", i.Key);
            var tempTemplate = tableTemplateClass.Replace("[TableName]", i.Key);

            var tfields = new StringBuilder();
            var tfieldFinds = new StringBuilder();
            foreach (var f in i.Value.Components)
            {
                tfields.AppendLine(tableTemplateField.Replace("[Name]", f.Key).Replace("[Type]", f.Value));
                tfieldFinds.AppendLine(tableTemlateFindField.Replace("[Name]", f.Key).Replace("[Type]", f.Value));
            }
            tempTemplate = tempTemplate.Replace("[TableTemplateField]", tfields.ToString()).Replace("[TableTemplateFindField]", tfieldFinds.ToString());
            //tempModel.Replace();
            tableModel.AppendLine(tempModel);
            tableTemplate.AppendLine(tempTemplate);
            tableManager.AppendLine(templateTableManager.Replace("[TableName]", i.Key));
            //TableType
            tableInt.AppendLine(templateInitTable.Replace("[TableName]", i.Key)
                .Replace("[TableType]", i.Value.Type == TableTypes.UIGrid ? "Grid" : "Table"));
        }

        if (createModelFile)
        {
            var modeCode = modelFile.Replace("[TableModels]", tableModel.ToString()).Replace("[ClassName]", className);
            File.WriteAllText(Path.Combine(windowsScriptPath, className + ".cs"), modeCode);
        }

        var templateCode = templateFile.Replace("[ClassName]", className)
            .Replace("[ResourceName]", className)
            .Replace("[Fields]", fields.ToString())
            .Replace("[FieldFinds]", fieldFinds.ToString())
            .Replace("[InitTables]", tableInt.ToString())
            .Replace("[TableTemplates]", tableTemplate.ToString())
            .Replace("[TableManagers]", tableManager.ToString());
        File.WriteAllText(Path.Combine(windowsScriptPath, className + ".ui.cs"), templateCode);
        AssetDatabase.Refresh();
    }

    private void ExportPrefab()
    {
        var prefabInPath = windowsPrefabPath + "/" + Selection.activeGameObject.name + ".prefab";
        Debug.Log("windows create prefabInPath = " + prefabInPath);
        //当前预制体
        GameObject target = AssetDatabase.LoadAssetAtPath(prefabInPath, typeof(GameObject)) as GameObject;
        // //预制体不存在
        // if (target)
        // {
        //     File.Delete(prefabInPath);
        //     AssetDatabase.Refresh();
        // }
        //此处进行预制体的修改,依旧使用Switch来获取对应脚本来进行数据替换
        if (!target)
        {
            PrefabUtility.SaveAsPrefabAsset(Selection.activeGameObject, prefabInPath);
        }

        AssetDatabase.Refresh();
    }

    private Vector2 scroll;
    private bool showExample = true;
    private string className = string.Empty;
    private static string windowsScriptPath = string.Empty;
    private static string windowsPrefabPath = string.Empty;
    private bool createModelFile = false;

    private static Type[] types = new Type[]{
        //typeof(RoundGridLayout),
        typeof(GridLayoutGroup),
        typeof(VerticalLayoutGroup),
        typeof(HorizontalLayoutGroup),
        typeof(Button),
        typeof(Slider),
        typeof(TMP_InputField),
        typeof(TMP_Text),
        typeof(TMP_Dropdown),
        typeof(TextMeshPro),
        typeof(Text),
        typeof(Toggle),
        typeof(ToggleGroup),
        typeof(InputField),
        typeof(Dropdown),
        typeof(Scrollbar),
        typeof(ScrollRect),
        typeof(Image),
        typeof(RawImage),
        typeof(RectTransform)
    };

    private Component GetComponet(Transform root)
    {
        foreach (var i in types)
        {
            var t = root.GetComponent(i);
            if (t == null)
                continue;
            return t;
        }

        return null;
    }

    public void Init(Transform root)
    {
        #region CollectItem
        if (root.CompareTag(EXPORT_TAG))
        {
            var ui = GetComponet(root);
            if (ui != null)
            {
                Debug.Log(string.Format("Name:{0} Tag:{1}", ui.name, root.tag));
                if (!Names.ContainsKey(ui.name))
                {
                    Names.Add(ui.name, ui.GetType().Name);
                    if (ui.GetType().IsSubclassOf(typeof(LayoutGroup)))
                    {
                        var table = new TableComponent();
                        table.Name = ui.name;
                        table.Type = TableTypes.UIGrid;
                        for (var i = 0; i < root.childCount; i++)
                        {
                            GetChildExportItems(root.GetChild(i), table.Components);
                        }
                        Tables.Add(table.Name, table);
                        return;
                    }
                    else
                    {
                        if (!Names.ContainsKey(root.name))
                            Names.Add(root.name, root.GetType().Name);
                    }
                }
            }
        }
        #endregion

        for (var i = 0; i < root.childCount; i++)
        {
            Init(root.GetChild(i));
        }
    }

    private void GetChildExportItems(Transform root, Dictionary<string, string> dic)
    {
        if (root.CompareTag(EXPORT_TAG))
        {
            var ui = this.GetComponet(root);
            if (ui != null)
            {
                if (!dic.ContainsKey(ui.name))
                {
                    dic.Add(ui.name, ui.GetType().Name);
                }
                else
                {
                    Debug.LogError("name is exists !!-> Name:" + ui.name);
                }
            }
            else
            {
                var trans = root.transform;
                if (!dic.ContainsKey(trans.name))
                {
                    dic.Add(trans.name, trans.GetType().Name);
                }
                else
                {
                    Debug.LogError("name is exists !!-> Name:" + trans.name);
                }
            }
        }

        for (var i = 0; i < root.childCount; i++)
        {
            GetChildExportItems(root.GetChild(i), dic);
        }
    }
    private const string EXPORT_TAG = "Export";

    private Dictionary<string, string> Names;
    private Dictionary<string, TableComponent> Tables;

    private GameObject currentSelect;

    public class TableComponent
    {
        public TableComponent()
        {
            Components = new Dictionary<string, string>();
        }
        public string Name { set; get; }

        public Dictionary<string, string> Components { set; get; }

        public TableTypes Type { set; get; }
    }

    public enum TableTypes
    {
        UITable,
        UIGrid
    }
}