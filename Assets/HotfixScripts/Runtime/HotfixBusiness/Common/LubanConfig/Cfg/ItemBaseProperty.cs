//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using Bright.Serialization;
using System.Collections.Generic;


namespace GameConfig.Cfg
{
   
public partial class ItemBaseProperty
{
    private readonly Dictionary<int, Cfg.ItemBasePropertyConfig> _dataMap;
    private readonly List<Cfg.ItemBasePropertyConfig> _dataList;
    
    public ItemBaseProperty(ByteBuf _buf)
    {
        _dataMap = new Dictionary<int, Cfg.ItemBasePropertyConfig>();
        _dataList = new List<Cfg.ItemBasePropertyConfig>();
        
        for(int n = _buf.ReadSize() ; n > 0 ; --n)
        {
            Cfg.ItemBasePropertyConfig _v;
            _v = Cfg.ItemBasePropertyConfig.DeserializeItemBasePropertyConfig(_buf);
            _dataList.Add(_v);
            _dataMap.Add(_v.HpBase, _v);
        }
        PostInit();
    }

    public Dictionary<int, Cfg.ItemBasePropertyConfig> DataMap => _dataMap;
    public List<Cfg.ItemBasePropertyConfig> DataList => _dataList;

    public Cfg.ItemBasePropertyConfig GetOrDefault(int key) => _dataMap.TryGetValue(key, out var v) ? v : null;
    public Cfg.ItemBasePropertyConfig Get(int key) => _dataMap[key];
    public Cfg.ItemBasePropertyConfig this[int key] => _dataMap[key];

    public void Resolve(Dictionary<string, object> _tables)
    {
        foreach(var v in _dataList)
        {
            v.Resolve(_tables);
        }
        PostResolve();
    }

    public void TranslateText(System.Func<string, string, string> translator)
    {
        foreach(var v in _dataList)
        {
            v.TranslateText(translator);
        }
    }
    
    partial void PostInit();
    partial void PostResolve();
}

}