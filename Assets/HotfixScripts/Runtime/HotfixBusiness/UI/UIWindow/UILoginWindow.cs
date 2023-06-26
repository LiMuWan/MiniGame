using System.Collections;
using System.Collections.Generic;
using UniFramework.Window;
using UnityEngine.UI;
using Hotfix.EventDefine;
#if UNITY_WEBGL
using WeChatWASM;
#endif
using UniFramework.Singleton;
using UniFramework.Utility;

[WindowAttribute(100, false)]
public class UILoginWindow : UIWindow
{
    private Button btnLogin;
    private Button btnBattle;
    public override void OnCreate()
    {
        btnLogin = this.transform.Find("btnLogin").GetComponent<Button>();
        btnLogin.onClick.AddListener(() =>
        {
#if UNITY_EDITOR||UNITY_STANDALONE_WIN|| PLATFORM_STANDALONE_WIN
        //     LoginOption loginOption = new LoginOption();
        //     loginOption.success = (result) =>
        //    {
        //          //NetMessageHandler.SendLogin(result.code);
        //    };

        //     loginOption.fail = (result) =>
        //    {
        //          ShowToastOption showToastOption = new ShowToastOption()
        //          {
        //              title = result.errMsg,
        //              duration = 0.2f,
        //          };
        //          showToastOption.title = result.errMsg;
        //          WX.ShowToast(showToastOption);
        //      };
        //     WX.Login(loginOption);
        NetMessageHandler.SendLogin(null,null);
#else
            //编辑器运行测试
            // NetMessageHandler.SendLogin("1");
#endif
        });
#if UNITY_EDITOR||UNITY_STANDALONE_WIN|| PLATFORM_STANDALONE_WIN
        btnBattle = this.transform.Find("btnBattle").GetComponent<Button>();
        btnBattle.onClick.AddListener(() =>
        {
            SceneLoaderManager.LoadBattle(() =>
                {
               UIManager.UICanvas.SetActive(false);
           });
        });
#endif
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
