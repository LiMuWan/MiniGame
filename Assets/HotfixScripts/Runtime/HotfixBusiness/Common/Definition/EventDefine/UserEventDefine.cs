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
        
        /// <summary>
        /// 用户开宝箱
        /// </summary>
        public class UserOpenTreasureBox:IEventMessage
        {
            public static void SendEventMessage()
            {
                var msg = new UserOpenTreasureBox();
                UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// 用户金币刷新
        /// </summary>
        public class UserCoinFresh:IEventMessage
        {
            public int coin;
            public static void SendEventMessage(int coin)
            {
                var msg = new UserCoinFresh();
                msg.coin = coin;
                UniEvent.SendMessage(msg);
            }
        }
        
        /// <summary>
        /// 用户升级事件
        /// </summary>
        public class UserLevelUp:IEventMessage
        {
            public int preLevel;
            public int currentLevel;

            public static void SendEventMessage(int preLevel,int currentLevel)
            {
                var msg = new UserLevelUp();
                msg.preLevel = preLevel;
                msg.currentLevel = currentLevel;
                UniEvent.SendMessage(msg);
            }
        }
        
        /// <summary>
        /// 用户蛋升级
        /// </summary>
        public class UserEggLevelUp:IEventMessage
        {
            public int preLevel;
            public int currentLevel;

            public static void SendEventMessage(int preLevel,int currentLevel)
            {
                var msg = new UserEggLevelUp();
                msg.preLevel = preLevel;
                msg.currentLevel = currentLevel;
                UniEvent.SendMessage(msg);
            }
        }
        
        /// <summary>
        /// 用户最大经验值刷新
        /// </summary>
        public class UserMaxExperienceRefresh:IEventMessage
        {
            public int max_experience;

            public static void SendEventMessage(int max_experience)
            {
                 var msg = new UserMaxExperienceRefresh();
                 msg.max_experience = max_experience;
                 UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// 用户经验值刷新
        /// </summary>
        public class UserExperienceRefresh:IEventMessage
        {
            public int experience;

            public static void SendEventMessage(int experience)
            {
                 var msg = new UserExperienceRefresh();
                 msg.experience = experience;
                 UniEvent.SendMessage(msg);
            }
        }
        
        /// <summary>
        /// 用户装备刷新
        /// </summary>
        public class UserEquipRefresh:IEventMessage
        {
            public static void SendEventMessage()
            {
                var msg = new UserEquipRefresh();
                UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// 用户蛋数量刷新
        /// </summary>
        public class UserEggNumRefresh:IEventMessage
        {
            public int egg_num;

            public static void SendEventMessage(int egg_num)
            {
                 var msg = new UserEggNumRefresh();
                 msg.egg_num = egg_num;
                 UniEvent.SendMessage(msg);
            }
        }
        
        /// <summary>
        /// 任务刷新
        /// </summary>
        public class TaskRefresh:IEventMessage
        {
            public static void SendEventMessage()
            {
                 var msg = new TaskRefresh();
                 UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// 跳过战斗
        /// </summary>
        public class UserSkipBattle:IEventMessage
        {
            public static void SendEventMessage()
            {
                 var msg = new UserSkipBattle();
                 UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// 获取PVP玩家列表
        /// </summary>
        public class UserGetPVPEnemy:IEventMessage
        {
            public static void SendEventMessage()
            {
                var msg = new UserGetPVPEnemy();
                UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// 获取PVP开始
        /// </summary>
        public class UserPVPStart:IEventMessage
        {
            public static void SendEventMessage()
            {
                var msg = new UserPVPStart();
                UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// PVP结算
        /// </summary>
        public class UserPVPComplete:IEventMessage
        {
            public static void SendEventMessage()
            {
                var msg = new UserPVPComplete();
                UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// 获取排行榜列表
        /// </summary>
        public class UserGetRankList:IEventMessage
        {
            public static void SendEventMessage()
            {
                var msg = new UserGetRankList();
                UniEvent.SendMessage(msg);
            }
        }

        /// <summary>
        /// s刷新竞技场挑战次数
        /// </summary>
        public class UserRefreshPVPCount:IEventMessage
        {
            public static void SendEventMessage()
            {
                var msg = new UserRefreshPVPCount();
                UniEvent.SendMessage(msg);
            }
        }
    }
}
