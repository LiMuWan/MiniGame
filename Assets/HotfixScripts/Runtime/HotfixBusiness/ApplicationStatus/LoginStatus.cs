using UnityEngine;
using System.Collections;
using WeChatWASM;
using System;
using UniFramework.Utility;
using Hotfix.EventDefine;
using UniFramework.Singleton;

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
            UniLogger.Log($"{systemInfo.screenWidth}:{systemInfo.screenHeight}, {systemInfo.windowWidth}:{systemInfo.windowHeight}, {systemInfo.pixelRatio}");

            // 预先创建广告实例
            UniLogger.Log("初始化成功！");
            ad = WX.CreateRewardedVideoAd(new WXCreateRewardedVideoAdParam()
            {
                adUnitId = "xxxxxxxx" //自己申请广告单元ID
            });
            ad.OnError((r) =>
            {
                UniLogger.Log("ad error:" + r.errMsg);
            });
            ad.OnClose((r) =>
            {
                UniLogger.Log("ad close:" + r.isEnded);
            });

            // 创建用户信息获取按钮，在屏幕1/3区域创建一个透明区域
            // 首次获取会弹出用户授权窗口, 可通过右上角-设置-权限管理用户的授权记录
            var canvasWith = (int)(systemInfo.screenWidth * systemInfo.pixelRatio);
            var canvasHeight = (int)(systemInfo.screenHeight * systemInfo.pixelRatio);
            var buttonHeight = (int)((canvasWith / 1080f) * 600);
            infoButton = WX.CreateUserInfoButton(0, canvasHeight / 2, canvasWith, buttonHeight, "zh_CN", false);//canvasHeight - buttonHeight
            infoButton.OnTap((userInfoButonRet) =>
            {
                UniLogger.Log(JsonUtility.ToJson(userInfoButonRet.userInfo));//192.168.1.21:8082
                //uiMain.SetContent($"nickName：{userInfoButonRet.userInfo.nickName}， avartar:{userInfoButonRet.userInfo.avatarUrl}");
                UniSingleton.CreateSingleton<UserDataManager>();
                UserDataManager.Instance.NickName = userInfoButonRet.userInfo.nickName;
                UserDataManager.Instance.HeadHostUrl = userInfoButonRet.userInfo.avatarUrl;

                LoginOption loginOption = new LoginOption();
                loginOption.success = (result) =>
                {
                    NetMessageHandler.SendLogin(result.code);
                };

                loginOption.fail = (result) =>
                {
                    ShowToastOption showToastOption = new ShowToastOption()
                    {
                        title = result.errMsg,
                        duration = 0.2f,
                    };
                    showToastOption.title = result.errMsg;
                    WX.ShowToast(showToastOption);
                };
                WX.Login(loginOption);
            });
            UniLogger.Log("infoButton Created");
        });
#endif
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
        //     UniLogger.Log($"Config Count = {ConfigLoader.Instance.Tables.TbItem.DataList.Count}");
        //     if (ConfigLoader.Instance.Tables.TbItem.DataList[0] != null)
        //     {
        //         UniLogger.Log($"Config Name = {ConfigLoader.Instance.Tables.TbItem.DataList[0].Name}");
        //     }
        // }
    }

}