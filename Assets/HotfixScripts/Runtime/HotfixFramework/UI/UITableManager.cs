using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 提供给表格操作时 对表格复制行的抽象定义
/// </summary>
public class UITableItem
{
    public Transform Root { private set; get; }
    public void OnCreate(Transform root)
    {
        Root = root;
        OnInit();

    }
    public T FindChild<T>(string name) where T : Component
    {
        return this.Root.FindChild<T>(name);
    }

    public T FindChildBy<T>(string name) where T : Component
    {
        return this.FindChild<T>(name);
    }

    public virtual void OnInit()
    {

    }
}

/// <summary>
/// 一个简单的表格管理，支持遍历和随意修改表格的行数
/// </summary>
/// <typeparam name="T"></typeparam>
public class UITableManager<T> : IEnumerable<T> where T : UITableItem, new()
{
    public UITableManager()
    {
        Cached = false;
        AutoLayout = true;
    }
    private int _count = 0;

    public bool Cached { set; get; }
    public int Count
    {
        get { return _count; }
        set
        {
            if (templet == null)
                throw new Exception("Try to manage a not init table.");
            for (var i = 0; i < _items.Count; i++)
            {
                if (_items[i].Root.gameObject.activeSelf) continue;
                _items[i].Root.ActiveSelfObject(true);
            }
            if (_items.Count != value)
            {
                if (_items.Count > value)
                {
                    #region add
                    Queue<T> dels = new Queue<T>();
                    for (var i = value; i < _items.Count; i++)
                    {
                        if (Cached)
                        {
                            if (_items[i].Root.gameObject.activeSelf)
                            {
                                _items[i].Root.gameObject.SetActive(false);
                            }
                        }
                        else
                        {
                            dels.Enqueue(_items[i]);
                        }
                    }
                    while (dels.Count > 0)
                    {
                        var item = dels.Dequeue();
                        GameObject.Destroy(item.Root.gameObject);
                        _items.Remove(item);
                    }
                    #endregion
                }
                else
                {
                    var count = _items.Count;
                    for (var i = count; i < value; i++)
                    {
                        var item = CreateItem();
                        var obj = GameObject.Instantiate(templet.gameObject) as GameObject;
                        obj.name = string.Format("{0}_{1:0000}", templet.gameObject.name, i);
                        obj.transform.SetParent(templet.parent);
                        obj.transform.localScale = Vector3.one;
                        obj.SetActive(true);
                        item.OnCreate(obj.transform);
                        _items.Add(item);
                    }
                }

            }
            _count = value;
            if (AutoLayout)
                RepositionLayout();
        }
    }

    protected virtual T CreateItem()
    {
        return new T();
    }

    public bool AutoLayout { set; get; }
    public void RepositionLayout()
    {
        if (currentGrid != null)
        {
            currentGrid.SetLayoutVertical();
            currentGrid.SetLayoutHorizontal();
        }
    }

    private List<T> _items = new List<T>();

    private Transform templet;
    public void Init(Transform root)
    {
        if (root.childCount > 0)
            templet = root.GetChild(0);
        else
            throw new Exception("Can't init table from a empty root!");
        templet.ActiveSelfObject(false);
    }

    public T this[int index]
    {
        get
        {
            if (index >= 0 && index < Count)
                return _items[index];
            else return null;
        }
    }
    public virtual IEnumerator<T> GetEnumerator()
    {
        return _items.Take(_count).GetEnumerator();
    }
    System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    {
        return this._items.Take(_count).GetEnumerator();
    }

    private LayoutGroup currentGrid;
    public void InitFromGrid(LayoutGroup grid)
    {
        InitFromLayout(grid);
    }

    public void InitFromLayout(LayoutGroup group)
    {
        currentGrid = group;
        Init(group.transform);
    }
}


public class UITableManagerDefault : UITableManager<UITableItem>
{
    public List<UITableItem> GetItems()
    {
        return this.ToList();
    }

    public void Init(LayoutGroup grid)
    {
        this.InitFromLayout(grid);
    }
}
