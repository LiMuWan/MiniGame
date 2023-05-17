//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using Bright.Serialization;
using System.Collections.Generic;



namespace cfg
{

public sealed partial class LevelData :  Bright.Config.BeanBase 
{
    public LevelData(ByteBuf _buf) 
    {
        Id = _buf.ReadInt();
        EntityId = _buf.ReadInt();
        EntityPos = _buf.ReadUnityVector3();
        EntityRot = _buf.ReadUnityVector3();
        LevelId = _buf.ReadInt();
        PostInit();
    }

    public static LevelData DeserializeLevelData(ByteBuf _buf)
    {
        return new LevelData(_buf);
    }

    /// <summary>
    /// 唯一标识
    /// </summary>
    public int Id { get; private set; }
    /// <summary>
    /// 实例ID
    /// </summary>
    public int EntityId { get; private set; }
    /// <summary>
    /// 实体的位置
    /// </summary>
    public UnityEngine.Vector3 EntityPos { get; private set; }
    /// <summary>
    /// 实体的旋转
    /// </summary>
    public UnityEngine.Vector3 EntityRot { get; private set; }
    /// <summary>
    /// 所属场景
    /// </summary>
    public int LevelId { get; private set; }

    public const int __ID__ = 347258158;
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
        + "Id:" + Id + ","
        + "EntityId:" + EntityId + ","
        + "EntityPos:" + EntityPos + ","
        + "EntityRot:" + EntityRot + ","
        + "LevelId:" + LevelId + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}

}