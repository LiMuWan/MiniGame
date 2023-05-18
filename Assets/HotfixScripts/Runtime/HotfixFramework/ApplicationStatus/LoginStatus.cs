using UnityEngine;
using System.Collections;
using Hotfix.UI;

public class LoginStatus : IApplicationStatus 
{

    //Status的进入逻辑请放在这里
    public override async void OnEnterStatus()
    {
        await UIManager.Show<UIMain>(new UIMainData(){Content = "Welcome you to Main Page!"});
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