using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Utility;
using LitJson;
using Hotfix.EventDefine;
using SettingDefine = Hotfix.SettingDefine;

public static class NetMessageHandler
{
    /// <summary>
    /// 登陆
    /// </summary>
    /// <param name="code"></param>
    public static void SendLogin(string code,string headUrl)
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.WebServerUrl}/server-box/login/{code}/{headUrl}", OnLoginServerCallback);
    }

    /// <summary>
    /// 登陆游戏服
    /// </summary>
    /// <param name="code"></param>
    public static void SendLoginGameServer(int serverId,string openId,string sessionKey,string unionid)
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/login/{serverId}/{openId}/{sessionKey}/{unionid}", OnSendLoginCallback);
    }
   
    private static void OnSendLoginCallback(string error, string jsonData)
    {
       OnCallback(error,jsonData);
       UserEventDefine.UserLoginSuccess.SendEventMessage();
    }
    
    /// <summary>
    /// 开箱子
    /// </summary>
    public static void SendOpenTreasureBox()
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/openBox/{UserDataManager.Instance.PlayerId}", OnSendOpenTreasureBox);
    }
    
    private static void OnSendOpenTreasureBox(string error, string jsonData)
    {
       OnCallback(error,jsonData);
       UserEventDefine.UserOpenTreasureBox.SendEventMessage();
    }

    /// <summary>
    /// 箱子升升级完成
    /// </summary>
    public static void SendBoxLvUpFinish()
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/boxLvUpFinish/{UserDataManager.Instance.PlayerId}", OnCallback);
    }

    /// <summary>
    /// 穿装备
    /// </summary>
    public static void SendWearTempEquip()
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/wearTempEquip/{UserDataManager.Instance.PlayerId}", OnCallback);
    }

    /// <summary>
    /// 卖装备
    /// </summary>
    public static void SendSellTempEquip()
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/sellTempEquip/{UserDataManager.Instance.PlayerId}", OnCallback);
    }

    private static void OnCallback(string error, string jsonData)
    {   
        UniLogger.Log($"jsonData = {jsonData}");
        if (!string.IsNullOrEmpty(error)) UniLogger.Error(error);
        var jUserData = JsonMapper.ToObject<JUserData>(jsonData);
        UniLogger.Log(jUserData.ToStringFormat());
        UserDataManager.Instance.InitOrRefresh(jUserData.data);
    }

    private static void OnLoginServerCallback(string error, string jsonData)
    {   
        UniLogger.Log($"jsonData = {jsonData}");
        if (!string.IsNullOrEmpty(error)) 
        {
            UniLogger.Error(error);
            return;
        }
        var jUserLoginData = JsonMapper.ToObject<JUserLoginData>(jsonData);
        UniLogger.Log(jUserLoginData.ToStringFormat());
        UserDataManager.LoginData = jUserLoginData;
        SettingDefine.GameServerUrl = $"{jUserLoginData.data.gameServer.serverIp}:{jUserLoginData.data.gameServer.serverPort}";
        SendLoginGameServer(jUserLoginData.data.gameServer.serverId,jUserLoginData.data.user.openId,jUserLoginData.data.sessionkey,jUserLoginData.data.unionId);
    }
}
