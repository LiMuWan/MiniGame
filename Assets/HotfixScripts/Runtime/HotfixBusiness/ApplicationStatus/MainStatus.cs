﻿using UnityEngine;
using System.Collections;

public class MainStatus : IApplicationStatus 
{

    //Status的进入逻辑请放在这里
    public override void OnEnterStatus()
    {
         ApplicationStatusManager.s_currentAppStatus.OpenUI<UIMainWindow>();
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