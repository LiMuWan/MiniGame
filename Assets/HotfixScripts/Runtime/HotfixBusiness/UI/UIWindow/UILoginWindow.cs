using System.Collections;
using System.Collections.Generic;
using UniFramework.Window;
using UnityEngine.UI;
using Hotfix.EventDefine;
using WeChatWASM;
using UniFramework.Singleton;

[WindowAttribute(100, false)]
public class UILoginWindow : UIWindow
{
    private Button btnLogin;
    public override void OnCreate()
    {
        btnLogin = this.transform.Find("btnLogin").GetComponent<Button>();
        btnLogin.onClick.AddListener(() =>
        {
#if !UNITY_EDITOR
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
#else
            //编辑器运行测试
            UniSingleton.CreateSingleton<UserDataManager>();
            UserEventDefine.UserLoginSuccess.SendEventMessage();
#endif
        });
    }

    public override void OnDestroy()
    {

    }

    public override void OnRefresh()
    {

    }

    public override void OnUpdate()
    {

    }
}
