using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UniFramework.Window;

//AUTO GenCode Don't edit it.
[WindowAttribute(100, false)]
public partial class UIMainWindow : UIWindow
{
    public class animal_slot_viewTableTemplate : TableItemTemplate
    {
        public animal_slot_viewTableTemplate() { }
        public Image animal_slot;

        public override void InitTemplate()
        {
            animal_slot = FindChild<Image>("animal_slot");

        }
    }
    public class item_bagTableTemplate : TableItemTemplate
    {
        public item_bagTableTemplate() { }
        public Image animal_slot;

        public override void InitTemplate()
        {
            animal_slot = FindChild<Image>("animal_slot");
        }
    }

    protected Image head_icon;
    protected TextMeshProUGUI avator_name;
    protected TextMeshProUGUI level_title;
    protected TextMeshProUGUI level_text;
    protected TextMeshProUGUI coin_text;
    protected Button btn_buy_coin;
    protected Button btn_buy_diamand;
    protected TextMeshProUGUI user_level;
    protected Slider user_level_slider;
    protected GridLayoutGroup animal_slot_view;
    protected GridLayoutGroup item_bag;
    protected Button btn_task;
    protected Button btn_battle;
    protected Button btn_other;
    protected Button btn_rank;
    protected Button btn_breeding;
    protected Image btn_egg_level;
    protected TextMeshProUGUI egg_level;

    protected AutoUITableManager<AutoGenTableItem<animal_slot_viewTableTemplate, animal_slot_viewTableModel>> animal_slot_viewTableManager = new AutoUITableManager<AutoGenTableItem<animal_slot_viewTableTemplate, animal_slot_viewTableModel>>();
    protected AutoUITableManager<AutoGenTableItem<item_bagTableTemplate, item_bagTableModel>> item_bagTableManager = new AutoUITableManager<AutoGenTableItem<item_bagTableTemplate, item_bagTableModel>>();

    protected override void InitTemplate()
    {
        head_icon = FindChild<Image>("head_icon");
        avator_name = FindChild<TextMeshProUGUI>("avator_name");
        level_title = FindChild<TextMeshProUGUI>("level_title");
        level_text = FindChild<TextMeshProUGUI>("level_text");
        coin_text = FindChild<TextMeshProUGUI>("coin_text");
        btn_buy_coin = FindChild<Button>("btn_buy_coin");
        btn_buy_diamand = FindChild<Button>("btn_buy_diamand");
        user_level = FindChild<TextMeshProUGUI>("user_level");
        user_level_slider = FindChild<Slider>("user_level_slider");
        animal_slot_view = FindChild<GridLayoutGroup>("animal_slot_view");
        item_bag = FindChild<GridLayoutGroup>("item_bag");
        btn_task = FindChild<Button>("btn_task");
        btn_battle = FindChild<Button>("btn_battle");
        btn_other = FindChild<Button>("btn_other");
        btn_rank = FindChild<Button>("btn_rank");
        btn_breeding = FindChild<Button>("btn_ breeding");
        btn_egg_level = FindChild<Image>("btn_egg_level");
        egg_level = FindChild<TextMeshProUGUI>("egg_level");

        animal_slot_viewTableManager.InitFromLayout(animal_slot_view);
        item_bagTableManager.InitFromLayout(item_bag);

    }

    public override void OnCreate()
    {
        base.OnCreate();
    }

    public override void OnDestroy()
    {

    }

    public override void OnRefresh()
    {

    }

    public override void OnUpdate()
    {

    }
}