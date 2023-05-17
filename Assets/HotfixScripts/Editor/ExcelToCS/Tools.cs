#if UNITY_EDITOR
using System.IO;
using UnityEditor;
using UnityEngine;

/// <summary>
/// Please modify the description.
/// </summary>
public static class Tools
{
    // [MenuItem("Tools/FrameworkTools/GenerateProtobuf")]
	// private static void GenProtoTools() 
	// {
	// 	Application.OpenURL(Path.Combine(Application.dataPath, "../LubanTools/Proto/gen_pb_code.bat"));
	// }

	[MenuItem("Tools/Excel2CSCode/GenerateConfig")]
	private static void GenConfigToStreamingAssets()
	{
        string batFilePath = Application.dataPath + "/../LubanTools/DesignerConfigs/gen_code_bin.bat";
        batFilePath = batFilePath.Replace("/", "\\"); // Windows 中使用反斜杠路径分隔符

        if (!System.IO.File.Exists(batFilePath))
        {
            Debug.LogError("Cannot find the batch file: " + batFilePath);
            return;
        }
        Debug.Log("start GenerateConfig " + batFilePath);
		// System.Diagnostics.Process.Start("cmd.exe", "/c \"" + batFilePath + "\"");
        Application.OpenURL(batFilePath);
	}
}
#endif