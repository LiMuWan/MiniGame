using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Event;

namespace Hotfix.EventDefine
{
    public class UserEventDefine : IEventMessage
    {
          /// <summary>
        /// 用户尝试再次初始化资源包
        /// </summary>
        public class UserLoginSuccess : IEventMessage
        {
            public static void SendEventMessage()
            {
                var msg = new UserLoginSuccess();
                UniEvent.SendMessage(msg);
            }
        }
    }
}
