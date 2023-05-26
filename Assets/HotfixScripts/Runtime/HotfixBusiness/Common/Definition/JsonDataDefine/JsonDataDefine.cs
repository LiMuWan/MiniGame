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
    public string tempEquip;
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
