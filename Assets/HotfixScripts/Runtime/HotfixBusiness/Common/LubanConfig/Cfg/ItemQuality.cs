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
   
public partial class ItemQuality
{
    private readonly Dictionary<int, Cfg.ItemQualityConfig> _dataMap;
    private readonly List<Cfg.ItemQualityConfig> _dataList;
    
    public ItemQuality(ByteBuf _buf)
    {
        _dataMap = new Dictionary<int, Cfg.ItemQualityConfig>();
        _dataList = new List<Cfg.ItemQualityConfig>();
        
        for(int n = _buf.ReadSize() ; n > 0 ; --n)
        {
            Cfg.ItemQualityConfig _v;
            _v = Cfg.ItemQualityConfig.DeserializeItemQualityConfig(_buf);
            _dataList.Add(_v);
            _dataMap.Add(_v.Quality, _v);
        }
        PostInit();
    }

    public Dictionary<int, Cfg.ItemQualityConfig> DataMap => _dataMap;
    public List<Cfg.ItemQualityConfig> DataList => _dataList;

    public Cfg.ItemQualityConfig GetOrDefault(int key) => _dataMap.TryGetValue(key, out var v) ? v : null;
    public Cfg.ItemQualityConfig Get(int key) => _dataMap[key];
    public Cfg.ItemQualityConfig this[int key] => _dataMap[key];

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