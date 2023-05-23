using System.Collections;
using System.Collections.Generic;
using UniFramework.Window;
using UnityEngine.UI;
using Hotfix.EventDefine;

[WindowAttribute(100, false)]
public class UILoginWindow : UIWindow
{
    private Button btnLogin;
    public override void OnCreate()
    {
       btnLogin = this.transform.Find("btnLogin").GetComponent<Button>();
       btnLogin.onClick.AddListener(()=>
       {
#if UNITY_EDITOR
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
