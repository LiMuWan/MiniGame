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
   
public partial class Task
{
    private readonly Dictionary<int, Cfg.TaskConfig> _dataMap;
    private readonly List<Cfg.TaskConfig> _dataList;
    
    public Task(ByteBuf _buf)
    {
        _dataMap = new Dictionary<int, Cfg.TaskConfig>();
        _dataList = new List<Cfg.TaskConfig>();
        
        for(int n = _buf.ReadSize() ; n > 0 ; --n)
        {
            Cfg.TaskConfig _v;
            _v = Cfg.TaskConfig.DeserializeTaskConfig(_buf);
            _dataList.Add(_v);
            _dataMap.Add(_v.TaskId, _v);
        }
        PostInit();
    }

    public Dictionary<int, Cfg.TaskConfig> DataMap => _dataMap;
    public List<Cfg.TaskConfig> DataList => _dataList;

    public Cfg.TaskConfig GetOrDefault(int key) => _dataMap.TryGetValue(key, out var v) ? v : null;
    public Cfg.TaskConfig Get(int key) => _dataMap[key];
    public Cfg.TaskConfig this[int key] => _dataMap[key];

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