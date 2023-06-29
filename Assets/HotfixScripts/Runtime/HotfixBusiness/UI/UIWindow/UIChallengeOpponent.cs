using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;
using UniFramework.Utility;

//Donot use base.[MethodName] 
public partial class UIChallengeOpponent
{
    
    protected override void InitModel()
    {
        //To do: init
        RefreshPVPCount();
        btn_mask.onClick.AddListener(() =>
        {
            ApplicationStatusManager.s_currentAppStatus.CloseUI<UIChallengeOpponent>();
        });
    }

    protected override void OnSetVisible(bool visible) 
    { 
        
    }

    private void RefreshPVPCount()
    {
        count_text.text = $"{UserDataManager.Instance.PvpCount}/3";
    }
}