using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;
using UniFramework.Utility;

//Donot use base.[MethodName] 
public partial class UIRankList
{
    
    protected override void InitModel()
    {
        var userData = UserDataManager.Instance;
        //To do: init
        myData.UpdateData((int)userData.RankInfo.ownRank+1,userData.PlayerId,userData.HeadHostUrl,userData.NickName,userData.Level,userData.PvpScore);
        btn_mask.onClick.AddListener(() =>
      {
          ApplicationStatusManager.s_currentAppStatus.CloseUI<UIRankList>();
      });
      btn_challenge.onClick.AddListener(() =>
      {
           UniLogger.Log("OnBtnBattle");
           NetMessageHandler.SendGetPVPEnemy();
      });
    }

    protected override void OnSetVisible(bool visible) 
    { 
        
    }
}