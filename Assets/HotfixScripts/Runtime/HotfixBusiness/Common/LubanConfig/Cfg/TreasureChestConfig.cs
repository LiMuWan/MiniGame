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
public sealed partial class TreasureChestConfig :  Bright.Config.BeanBase 
{
    public TreasureChestConfig(ByteBuf _buf) 
    {
        BoxLv = _buf.ReadInt();
        Cd = _buf.ReadInt();
        Coin = _buf.ReadInt();
        {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);Quality = new System.Collections.Generic.List<int>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { int _e0;  _e0 = _buf.ReadInt(); Quality.Add(_e0);}}
        {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);Rate = new System.Collections.Generic.List<int>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { int _e0;  _e0 = _buf.ReadInt(); Rate.Add(_e0);}}
        PostInit();
    }

    public static TreasureChestConfig DeserializeTreasureChestConfig(ByteBuf _buf)
    {
        return new Cfg.TreasureChestConfig(_buf);
    }

    /// <summary>
    /// 宝箱等级
    /// </summary>
    public int BoxLv { get; private set; }
    /// <summary>
    /// 时间/秒
    /// </summary>
    public int Cd { get; private set; }
    /// <summary>
    /// 金币
    /// </summary>
    public int Coin { get; private set; }
    /// <summary>
    /// 品质
    /// </summary>
    public System.Collections.Generic.List<int> Quality { get; private set; }
    /// <summary>
    /// 掉率
    /// </summary>
    public System.Collections.Generic.List<int> Rate { get; private set; }

    public const int __ID__ = -1405669718;
    public override int GetTypeId() => __ID__;

    public  void Resolve(Dictionary<string, object> _tables)
    {
        PostResolve();
    }

    public  void TranslateText(System.Func<string, string, string> translator)
    {
    }

    public override string ToString()
    {
        return "{ "
        + "BoxLv:" + BoxLv + ","
        + "Cd:" + Cd + ","
        + "Coin:" + Coin + ","
        + "Quality:" + Bright.Common.StringUtil.CollectionToString(Quality) + ","
        + "Rate:" + Bright.Common.StringUtil.CollectionToString(Rate) + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}

}