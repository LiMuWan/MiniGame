using System;

//登录数据
public class JUser
{
    public string userId;
    public string openId;
    public string headUrl;
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

public class JPlayerData
{
    public string playerId;
    public string openId;
    public string createTime;
    public int coin;
    public int boxLv;
    public int boxLvUpEndTime;
    public int lv;
    public int exp;
    public int boxNum;

    public JEquipDataList equipList;
    public JTask task;

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

public enum TaskStatus
{
    //未完成
    UnCompleted = 0,
    Completed = 1,//已完成
    ReceivedReward = 2,//已领奖
}