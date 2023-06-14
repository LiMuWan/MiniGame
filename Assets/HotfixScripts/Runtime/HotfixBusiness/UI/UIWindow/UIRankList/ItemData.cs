using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Rank
{
    public class ItemData
    {
        public int RankNum{ get; }
        public string AvatorName{get;}
        public string HeadURL{get;}
        public int Level{get;}
        public int TitleLevel{get;}
        public string Title{get;}
        public int Score{get;}

        public ItemData(int rank_num,string avator_name,string head_url,int level,int title_level,string title,int score)
        {
            RankNum = rank_num;
            AvatorName = avator_name;
            HeadURL = head_url;
            Level = level;
            TitleLevel = title_level;
            Title = title;
            Score = score;
        }
    }
}
