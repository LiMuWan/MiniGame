using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using FancyScrollView;
using GameFramework.Resource;
using TMPro;
using Hotfix;

namespace Rank
{
    class Cell : FancyScrollRectCell<JPlayerRankInfo, Context>
    {
        [SerializeField] Animator animator = default;
        [SerializeField] Image rank_img = default;
        [SerializeField] Image head_icon = default;
        [SerializeField] TextMeshProUGUI avator_name = default;
        [SerializeField] TextMeshProUGUI level_text = default;
        [SerializeField] Button button;
        [SerializeField] TextMeshProUGUI title_level_text = default;
        [SerializeField] TextMeshProUGUI title_text = default;
        [SerializeField] TextMeshProUGUI reward_count_text = default;
        
        private List<string> rank_num_names = new List<string>(){"gd","sv","bz","other"};

        void Start()
        {
            // button.onClick.AddListener(() => Context.OnCellClicked?.Invoke(Index));
        }
        
        public void UpdateData(int rankNum,string playerId,string headUrl,string playerName,int lv,int pvpScore)
        {
            if (rankNum <= 3)
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(rank_num_names[rankNum - 1], (sprite) =>
                {
                    rank_img.sprite = sprite;
                    rank_img.SetNativeSize();
                });
            }
            else
            {
                ResourcesManager.Instance.LoadSubAssetsAsync<Sprite>(rank_num_names[3], (sprite) =>
               {
                   rank_img.sprite = sprite;
                   rank_img.SetNativeSize();
               });
            }
            SpriteLoaderUtils.GetSprite($"head_icon_{LZString.CompressToBase64(playerId)}", LZString.DecompressFromBase64(headUrl), Application.streamingAssetsPath, (sprite) => { head_icon.sprite = sprite; });
            avator_name.text = playerName;
            level_text.text = $"lv.{lv}";
            // title_text.text = itemData.TitleLevel;//TODO
            // title_level_text.text = itemData.TitleLevel.ToString();
            reward_count_text.text = pvpScore.ToString();
        }

        public override void UpdateContent(JPlayerRankInfo itemData)
        {
            var rankNum = Index + 1;
            UpdateData(rankNum,itemData.playerId,itemData.headUrl,itemData.playerName,itemData.lv,itemData.pvpScore);
            var selected = Context.SelectedIndex == Index;
        }

        protected override void UpdatePosition(float normalizedPosition, float localPosition)
        {
            base.UpdatePosition(normalizedPosition, localPosition);

            // var wave = Mathf.Sin(normalizedPosition * Mathf.PI * 2) * 65;
            // transform.localPosition += Vector3.right * wave;
        }
    }
}
