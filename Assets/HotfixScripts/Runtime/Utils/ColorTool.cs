using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorTool 
{
    public static Color HtmlStringToColor(string htmlString)
    {
        Color color;
        if (!ColorUtility.TryParseHtmlString(htmlString, out color))
        {
            Debug.LogWarning("颜色字符串格式无效！");
        }
        return color;
    }
}
