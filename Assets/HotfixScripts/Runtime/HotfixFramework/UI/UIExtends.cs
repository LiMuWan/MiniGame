using System;
using UniFramework.Window;
using UnityEngine;
using UnityEngine.UI;

public static class UIExtends
{
    public static void ActiveSelfObject(this Component com, bool active)
    {
        com.gameObject.SetActive(active);
    }

    public static void SetLayer(this GameObject u, string layer)
    {
        u.transform.SetLayer(LayerMask.NameToLayer(layer));
    }

    public static T TryAdd<T>(this GameObject obj) where T : Component
    {
        if (obj.TryGetComponent(out T c)) return c;
        return obj.AddComponent<T>();
    }

    public static T TryAdd<T>(this Component obj) where T : Component
    {
        return TryAdd<T>(obj.gameObject);
    }

    // ReSharper disable once InconsistentNaming
    public static void RestRTS(this Transform trans)
    {
        trans.localPosition = Vector3.zero;
        trans.localScale = Vector3.one;
        trans.localRotation = Quaternion.identity;
    }

    public static void SetLayer(this Transform trans, int layer)
    {
        trans.gameObject.layer = layer;
        foreach (var i in trans.GetComponentsInChildren<Transform>()) i.gameObject.layer = layer;
    }

    public static T FindChild<T>(this Transform trans, string name) where T : Component
    {
        var t = FindInAllChild(trans, name);
        if (t == null) return null;
        else return t.GetComponent<T>();
    }

    public static T Find<T>(this Transform trans, string path) where T : Component
    {
        var t = trans.Find(path);
        if (t == null) return null;
        return t.GetComponent<T>();
    }

    public static Transform FindInAll(this Transform transform, string name)
    {
        return FindInAllChild(transform, name);
    }

    private static Transform FindInAllChild(Transform trans, string name)
    {
        if (trans.name == name) { return trans; }

        for (var i = 0; i < trans.childCount; i++)
        {
            var t = FindInAllChild(trans.GetChild(i), name);
            if (t != null) return t;
        }
        return null;
    }

    public static void DrawSphere(Vector3 center, float mRadius, Vector3 forward)
    {

        // 绘制圆环
        Vector3 beginPoint = Vector3.zero;
        Vector3 firstPoint = Vector3.zero;
        for (float theta = 0; theta < 2 * Mathf.PI; theta += 0.2f)
        {
            float x = mRadius * Mathf.Cos(theta);
            float z = mRadius * Mathf.Sin(theta);
            Vector3 endPoint = new Vector3(x, 0, z);
            if (theta == 0)
            {
                firstPoint = endPoint;
            }
            else
            {
                Gizmos.DrawLine(beginPoint + center, endPoint + center);
            }
            beginPoint = endPoint;
        }

        // 绘制最后一条线段
        Gizmos.DrawLine(firstPoint + center, beginPoint + center);
        Gizmos.DrawLine(center, center + forward * mRadius);
    }

    public static void SetText(this Button bt, string text)
    {
        var t = bt.transform.FindChild<Text>("Text");
        if (t == null) return;
        t.text = text;
    }

    public static void AddClick(this Button button, Action<object> call, object state)
    {
        button.onClick.RemoveAllListeners();
        button.onClick.AddListener(() =>
        {
            call?.Invoke(state);
        });
    }

    public static Component FindChild(this UIWindow w, string type, string name)
    {
        switch (type)
        {
            case "Button": return w.FindChildBy<Button>(name);
            case "Transform": return w.FindChildBy<Transform>(name);
            case "Image": return w.FindChildBy<Image>(name);
            case "GridLayoutGroup": return w.FindChildBy<GridLayoutGroup>(name);
            case "VerticalLayoutGroup": return w.FindChildBy<VerticalLayoutGroup>(name);
            case "HorizontalLayoutGroup": return w.FindChildBy<HorizontalLayoutGroup>(name);
            case "Slider": return w.FindChildBy<Slider>(name);
            case "Toggle": return w.FindChildBy<Toggle>(name);
            case "Text": return w.FindChildBy<Text>(name);
            case "ToggleGroup": return w.FindChildBy<ToggleGroup>(name);
            case "InputField": return w.FindChildBy<InputField>(name);
            case "Dropdown": return w.FindChildBy<Dropdown>(name);
            case "Scrollbar": return w.FindChildBy<Scrollbar>(name);
            case "ScrollRect": return w.FindChildBy<ScrollRect>(name);
            case "RawImage": return w.FindChildBy<RawImage>(name);
            default: throw new Exception($"unknown type {type}");
        }
    }

    public static Component Find(this UIWindow w, string type, string path)
    {
        switch (type)
        {
            case "Button": return w.FindChildWithPath<Button>(path);
            case "Transform": return w.FindChildWithPath<Transform>(path);
            case "Image": return w.FindChildWithPath<Image>(path);
            case "GridLayoutGroup": return w.FindChildWithPath<GridLayoutGroup>(path);
            case "VerticalLayoutGroup": return w.FindChildWithPath<VerticalLayoutGroup>(path);
            case "HorizontalLayoutGroup": return w.FindChildWithPath<HorizontalLayoutGroup>(path);
            case "Slider": return w.FindChildWithPath<Slider>(path);
            case "Toggle": return w.FindChildWithPath<Toggle>(path);
            case "Text": return w.FindChildWithPath<Text>(path);
            case "ToggleGroup": return w.FindChildWithPath<ToggleGroup>(path);
            case "InputField": return w.FindChildWithPath<InputField>(path);
            case "Dropdown": return w.FindChildWithPath<Dropdown>(path);
            case "Scrollbar": return w.FindChildWithPath<Scrollbar>(path);
            case "ScrollRect": return w.FindChildWithPath<ScrollRect>(path);
            case "RawImage": return w.FindChildWithPath<RawImage>(path);
            case "ContentSizeFitter": return w.FindChildWithPath<ContentSizeFitter>(path);
            default: throw new Exception($"unknown type {type}");
        }
    }

    public static Component FindChild(this UITableItem w, string type, string name)
    {
        switch (type)
        {
            case "Button": return w.FindChildBy<Button>(name);
            case "Transform": return w.FindChildBy<Transform>(name);
            case "Image": return w.FindChildBy<Image>(name);
            case "GridLayoutGroup": return w.FindChildBy<GridLayoutGroup>(name);
            case "VerticalLayoutGroup": return w.FindChildBy<VerticalLayoutGroup>(name);
            case "HorizontalLayoutGroup": return w.FindChildBy<HorizontalLayoutGroup>(name);
            case "Slider": return w.FindChildBy<Slider>(name);
            case "Toggle": return w.FindChildBy<Toggle>(name);
            case "Text": return w.FindChildBy<Text>(name);
            case "ToggleGroup": return w.FindChildBy<ToggleGroup>(name);
            case "InputField": return w.FindChildBy<InputField>(name);
            case "Dropdown": return w.FindChildBy<Dropdown>(name);
            case "Scrollbar": return w.FindChildBy<Scrollbar>(name);
            case "ScrollRect": return w.FindChildBy<ScrollRect>(name);
            case "RawImage": return w.FindChildBy<RawImage>(name);
            default: throw new Exception($"unknown type {type}");
        }
    }
}