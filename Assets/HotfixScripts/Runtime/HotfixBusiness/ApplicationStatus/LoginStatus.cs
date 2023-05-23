using UnityEngine;
using System.Collections;
using WeChatWASM;
using System;

public class LoginStatus : IApplicationStatus 
{
    public WXRewardedVideoAd ad;
    private WXUserInfoButton infoButton;

    //Status的进入逻辑请放在这里
    public override void OnEnterStatus()
    {
        ApplicationStatusManager.s_currentAppStatus.OpenUI<UILoginWindow>();
#if !UNITY_EDITOR
        WX.InitSDK((code) =>
        {

            // 打印屏幕信息
            var systemInfo = WeChatWASM.WX.GetSystemInfoSync();
            Debug.Log($"{systemInfo.screenWidth}:{systemInfo.screenHeight}, {systemInfo.windowWidth}:{systemInfo.windowHeight}, {systemInfo.pixelRatio}");

            // 预先创建广告实例
            Debug.Log("初始化成功！");
            ad = WX.CreateRewardedVideoAd(new WXCreateRewardedVideoAdParam()
            {
                adUnitId = "xxxxxxxx" //自己申请广告单元ID
            });
            ad.OnError((r) =>
            {
                Debug.Log("ad error:" + r.errMsg);
            });
            ad.OnClose((r) =>
            {
                Debug.Log("ad close:" + r.isEnded);
            });

            // 创建用户信息获取按钮，在屏幕1/2区域创建一个透明区域
            // 首次获取会弹出用户授权窗口, 可通过右上角-设置-权限管理用户的授权记录
            var canvasWith = (int)(systemInfo.screenWidth * systemInfo.pixelRatio);
            var canvasHeight = (int)(systemInfo.screenHeight * systemInfo.pixelRatio);
            var buttonHeight = (int)((canvasWith / 1080f) * 300);
            infoButton = WX.CreateUserInfoButton(0, canvasHeight - buttonHeight, canvasWith, buttonHeight, "zh_CN", false);
            infoButton.OnTap((userInfoButonRet) =>
            {
                Debug.Log(JsonUtility.ToJson(userInfoButonRet.userInfo));
                //uiMain.SetContent($"nickName：{userInfoButonRet.userInfo.nickName}， avartar:{userInfoButonRet.userInfo.avatarUrl}");
                UserEventDefine.UserLoginSuccess.SendEventMessage();
            });
            Debug.Log("infoButton Created");
        });
#else
     ApplicationStatusManager.s_currentAppStatus.OpenUI<UILoginWindow>();
#endif
    }

    private void LoginSuccess(LoginSuccessCallbackResult result)
    {
        Debug.Log("WxLogin Success!!!");
    }

    //Status的退出逻辑请放在这里
    public override void OnExitStatus()
    {
     
    }

    //Update逻辑放在这里
    public override void OnUpdate()
    {
        // if (ConfigLoader.Instance.Tables.TbItem.DataList.Count > 0)
        // {
        //     Debug.Log($"Config Count = {ConfigLoader.Instance.Tables.TbItem.DataList.Count}");
        //     if (ConfigLoader.Instance.Tables.TbItem.DataList[0] != null)
        //     {
        //         Debug.Log($"Config Name = {ConfigLoader.Instance.Tables.TbItem.DataList[0].Name}");
        //     }
        // }
    }

}