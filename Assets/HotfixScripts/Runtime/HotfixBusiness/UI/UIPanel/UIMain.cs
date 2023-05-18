using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Feif.UI;
using Feif.UIFramework;
using UnityEngine;
using TMPro;

namespace Hotfix.UI
{
    // 这个UI所需要的参数（数据）
    public class UIMainData : UIData
    {
        public string Content;
        public Action ConfirmAction;
        public Action CancelAction;
    }

    // 这是一个Window，不需要UIData则继承UIBase，需要UIData则继承UIComponent
    [UIPanel]
    public class UIMain : UIComponent<UIMainData>
    {
        [SerializeField] private TextMeshProUGUI txtContent;

        private UIWindowEffect effect;

        protected override Task OnCreate()
        {
            effect = GetComponent<UIWindowEffect>();
            return Task.CompletedTask;
        }

        protected override Task OnRefresh()
        {
            txtContent.text = Data.Content;
            return Task.CompletedTask;
        }

        protected override void OnShow()
        {
            // 播放打开Window动效
            effect.PlayOpen();
        }

        [UGUIButtonEvent]
        protected async void OnBtnConfirm()
        {
            Data.ConfirmAction?.Invoke();
            // 播放关闭Window动效
            await effect.PlayClose();
            await UIFrame.Hide(this);
        }

        [UGUIButtonEvent]
        protected async void OnBtnCancel()
        {
            Data.CancelAction?.Invoke();
            // 播放关闭Window动效
            await effect.PlayClose();
            await UIFrame.Hide(this);
        }

        public void SetContent(string content)
        {
            txtContent.text = content;
        }
    }
}