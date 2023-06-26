using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Utility;
using LitJson;
using Hotfix;
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
        #if UNITY_EDITOR || UNITY_STANDALONE_WIN || PLATFORM_STANDALONE_WIN
            UnityWebRequestTool.Get($"http://192.168.1.21:8001/box-login/login/0f1TcbGa160nwF095oHa1NYSVz4TcbGO/BYFxAcGcC4HpZMAlgJwCYHcAeA6AjgDYD2A5kTgMYB2sAtrUeAKY0BuSA+gMwBMsAigAYAVgBYAKhgDi4gGbiAMgEYAguDxIKSgJ4YAqrQCaALQBytAOoAFNAA4LADQBsWbQHYpASSlIAhgBFBACMnAGkAUSU0FVtBEn5wCwVwzwBlUwBOACEAMWBQpCC8NFNPAAlwh20ANQB5TR4CJjc9ILKSAFkSWCVeIA", OnLoginServerCallback);
        #else
            UnityWebRequestTool.Get($"http://{SettingDefine.WebServerUrl}/box-login/login/{code}/{LZString.CompressToBase64(headUrl)}", OnLoginServerCallback);
        #endif
    }
    
    /// <summary>
    /// 获取服务器列表
    /// </summary>
    /// <param name="code"></param>
    public static void SendGetServerList()
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.WebServerUrl}/getServerList", OnLoginServerCallback);
    }

    /// <summary>
    /// 登陆游戏服
    /// </summary>
    /// <param name="code"></param>
    public static void SendChangeServerLogin(int serverId)
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.WebServerUrl}/changeServerLogin/{serverId}/{UserDataManager.LoginData.code}", OnSendLoginCallback);
    }
    /// <summary>
    /// 登陆游戏服
    /// </summary>
    /// <param name="code"></param>
    public static void SendLoginGameServer(int serverId,string openId,string sessionKey,string unionid)
    {
         #if UNITY_EDITOR || UNITY_STANDALONE_WIN || PLATFORM_STANDALONE_WIN
              UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/login/{serverId}/{"123"}", OnSendLoginCallback);
         #else
              UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/login/{serverId}/{openId}", OnSendLoginCallback);
         #endif
    }
   
    private static void OnSendLoginCallback(string error, string jsonData)
    {
       UserEventDefine.UserLoginSuccess.SendEventMessage();
       OnCallback(error,jsonData);
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

    /// <summary>
    /// 卖装备
    /// </summary>
    public static void SendGetTaskReward()
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/getTaskReward/{UserDataManager.Instance.PlayerId}", OnCallback);
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
