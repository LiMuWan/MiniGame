using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using FancyScrollView;
using GameFramework.Resource;
using TMPro;

namespace Rank
{
    class Cell : FancyCell<ItemData, Context>
    {
        [SerializeField] Animator animator = default;
        [SerializeField] Image rank_img = default;
        [SerializeField] Image head_icon = default;
        [SerializeField] TextMeshProUGUI avator_name = default;
        [SerializeField] TextMeshProUGUI level_text = default;
        [SerializeField] Button button = default;
        [SerializeField] TextMeshProUGUI title_level_text = default;
        [SerializeField] TextMeshProUGUI title_text = default;
        [SerializeField] TextMeshProUGUI reward_count_text = default;
        static class AnimatorHash
        {
            public static readonly int Scroll = Animator.StringToHash("scroll");
        }
        
        private List<string> rank_num_names = new List<string>(){"gd","sv","bz","other"};

        void Start()
        {
            button.onClick.AddListener(() => Context.OnCellClicked?.Invoke(Index));
        }

        public override void UpdateContent(ItemData itemData)
        {
            if(itemData.RankNum <= 3)
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(rank_num_names[itemData.RankNum - 1],(sprite)=>
                {
                   rank_img.sprite = sprite;
                });
            }
            else
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(rank_num_names[3], (sprite) =>
               {
                   rank_img.sprite = sprite;
               });
            }
            SpriteLoaderUtils.GetSprite($"head_icon_{itemData.RankNum}", itemData.HeadURL, Application.streamingAssetsPath, (sprite)=>{head_icon.sprite = sprite;});
            avator_name.text = itemData.AvatorName;
            level_text.text = $"lv.{itemData.Level}";
            // title_text.text = itemData.TitleLevel;//TODO
            title_level_text.text = itemData.TitleLevel.ToString();
            reward_count_text.text = itemData.Score.ToString();
            var selected = Context.SelectedIndex == Index;
        }

        public override void UpdatePosition(float position)
        {
            currentPosition = position;

            if (animator.isActiveAndEnabled)
            {
                animator.Play(AnimatorHash.Scroll, -1, position);
            }

            animator.speed = 0;
        }

        // GameObject が非アクティブになると Animator がリセットされてしまうため
        // 現在位置を保持しておいて OnEnable のタイミングで現在位置を再設定します
        float currentPosition = 0;

        void OnEnable() => UpdatePosition(currentPosition);
    }
}
