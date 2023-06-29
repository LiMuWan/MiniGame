using System.Collections.Generic;

//登录数据
public class JUser
{
    public string userId;
    public string openId;
    public int[] serverIdList;
    public int lastServerId;
}

public class JGameServer
{
    public int serverId;
    public string serverIp;
    public int serverPort;
    public int serverState;
}

public class LoginRes
{
    public JUser user;
    public string sessionkey;
    public string unionId;
    public JGameServer gameServer;
}

public class JUserLoginData
{
    public int code;
    public string message;

    public LoginRes data;
}

public class JUserData
{
    public int code;
    public string message;

    public JPlayerData data;
}

public class JRankData
{
    public int code;
    public string message;

    public JRankInfo data;
}

public class JEnemyData
{
    public int code;
    public string message;

    public List<JPlayerRankInfo> data;
}

public class JPVPStartData
{
    public int code;
    public string message;

    public List<JEquipData> data;
}

public class JPlayerData
{
    public string playerId;
    public string openId;
    public string playerName;
    public string headUrl;
    public string createTime;
    public int coin;
    public int boxLv;
    public int boxLvUpEndTime;
    public int lv;
    public int exp;
    public int boxNum;

    public JEquipDataList equipList;
    public JTask task;

    public int pvpScore;
    public int pvpCount;

}

public class JEquipDataList
{
    public JEquipData tempEquip;
    public JEquipData[] equipList;
}

public class JEquipData
{
    public int itemId;
    public int quality;
    public int lv;
    public int sex;
}

public class JTask
{
    public int taskId;
    public int targetNum;
    public int state;
}

//排行榜
public class JRankInfo
{
    public List<JPlayerRankInfo> rankInfoList;
    public long ownRank;
}

public class JPlayerRankInfo
{
    public string playerId;
    public string playerName;
    public string headUrl;
    public int lv;
    public int pvpScore;
}

public enum TaskStatus
{
    //未完成
    UnCompleted = 0,
    Completed = 1,//已完成
    ReceivedReward = 2,//已领奖
}

public enum EEquipGetStatus
{
    FirstGet, // 第一次获取
    RepeatedGet,//重复获取
}

public enum ECompareResult
{
    Equals = 0,
    LessThan = 1,
    MoreThan = 2,
}