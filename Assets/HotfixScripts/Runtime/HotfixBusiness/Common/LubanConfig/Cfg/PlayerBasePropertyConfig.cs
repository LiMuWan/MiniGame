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
public sealed partial class PlayerBasePropertyConfig :  Bright.Config.BeanBase 
{
    public PlayerBasePropertyConfig(ByteBuf _buf) 
    {
        HpBase = _buf.ReadInt();
        SpdBase = _buf.ReadInt();
        AtkBase = _buf.ReadInt();
        DefBase = _buf.ReadInt();
        PostInit();
    }

    public static PlayerBasePropertyConfig DeserializePlayerBasePropertyConfig(ByteBuf _buf)
    {
        return new Cfg.PlayerBasePropertyConfig(_buf);
    }

    /// <summary>
    /// 血量初始值
    /// </summary>
    public int HpBase { get; private set; }
    /// <summary>
    /// 速度初始值
    /// </summary>
    public int SpdBase { get; private set; }
    /// <summary>
    /// 攻击初始值
    /// </summary>
    public int AtkBase { get; private set; }
    /// <summary>
    /// 防御初始值
    /// </summary>
    public int DefBase { get; private set; }

    public const int __ID__ = -1913015821;
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
        + "HpBase:" + HpBase + ","
        + "SpdBase:" + SpdBase + ","
        + "AtkBase:" + AtkBase + ","
        + "DefBase:" + DefBase + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}

}