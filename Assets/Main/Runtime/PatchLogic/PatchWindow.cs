using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UniFramework.Event;
using Main.EventDefine;
using GameFramework.Resource;

public class PatchWindow : MonoBehaviour
{
    private class MessageBox
    {
        private GameObject _cloneObject;
        private TextMeshProUGUI _content;
        private Button _btnOK;
        private Action _clickOK;

        public bool ActiveSelf
        {
            get
            {
                return _cloneObject.activeSelf;
            }
        }

        public void Create(GameObject cloneObject)
        {
            _cloneObject = cloneObject;
            _content = cloneObject.transform.Find("txt_content").GetComponent<TextMeshProUGUI>();
            _btnOK = cloneObject.transform.Find("btn_ok").GetComponent<Button>();
            _btnOK.onClick.AddListener(OnClickYes);
        }

        public void Show(string content, Action clickOK)
        {
            _content.text = content;
            _clickOK = clickOK;
            _cloneObject.SetActive(true);
            _cloneObject.transform.SetAsLastSibling();
        }

        public void Hide()
        {
            _content.text = string.Empty;
            _clickOK = null;
            _cloneObject.SetActive(false);
        }

        private void OnClickYes()
        {
            _clickOK?.Invoke();
            Hide();
        }
    }

    private readonly EventGroup _eventGroup = new EventGroup();
    private readonly List<MessageBox> _msgBoxList = new List<MessageBox>();

    //UGUI相关
    private GameObject _messageBoxObj;
    private Slider _slider;
    private TextMeshProUGUI _tips;
    private TextMeshProUGUI _version;
    private static PatchWindow m_instance;

    public static PatchWindow Instance;

    private void Awake()
    {
        Instance = this;
        // DontDestroyOnLoad(this.gameObject);
        _slider = transform.Find("UIWindow/Slider").GetComponent<Slider>();
        _tips = transform.Find("UIWindow/Slider/txt_tips").GetComponent<TextMeshProUGUI>();
        _version = transform.Find("UIWindow/version").GetComponent<TextMeshProUGUI>();
        _tips.text = "游戏初始化中 !";
        _messageBoxObj = transform.Find("UIWindow/MessageBox").gameObject;
        _messageBoxObj.SetActive(false);
        
        _eventGroup.AddListener<PatchEventDefine.InitializeFailed>(OnHandleEventMessage);
        _eventGroup.AddListener<PatchEventDefine.PatchStatesChange>(OnHandleEventMessage);
        _eventGroup.AddListener<PatchEventDefine.FoundUpdateFiles>(OnHandleEventMessage);
        _eventGroup.AddListener<PatchEventDefine.DownloadProgressUpdate>(OnHandleEventMessage);
        _eventGroup.AddListener<PatchEventDefine.PackageVersionUpdateFailed>(OnHandleEventMessage);
        _eventGroup.AddListener<PatchEventDefine.PatchManifestUpdateFailed>(OnHandleEventMessage);
        _eventGroup.AddListener<PatchEventDefine.WebFileDownloadFailed>(OnHandleEventMessage);
    }

    private void OnDestroy()
    {
        _eventGroup.RemoveAllListener();
    }

    private void OnHandleEventMessage(IEventMessage message)
    {
        if (message is PatchEventDefine.InitializeFailed)
        {
            Action callback = () =>
            {
                UserEventDefine.UserTryInitalize.SendEventMessage();
            };
            ShowMessageBox($"初始化包失败 !", callback);
        }
        else if(message is PatchEventDefine.GameVersionInitOrRefresh)
        {
            SetVersion(ResourcesManager.Instance.GetPackageVersion());
        }
        else if (message is PatchEventDefine.PatchStatesChange)
        {
            var msg = message as PatchEventDefine.PatchStatesChange;
            _tips.text = msg.Tips;
            Debug.Log($"{ _tips.text}");
        }
        else if (message is PatchEventDefine.FoundUpdateFiles)
        {
            var msg = message as PatchEventDefine.FoundUpdateFiles;
            Action callback = () =>
            {
                UserEventDefine.UserBeginDownloadWebFiles.SendEventMessage();
            };
            float sizeMB = msg.TotalSizeBytes / 1048576f;
            sizeMB = Mathf.Clamp(sizeMB, 0.1f, float.MaxValue);
            string totalSizeMB = sizeMB.ToString("f1");
            ShowMessageBox($"发现更新补丁文件,总个数:{msg.TotalCount},总大小:{totalSizeMB}兆", callback);
        }
        else if (message is PatchEventDefine.DownloadProgressUpdate)
        {
            var msg = message as PatchEventDefine.DownloadProgressUpdate;
            _slider.value = (float)msg.CurrentDownloadCount / msg.TotalDownloadCount;
            string currentSizeMB = (msg.CurrentDownloadSizeBytes / 1048576f).ToString("f1");
            string totalSizeMB = (msg.TotalDownloadSizeBytes / 1048576f).ToString("f1");
            _tips.text = $"下载进度:{msg.CurrentDownloadCount}/{msg.TotalDownloadCount},{currentSizeMB}MB/{totalSizeMB}MB";
            Debug.LogWarning($"下载进度更新 {_tips.text}");
        }
        else if (message is PatchEventDefine.PackageVersionUpdateFailed)
        {
            Action callback = () =>
            {
                UserEventDefine.UserTryUpdatePackageVersion.SendEventMessage();
            };
            _tips.text = $"当前已经是最新版本!";
        }
        else if (message is PatchEventDefine.PatchManifestUpdateFailed)
        {
            Action callback = () =>
            {
                UserEventDefine.UserTryUpdatePatchManifest.SendEventMessage();
            };
            _tips.text = $"当前已经是最新版本!";
        }
        else if (message is PatchEventDefine.WebFileDownloadFailed)
        {
            var msg = message as PatchEventDefine.WebFileDownloadFailed;
            Action callback = () =>
            {
                UserEventDefine.UserTryDownloadWebFiles.SendEventMessage();
            };
            ShowMessageBox($"文件下载失败:{msg.FileName}", callback);
        }
        else
        {
            throw new System.NotImplementedException($"{message.GetType()}");
        }
    }

    /// <summary>
    /// 显示对话框
    /// </summary>
    /// <param name="content">内容</param>
    /// <param name="ok">ok回调</param>
    private void ShowMessageBox(string content,Action ok)
    {
        //尝试获取一个可用的对话框
        MessageBox msgBox = null;
        for(int i = 0;i<_msgBoxList.Count;i++)
        {
            var item = _msgBoxList[i];
            if(!item.ActiveSelf)
            {
                msgBox = item;
                break;
            }
        }

        //如果没有可用的对话框，则创建一个新的对话框
        if(msgBox == null)
        {
            msgBox = new MessageBox();
            var cloneObject = GameObject.Instantiate(_messageBoxObj,_messageBoxObj.transform.parent);
            msgBox.Create(cloneObject);
            _msgBoxList.Add(msgBox);
        }

        //显示对话框
        msgBox.Show(content,ok);
    }
    
    public void SetVersion(string version)
    {
        _version.text = version;
    }

    public void Release()
    {
        GameObject.Destroy(this.gameObject);
    }
}
