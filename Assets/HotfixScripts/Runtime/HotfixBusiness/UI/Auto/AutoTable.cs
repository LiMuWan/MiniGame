using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 支持逻辑分离中的模板的抽象
/// </summary>
public class TableItemTemplate
{
    public void Init(UITableItem item)
    {
        Item = item;
        InitTemplate();
    }
    protected UITableItem Item { set; get; }
    public T FindChild<T>(string name) where T : Component
    {
        return this.Item.FindChild<T>(name);
    }

    public virtual void InitTemplate() { }
}

/// <summary>
///支持逻辑分离中的逻辑抽象
/// </summary>
/// <typeparam name="UITemplate"></typeparam>
public class TableItemModel
{
    public void Init(TableItemTemplate template, UITableItem item)
    {
        Template = template;
        Item = item;
        InitModel();
    }
    public TableItemTemplate Template { private set; get; }
    public UITableItem Item { private set; get; }
    public virtual void InitModel() { }
}


public class TableItemModel<T> : TableItemModel where T : TableItemTemplate
{
    public T AutoTemplate => Template as T;
}

/// <summary>
/// 自动生成代码中的表格管理
/// </summary>
/// <typeparam name="UITemplate"></typeparam>
/// <typeparam name="UIModel"></typeparam>
public class AutoGenTableItem<UITemplate, UIModel> : UITableItem
    where UITemplate : TableItemTemplate, new()
    where UIModel : TableItemModel, new()
{
    public UITemplate Template { private set; get; }
    public UIModel Model { private set; get; }

    public override void OnInit()
    {
        Template = new UITemplate();
        Template.Init(this);
        Model = new UIModel();
        Model.Init(Template, this);
    }
}


public class AutoUITableManager<T> :
    UITableManager<UITableItem> where T : UITableItem, new()
{
    protected override UITableItem CreateItem()
    {
        return new T();
    }

    public void Each(Func<T, int, bool> ite)
    {
        if (ite == null) return;
        var index = 0;
        foreach (var item in this)
        {
            var it = item as T;
            if (ite.Invoke(it, index)) break;
            index++;
        }
    }
}

