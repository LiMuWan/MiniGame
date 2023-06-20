using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Hotfix
{
    public class SettingDefine
    {
        //内网
        public const string WebServerUrl = "192.168.1.21:8001";
#if ONLINE
        //正式网
        public const string WebServerUrl = "192.168.1.21:8001";
#endif
        public static string GameServerUrl = default;
    }
}
