using UnityEngine;
using System.Collections;
using Hotfix.UI;
using WeChatWASM;
using System;

public class LoginStatus : IApplicationStatus 
{
    public WXRewardedVideoAd ad;
    private WXUserInfoButton infoButton;
    //Status的进入逻辑请放在这里
    public override async void OnEnterStatus()
    {
        var uiMain = await ApplicationStatusManager.s_currentAppStatus.OpenUI<UIMain>(new UIMainData(){Content = "Welcome you to Main Page!"});
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

            // 创建用户信息获取按钮，在底部1/3区域创建一个透明区域
            // 首次获取会弹出用户授权窗口, 可通过右上角-设置-权限管理用户的授权记录
            var canvasWith = (int)(systemInfo.screenWidth * systemInfo.pixelRatio);
            var canvasHeight = (int)(systemInfo.screenHeight * systemInfo.pixelRatio);
            var buttonHeight = (int)(canvasWith / 1080f * 300f);
            infoButton = WX.CreateUserInfoButton(0, canvasHeight - buttonHeight, canvasWith, buttonHeight, "zh_CN", false);
            infoButton.OnTap((userInfoButonRet) =>
            {
                Debug.Log(JsonUtility.ToJson(userInfoButonRet.userInfo));
                uiMain.SetContent($"nickName：{userInfoButonRet.userInfo.nickName}， avartar:{userInfoButonRet.userInfo.avatarUrl}");
            });
            Debug.Log("infoButton Created");
        });

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

    }

}