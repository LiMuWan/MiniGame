using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;

//Donot use base.[MethodName] 
public partial class UIChallengeOpponent
{
    
    protected override void InitModel()
    {
        //To do: init
        count_text.text = $"{UserDataManager.Instance.PvpCount}/3";
        btn_mask.onClick.AddListener(() =>
        {
            ApplicationStatusManager.s_currentAppStatus.CloseUI<UIItemInfo>();
        });
    }

    protected override void OnSetVisible(bool visible) 
    { 
        
    }
}