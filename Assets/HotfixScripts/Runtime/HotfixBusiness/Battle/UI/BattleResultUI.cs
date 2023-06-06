using UnityEngine;
using UnityEngine.UI;

public class BattleResultUI : MonoBehaviour
{
    [SerializeField]
    private GameObject winObj;
    [SerializeField]
    private GameObject lostObj;
    [SerializeField]
    private Button btn_Bg;

    private void Awake()
    {
        Init();
    } 

    private void Start()
    {
        btn_Bg.onClick.AddListener(()=>
        {
            //到主场景
        });
    }

    private void OnDestroy() 
    {
        btn_Bg.onClick.RemoveAllListeners();
    }

    private void Init()
    {   
        this.gameObject.SetActive(false);
        winObj.SetActive(false);
        lostObj.SetActive(false);
    }

    public void ShowResult(bool isWin)
    {
        if (isWin)
        {
            winObj.SetActive(true);
        }
        else
        {
            lostObj.SetActive(true);
        }
        this.gameObject.SetActive(true);
    }
}
