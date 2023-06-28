
namespace Arena
{
    class ItemData
    { 
        public string AvatorName{get;}
        public string HeadURL{get;}
        public int Level{get;}
        public int TitleLevel{get;}
        public string Title{get;}
        public int Score{get;}
        public string EnemyId{get;}

        public ItemData(string avator_name,string head_url,int level,int title_level,string title,int score,string enemyId)
        {
            AvatorName = avator_name;
            HeadURL = head_url;
            Level = level;
            TitleLevel = title_level;
            Title = title;
            Score = score;
            EnemyId = enemyId;
        }
    }
}
