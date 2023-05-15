using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ApplicationManager : MonoBehaviour
{
    private static ApplicationManager instance;

    public static ApplicationManager Instance
    {
        get {
            if (instance == null)
            {
              instance =  FindObjectOfType<ApplicationManager>();
            }
            return ApplicationManager.instance; }
        set { ApplicationManager.instance = value; }
    }

    [HideInInspector]
    public string m_Status = "";

    [HideInInspector]
    public List<string> m_globalLogic;
    [HideInInspector]
    public string currentStatus;
    private void Awake()
    {
        instance = this;
    }

    /// <summary>
    /// 程序启动
    /// </summary>
    private void AppLaunch()
    {
        DontDestroyOnLoad(gameObject);
        Application.runInBackground = true;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        
        //管理类初始化
        Timer.Init();  //计时器启动
        //输入管理器启动
        //UIManager启动
        UIManager.Init();
        
    }

     #region 程序生命周期事件派发
    /// <summary>
    /// 框架模块初始化完成回调
    /// </summary>
    public static ApplicationVoidCallback s_OnApplicationModuleInitEnd = null;
    public static ApplicationVoidCallback s_OnApplicationQuit = null;
    public static ApplicationBoolCallback s_OnApplicationPause = null;
    public static ApplicationBoolCallback s_OnApplicationFocus = null;
    public static ApplicationVoidCallback s_OnApplicationUpdate = null;
    public static ApplicationVoidCallback s_OnApplicationFixedUpdate = null;
    public static ApplicationVoidCallback s_OnApplicationOnGUI = null;
    public static ApplicationVoidCallback s_OnApplicationOnDrawGizmos = null;
    public static ApplicationVoidCallback s_OnApplicationLateUpdate = null;
   

    void OnApplicationQuit()
    {
        if (s_OnApplicationQuit != null)
        {
            try
            {
                s_OnApplicationQuit();
            }
            catch (Exception e)
            {
                Debug.LogError(e.ToString());
            }
        }
    }

    /*
     * 强制暂停时，先 OnApplicationPause，后 OnApplicationFocus
     * 重新“启动”游戏时，先OnApplicationFocus，后 OnApplicationPause
     */
    void OnApplicationPause(bool pauseStatus)
    {
        if (s_OnApplicationPause != null)
        {
            try
            {
                s_OnApplicationPause(pauseStatus);
            }
            catch (Exception e)
            {
                Debug.LogError(e.ToString());
            }
        }
    }

    void OnApplicationFocus(bool focusStatus)
    {
        if (s_OnApplicationFocus != null)
        {
            try
            {
                s_OnApplicationFocus(focusStatus);
            }
            catch (Exception e)
            {
                Debug.LogError(e.ToString());
            }
        }
    }

    void Update()
    {
        if (s_OnApplicationUpdate != null)
            s_OnApplicationUpdate();
    }

    private void LateUpdate()
    {
        if (s_OnApplicationLateUpdate != null)
        {
            s_OnApplicationLateUpdate();
        }
    }

    private void FixedUpdate()
    {
        if (s_OnApplicationFixedUpdate != null)
            s_OnApplicationFixedUpdate();
    }

    void OnGUI()
    {
        if (s_OnApplicationOnGUI != null)
            s_OnApplicationOnGUI();
    }

    private void OnDrawGizmos()
    {
        if (s_OnApplicationOnDrawGizmos != null)
            s_OnApplicationOnDrawGizmos();
    }
    private void OnDestroy()
    {

    }

    #endregion

    #region 程序启动细节

    /// <summary>
    /// 初始化全局逻辑
    /// </summary>
    void InitGlobalLogic()
    {
        // for (int i = 0; i < m_globalLogic.Count; i++)
        // {
        //     GlobalLogicManager.InitLogic(m_globalLogic[i]);
        // }
    }
  
    #endregion
}

public delegate void ApplicationBoolCallback(bool status);
public delegate void ApplicationVoidCallback();

