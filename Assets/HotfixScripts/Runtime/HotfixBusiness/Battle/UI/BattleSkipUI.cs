using System.Collections;
using System.Collections.Generic;
using Hotfix.EventDefine;
using UnityEngine;
using UnityEngine.UI;
using UniFramework.Singleton;

public class BattleSkipUI : MonoBehaviour
{
    [SerializeField]
    private Button btn_skip;
    
    void Start()
    {
        this.gameObject.SetActive(false);
        btn_skip.onClick.AddListener(() =>
        {
            UserEventDefine.UserSkipBattle.SendEventMessage();
            this.gameObject.SetActive(false);
        });

        UniSingleton.Delay(5f,()=>{this.gameObject.SetActive(true);});
    }

    void OnDestroy()
    {
        btn_skip.onClick.RemoveAllListeners();
        btn_skip = null;
    }
}
