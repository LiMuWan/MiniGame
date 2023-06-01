using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingDefine 
{
    //内网
    public const string WebServerUrl = "192.168.1.21:8082";
    #if ONLINE
    //正式网
    public const string WebServerUrl = "192.168.1.21:8082";
    #endif
}
