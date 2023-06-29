using TMPro;
using UnityEngine.UI;
using UniFramework.Window;
using Arena;
using EasingCore;
using UniFramework.Event;
using Hotfix.EventDefine;

//AUTO GenCode Don't edit it.
[WindowAttribute(100, false)]
public partial class UIChallengeOpponent : UIWindow
{
    private GridView gridView;
    private Button btn_add;
    private Button btn_refresh;
    private TextMeshProUGUI count_text;
    private Button btn_mask;

    private EventGroup eventGroup = new EventGroup();

    protected override void InitTemplate()
    {
        gridView = FindChild<GridView>("Grid View");
        btn_add = FindChild<Button>("btn_add");
        btn_refresh = FindChild<Button>("btn_refresh");
        count_text = FindChild<TextMeshProUGUI>("challenge_count_text");
        btn_mask = FindChild<Button>("btn_mask");
    }

    public override void OnCreate()
    {
        base.OnCreate();
        GenerateCells(8);
        gridView.OnCellClicked(OnSelctHandler);
        eventGroup.AddListener<UserEventDefine.UserRefreshPVPCount>(Handler);
    }

    private void Handler(IEventMessage message)
    {
        if(message is UserEventDefine.UserRefreshPVPCount)
        {
           RefreshPVPCount();
        }
    }

    private void SelectCell()
    {
        if (gridView.DataCount == 0)
        {
            return;
        }
        gridView.UpdateSelection(0);
        gridView.ScrollTo(0, 0.4f, Ease.InOutQuint, Alignment.Middle);
    }

    private void GenerateCells(int dataCount)
    {
        gridView.UpdateContents(UserDataManager.Instance.EnemyInfos);
        SelectCell();
    }

    private void OnSelctHandler(int index)
    {
       //TODO
       //select.UpdateContent();
    }

    public override void OnDestroy()
    {
        btn_mask.onClick.RemoveAllListeners();
        eventGroup.RemoveAllListener();
    }

    public override void OnRefresh()
    {
       
    }

    public override void OnUpdate()
    {
        
    }
}