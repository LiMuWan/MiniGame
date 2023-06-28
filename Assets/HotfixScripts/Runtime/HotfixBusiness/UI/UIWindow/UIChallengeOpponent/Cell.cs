using FancyScrollView;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Hotfix;

namespace Arena
{
    class Cell : FancyGridViewCell<JPlayerRankInfo, Context>
    {
        [SerializeField] Image head_icon = default;
        [SerializeField] TextMeshProUGUI avator_name = default;
        [SerializeField] TextMeshProUGUI level_text = default;
        [SerializeField] Button button = default;
        [SerializeField] TextMeshProUGUI reward_count_text = default;
        [SerializeField] TextMeshProUGUI coin_count_text = default;
        private JPlayerRankInfo itemData;
        public override void Initialize()
        {
            //button.onClick.AddListener(() => Context.OnCellClicked?.Invoke(Index));
            button.onClick.AddListener(()=>
            {
                UserDataManager.Instance.EnemyID = this.itemData.playerId;
                NetMessageHandler.SendPVPStart(this.itemData.playerId);
            });
        }

        public override void UpdateContent(JPlayerRankInfo itemData)
        {
            this.itemData = itemData;
            SpriteLoaderUtils.GetSprite($"head_icon_{LZString.CompressToBase64(itemData.playerId)}", LZString.DecompressFromBase64(itemData.headUrl), Application.streamingAssetsPath, (sprite)=>{head_icon.sprite = sprite;});
            avator_name.text = itemData.playerName;
            level_text.text = $"lv.{itemData.lv}";
            reward_count_text.text = itemData.pvpScore.ToString();
            var selected = Context.SelectedIndex == Index;
            coin_count_text.text = "8000";
        }

        protected override void UpdatePosition(float normalizedPosition, float localPosition)
        {
            base.UpdatePosition(normalizedPosition, localPosition);

            var wave = Mathf.Sin(normalizedPosition * Mathf.PI * 2) * 65;
            transform.localPosition += Vector3.right * wave;
        }
    }
}
