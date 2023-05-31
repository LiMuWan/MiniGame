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
using GameFramework.Resource;

//AUTO GenCode Don't edit it.
[WindowAttribute(100, false)]
public partial class UIMainWindow : UIWindow
{
    public class item_animal_bagTableTemplate : TableItemTemplate
    {
        public item_animal_bagTableTemplate() { }
        public Button animal_item;
        public RawImage quality_img;
        public RawImage icon_img;
        public TextMeshProUGUI lv_text;

        private ItemData animalData;

        public override void InitTemplate()
        {
            animal_item = FindChild<Button>("animal_item");
            quality_img = FindChild<RawImage>("quality_img");
            icon_img = FindChild<RawImage>("icon_img");
            lv_text = FindChild<TextMeshProUGUI>("lv_text");
            //打开装备详情
            animal_item.onClick.AddListener(() => { ApplicationStatusManager.s_currentAppStatus.OpenUI<UIItemInfo>((ui) => { ui.ShowItemInfo(this.animalData,null); }); });
        }

        public void RefreshUI(ItemData animalData)
        {
            this.animalData = animalData;
            if (animalData.ItemId == 0)
            {
                quality_img.gameObject.SetActive(false);
                lv_text.gameObject.SetActive(false);
            }
            else
            {
                quality_img.gameObject.SetActive(true);
                lv_text.gameObject.SetActive(true);
                lv_text.text = animalData.Level.ToString();
                var quality_icon = ConfigLoader.Instance.Tables.ItemQuality.Get(animalData.Quality).Icon;
                var item_icon = ConfigLoader.Instance.Tables.Item.Get(animalData.ItemId).Icon;
                ResourcesManager.Instance.LoadAssetAsync<Texture>(quality_icon, (texture) => { quality_img.texture = texture; });
                ResourcesManager.Instance.LoadAssetAsync<Texture>(item_icon, (texture) => { icon_img.texture = texture; });
            }
        }
    }
    public class item_food_bagTableTemplate : TableItemTemplate
    {
        public item_food_bagTableTemplate() { }
        public Button food_item;
        public RawImage quality_img;
        public RawImage icon_img;
        public TextMeshProUGUI lv_text;
        public override void InitTemplate()
        {
            food_item = FindChild<Button>("food_item");
            quality_img = FindChild<RawImage>("quality_img");
            icon_img = FindChild<RawImage>("icon_img");
            lv_text = FindChild<TextMeshProUGUI>("lv_text");
        }

        public void RefreshUI(ItemData foodData)
        {
            if (foodData.ItemId == 0)
            {
                quality_img.gameObject.SetActive(false);
                lv_text.gameObject.SetActive(false);
            }
            else
            {
                quality_img.gameObject.SetActive(true);
                lv_text.gameObject.SetActive(true);
                lv_text.text = foodData.Level.ToString();
                var quality_icon = ConfigLoader.Instance.Tables.ItemQuality.Get(foodData.Quality).Icon;
                var item_icon = ConfigLoader.Instance.Tables.Item.Get(foodData.ItemId).Icon;
                ResourcesManager.Instance.LoadAssetAsync<Texture>(quality_icon, (texture) => { quality_img.texture = texture; });
                ResourcesManager.Instance.LoadAssetAsync<Texture>(item_icon, (texture) => { icon_img.texture = texture; });
            }
        }
    }

    public class item_home_bagTableTemplate : TableItemTemplate
    {
        public item_home_bagTableTemplate() { }
        public Button bg;
        public RawImage quality_img;
        public RawImage icon_img;
        public TextMeshProUGUI lv_text;
        public override void InitTemplate()
        {
            bg = FindChild<Button>("bg");
            quality_img = FindChild<RawImage>("quality_img");
            icon_img = FindChild<RawImage>("icon_img");
            lv_text = FindChild<TextMeshProUGUI>("lv_text");
        }

        public void RefreshUI(ItemData homeData)
        {
            if (homeData.ItemId == 0)
            {
                quality_img.gameObject.SetActive(false);
                lv_text.gameObject.SetActive(false);
            }
            else
            {
                quality_img.gameObject.SetActive(true);
                lv_text.gameObject.SetActive(true);
                lv_text.text = homeData.Level.ToString();
                var quality_icon = ConfigLoader.Instance.Tables.ItemQuality.Get(homeData.Quality).Icon;
                var item_icon = ConfigLoader.Instance.Tables.Item.Get(homeData.ItemId).Icon;
                ResourcesManager.Instance.LoadAssetAsync<Texture>(quality_icon, (texture) => { quality_img.texture = texture; });
                ResourcesManager.Instance.LoadAssetAsync<Texture>(item_icon, (texture) => { icon_img.texture = texture; });
            }
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
    protected GridLayoutGroup animal_bag;
    protected GridLayoutGroup food_bag;
    protected VerticalLayoutGroup home_bag;
    protected Button btn_egg;
    protected Button btn_task;
    protected Button btn_battle;
    protected Button btn_other;
    protected Button btn_rank;
    protected Button btn_breeding;
    protected Image btn_egg_level;
    protected TextMeshProUGUI egg_level;

    protected AutoUITableManager<AutoGenTableItem<item_animal_bagTableTemplate, item_animal_bagTableModel>> item_animal_bagTableManager = new AutoUITableManager<AutoGenTableItem<item_animal_bagTableTemplate, item_animal_bagTableModel>>();
    protected AutoUITableManager<AutoGenTableItem<item_food_bagTableTemplate, item_food_bagTableModel>> item_food_bagTableManager = new AutoUITableManager<AutoGenTableItem<item_food_bagTableTemplate, item_food_bagTableModel>>();
    protected AutoUITableManager<AutoGenTableItem<item_home_bagTableTemplate, item_home_bagTableModel>> item_home_bagTableManager = new AutoUITableManager<AutoGenTableItem<item_home_bagTableTemplate, item_home_bagTableModel>>();
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
        animal_bag = FindChild<GridLayoutGroup>("animal_bag");
        food_bag = FindChild<GridLayoutGroup>("food_bag");
        home_bag = FindChild<VerticalLayoutGroup>("home_bag");
        btn_egg = FindChild<Button>("btn_egg");
        btn_task = FindChild<Button>("btn_task");
        btn_battle = FindChild<Button>("btn_battle");
        btn_other = FindChild<Button>("btn_other");
        btn_rank = FindChild<Button>("btn_rank");
        btn_breeding = FindChild<Button>("btn_ breeding");
        btn_egg_level = FindChild<Image>("btn_egg_level");
        egg_level = FindChild<TextMeshProUGUI>("egg_level");

        item_animal_bagTableManager.InitFromLayout(animal_bag);
        item_food_bagTableManager.InitFromLayout(food_bag);
        item_home_bagTableManager.InitFromLayout(home_bag);
        item_animal_bagTableManager.Count = 16;
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