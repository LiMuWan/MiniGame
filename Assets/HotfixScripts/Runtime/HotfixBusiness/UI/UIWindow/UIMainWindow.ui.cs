using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UniFramework.Window;
using UniFramework.Event;
using Hotfix.EventDefine;

//AUTO GenCode Don't edit it.
[WindowAttribute(100, false)]
public partial class UIMainWindow : UIWindow
{
    public class animal_slot_viewTableTemplate : TableItemTemplate
    {
        public animal_slot_viewTableTemplate() { }
        public Button animal_item;
        public Image quality_img;
        public Image icon_img;
        public TextMeshProUGUI name_text;

        public override void InitTemplate()
        {
            animal_item = FindChild<Button>("animal_item");
            quality_img = FindChild<Image>("quality_img");
            icon_img = FindChild<Image>("icon_img");
            name_text = FindChild<TextMeshProUGUI>("name_text");
        }
    }
    public class item_food_bagTableTemplate : TableItemTemplate
    {
        public item_food_bagTableTemplate() { }
        public Button food_item;
        public Image quality_img;
        public Image icon_img;
        public TextMeshProUGUI name_text;
        public override void InitTemplate()
        {
            food_item = FindChild<Button>("food_item");
        }
    }

    public class item_home_bagTableTemplate : TableItemTemplate
    {
        public item_home_bagTableTemplate() { }
        public Button bg;
        public Image quality_img;
        public Image icon_img;
        public TextMeshProUGUI name_text;
        public override void InitTemplate()
        {
            bg = FindChild<Button>("bg");
            quality_img = FindChild<Image>("quality_img");
            icon_img = FindChild<Image>("icon_img");
            name_text = FindChild<TextMeshProUGUI>("name_text");
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
    protected GridLayoutGroup food_bag;
    protected VerticalLayoutGroup home_bag;
    protected Button btn_task;
    protected Button btn_battle;
    protected Button btn_other;
    protected Button btn_rank;
    protected Button btn_breeding;
    protected Image btn_egg_level;
    protected TextMeshProUGUI egg_level;

    protected AutoUITableManager<AutoGenTableItem<animal_slot_viewTableTemplate, animal_slot_viewTableModel>> animal_slot_viewTableManager = new AutoUITableManager<AutoGenTableItem<animal_slot_viewTableTemplate, animal_slot_viewTableModel>>();
    protected AutoUITableManager<AutoGenTableItem<item_food_bagTableTemplate, item_food_bagTableModel>> item_food_bagTableManager = new AutoUITableManager<AutoGenTableItem<item_food_bagTableTemplate, item_food_bagTableModel>>();
    protected AutoUITableManager<AutoGenTableItem<item_home_bagTableTemplate, item_home_bagTableModel>> item_home_bagTableManager = new AutoUITableManager<AutoGenTableItem<item_home_bagTableTemplate, item_home_bagTableModel>>();

    private EventGroup eventGroup = new EventGroup();
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
        food_bag = FindChild<GridLayoutGroup>("food_bag");
        home_bag = FindChild<VerticalLayoutGroup>("home_bag");
        btn_task = FindChild<Button>("btn_task");
        btn_battle = FindChild<Button>("btn_battle");
        btn_other = FindChild<Button>("btn_other");
        btn_rank = FindChild<Button>("btn_rank");
        btn_breeding = FindChild<Button>("btn_ breeding");
        btn_egg_level = FindChild<Image>("btn_egg_level");
        egg_level = FindChild<TextMeshProUGUI>("egg_level");

        animal_slot_viewTableManager.InitFromLayout(animal_slot_view);
        item_food_bagTableManager.InitFromLayout(food_bag);
        item_home_bagTableManager.InitFromLayout(home_bag);
        animal_slot_viewTableManager.Count = 16;
        item_food_bagTableManager.Count = 4;
        item_home_bagTableManager.Count = 2;


    }

    public override void OnCreate()
    {
        base.OnCreate();
        InitEvent();
        InitUI();
    }

    public override void OnDestroy()
    {
        eventGroup.RemoveAllListener();
    }

    public override void OnRefresh()
    {

    }

    public override void OnUpdate()
    {

    }

    private void InitEvent()
    {
        eventGroup.AddListener<UserEventDefine.UserCoinFresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserLevelUp>(Handler);
        eventGroup.AddListener<UserEventDefine.UserExperienceRefresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserMaxExperienceRefresh>(Handler);
        eventGroup.AddListener<UserEventDefine.UserEggLevelUp>(Handler);
    }

    private void Handler(IEventMessage message)
    {
        if (message is UserEventDefine.UserCoinFresh ucf)
        {
            coin_text.text = $"{ucf.coin}";
        }
        else if (message is UserEventDefine.UserMaxExperienceRefresh ume)
        {
            user_level_slider.maxValue = ume.max_experience;
            user_level_slider.value = 0;
        }
        else if (message is UserEventDefine.UserExperienceRefresh ue)
        {
            user_level_slider.value = ue.experience;
        }
        if (message is UserEventDefine.UserLevelUp ulu)
        {
            level_text.text = $"{ulu.currentLevel}";
        }
    }

    private void InitUI()
    {
        SpriteLoaderUtils.GetSprite("head_icon", UserDataManager.Instance.HeadHostUrl, Application.streamingAssetsPath, OnLoadSprite);
        avator_name.text = UserDataManager.Instance.NickName;
        level_text.text = $"{UserDataManager.Instance.Level}";
        user_level_slider.maxValue = UserDataManager.Instance.MaxExperience;
        user_level_slider.value = UserDataManager.Instance.Experience;
        coin_text.text = $"{UserDataManager.Instance.Coin}";
        egg_level.text = $"Lv.{UserDataManager.Instance.EggLevel}";
    }

    private void OnLoadSprite(Sprite sprite)
    {
        head_icon.sprite = sprite;
    }
}