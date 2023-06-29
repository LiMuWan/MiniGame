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
    public static void SendLogin(string code)
    {
        #if UNITY_EDITOR || UNITY_STANDALONE_WIN || PLATFORM_STANDALONE_WIN
            UnityWebRequestTool.Get($"http://192.168.1.21:8001/box-login/login/0f1TcbGa160nwF095oHa1NYSVz4TcbGO", OnLoginServerCallback);
        #else
            UnityWebRequestTool.Get($"http://{SettingDefine.WebServerUrl}/box-login/login/{code}", OnLoginServerCallback);
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
    public static void SendLoginGameServer(int serverId,string openId,string playerName,string headUrl)
    {
         #if UNITY_EDITOR || UNITY_STANDALONE_WIN || PLATFORM_STANDALONE_WIN
              UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/login/{serverId}/{"211"}/{"笔圣"}/{"BYFxAcGcC4HpZMAlgJwCYHcAeA6AjgDYD2A5kTgMYB2sAtrUeAKY0BuSA+gMwBMsAigAYAVgBYAKhgDi4gGbiAMgEYAguDxIKSgJ4YAqrQCaALQBytAOoAFNAA4LADQBsWbQHYpASSlIAhgBFBACMnAGkAUSU0FVtBEn5wCwVwzwBlUwBOACEAMWBQpCC8NFNPAAlwh20ANQB5TR4CJjc9ILKSAFkSWCVeIA"}", OnSendLoginCallback);
         #else
              UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/login/{serverId}/{openId}/{playerName}/{headUrl}", OnSendLoginCallback);
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
    
    /// <summary>
    /// 获取排行榜数据
    /// </summary>
    public static void SendGetRankList()
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/getRankList/{UserDataManager.Instance.PlayerId}", OnGetRankList);
    }

    private static void OnGetRankList(string error, string jsonData)
    {
       OnRankCallback(error,jsonData);
       UserEventDefine.UserGetRankList.SendEventMessage();
    }

    /// <summary>
    /// 获取PvP对手
    /// </summary>
    public static void SendGetPVPEnemy()
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/getPvpEnemy/{UserDataManager.Instance.PlayerId}", OnSendPVPEnemy);
    }

    private static void OnSendPVPEnemy(string error, string jsonData)
    {
       OnEnemyInfoCallback(error,jsonData);
       UserEventDefine.UserGetPVPEnemy.SendEventMessage();
    }

    /// <summary>
    /// PVP开始
    /// </summary>
    public static void SendPVPStart(string enemyId)
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/pvpStart/{UserDataManager.Instance.PlayerId}/{enemyId}", OnSendPVPStart);
    }

    private static void OnSendPVPStart(string error, string jsonData)
    {
       OnPVPStartCallback(error,jsonData);
       UserEventDefine.UserPVPStart.SendEventMessage();
    }

    /// <summary>
    /// PVP结算
    /// </summary>
    public static void SendPVPComplete(string enemyId,bool isWin)
    {
        UnityWebRequestTool.Get($"http://{SettingDefine.GameServerUrl}/server-box/pvpComplete/{UserDataManager.Instance.PlayerId}/{enemyId}/{isWin}", OnSendPVPComplete);
    }

    private static void OnSendPVPComplete(string error, string jsonData)
    {
       OnCallback(error,jsonData);
       UserEventDefine.UserPVPComplete.SendEventMessage();
    }
    
    private static void OnPVPStartCallback(string error, string jsonData)
    {   
        UniLogger.Log($"OnPVPStartCallback jsonData = {jsonData}");
        if (!string.IsNullOrEmpty(error)) UniLogger.Error(error);
        var jPVPStartData = JsonMapper.ToObject<JPVPStartData>(jsonData);
        OnErrorCode(jPVPStartData.code);
        UniLogger.Log(jPVPStartData.ToStringFormat());
        UserDataManager.Instance.EnemyEquipDatas = jPVPStartData.data;
        UserDataManager.Instance.PvpCount -= 1;
        UserEventDefine.UserRefreshPVPCount.SendEventMessage();
    }

    private static void OnRankCallback(string error, string jsonData)
    {   
        UniLogger.Log($"OnRankCallback jsonData = {jsonData}");
        if (!string.IsNullOrEmpty(error)) UniLogger.Error(error);
        var jRankData = JsonMapper.ToObject<JRankData>(jsonData);
        OnErrorCode(jRankData.code);
        UniLogger.Log(jRankData.ToStringFormat());
        UserDataManager.Instance.RankInfo = jRankData.data;
    }

    private static void OnEnemyInfoCallback(string error, string jsonData)
    {   
        UniLogger.Log($"OnEnemyInfoCallback jsonData = {jsonData}");
        if (!string.IsNullOrEmpty(error)) UniLogger.Error(error);
        var jEnemyData = JsonMapper.ToObject<JEnemyData>(jsonData);
        OnErrorCode(jEnemyData.code);
        UniLogger.Log(jEnemyData.ToStringFormat());
        UserDataManager.Instance.EnemyInfos = jEnemyData.data;
    }

    private static void OnCallback(string error, string jsonData)
    {   
        UniLogger.Log($"jsonData = {jsonData}");
        if (!string.IsNullOrEmpty(error)) UniLogger.Error(error);
        var jUserData = JsonMapper.ToObject<JUserData>(jsonData);
        OnErrorCode(jUserData.code);
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
        OnErrorCode(jUserLoginData.code);
        SettingDefine.GameServerUrl = $"{jUserLoginData.data.gameServer.serverIp}:{jUserLoginData.data.gameServer.serverPort}";
        SendLoginGameServer(jUserLoginData.data.gameServer.serverId,jUserLoginData.data.user.openId,jUserLoginData.data.sessionkey,jUserLoginData.data.unionId);
    }

    private static void OnErrorCode(int code)
    {
         if(code != 0)
         {
            Debug.LogWarning(errorDic[code]);
         }
    }

    private static Dictionary<int,string> errorDic = new Dictionary<int, string>()
    {
       {1001,"用户不存在"},
       {1002,"宝箱正在升级中"},
       {1003,"宝箱已达最大等级"},
       {1004,"配置不存在"},
       {1005,"金币不足"},
       {1006,"宝箱数量不足"},
       {1007,"上一次开出的装备还没处理"},
       {1008,"登录错误"},
       {1009,"任务未完成"},
       {1010,"pvp次数不足"},
    };
}
