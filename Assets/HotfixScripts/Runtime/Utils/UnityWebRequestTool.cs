﻿using System;
using System.Collections;
using System.Collections.Generic;
using UniFramework.Singleton;
using UniFramework.Utility;
using UnityEngine;
using UnityEngine.Networking;

public class UnityWebRequestTool 
{
    /// <summary>
    /// Get
    /// </summary>
    /// <param name="uri">不加端口时默认80端口 如：http://192.168.1.185:8181 或http://192.168.1.185</param>
    /// <param name="callBack">string：error， Dictionary<string,string> 返回的数据</param>
    public static void Get(string uri,CallBack<string, Dictionary<string,string>> callBack)
    {
        UniSingleton.StartCoroutine(AsyGet(uri, callBack));
    }

    /// <summary>
    /// Get
    /// </summary>
    /// <param name="uri"></param>
    /// <param name="callBack">string：error， string  返回的数据</param>
    public static void Get(string uri, CallBack<string, string> callBack)
    {
        UniSingleton.StartCoroutine(AsyGet(uri, callBack));
    }

    static IEnumerator AsyGet(string uri, CallBack<string,string> callBack)
    {
        UnityWebRequest webRequest = UnityWebRequest.Get(uri);
        webRequest.method = UnityWebRequest.kHttpVerbGET;
        webRequest.timeout = 15;
        //webRequest.chunkedTransfer = false;
        //webRequest.redirectLimit = 0;
        //webRequest.useHttpContinue = false;
        yield return webRequest.SendWebRequest();
        //异常处理，很多博文用了error!=null这是错误的，请看下文其他属性部分
        string error = null;
        if (webRequest.result == UnityWebRequest.Result.ProtocolError || webRequest.result == UnityWebRequest.Result.ConnectionError)
            error = webRequest.error;

        if (callBack != null)
        {
            callBack(error, webRequest.downloadHandler.text);
        }

    }
    static  IEnumerator AsyGet(string uri, CallBack<string, Dictionary<string, string>> callBack)
    {
        UnityWebRequest webRequest = UnityWebRequest.Get(uri);
        webRequest.method = UnityWebRequest.kHttpVerbGET;
        webRequest.timeout = 15;
        //webRequest.chunkedTransfer = false;
        //webRequest.redirectLimit = 0;
        //webRequest.useHttpContinue = false;
        yield return webRequest.SendWebRequest();
        //异常处理，很多博文用了error!=null这是错误的，请看下文其他属性部分
        string error = null;
        if (webRequest.result == UnityWebRequest.Result.ProtocolError || webRequest.result == UnityWebRequest.Result.ConnectionError)
           error =webRequest.error;

        if (callBack != null)
        {
            callBack(error, ParseString(webRequest.downloadHandler.text));
        }

    }

    private static Dictionary<string,string> ParseString(string ss)
    {
        Dictionary<string, string> map = new Dictionary<string, string>();
        if (string.IsNullOrEmpty(ss))
        {
            return map;
        }
        try
        {
            string[] tempStr = ss.Split('&');
            if (tempStr.Length > 0)
            {
                for (int i = 0; i < tempStr.Length; i++)
                {
                    string[] pare = tempStr[i].Split('=');
                    map.Add(pare[0], pare[1]);
                }
            }
        }
        catch (Exception e)
        {
            UniLogger.Error(e.ToString());
        }
        return map;
    } 
    /// <summary>
    /// Post
    /// </summary>
    /// <param name="uri"></param>
    /// <param name="data">发送的数据</param>
    /// <param name="callBack"></param>
    public static void Post(string uri,Dictionary<string,string> data, CallBack<string, Dictionary<string, string>> callBack)
    {
        UniSingleton.StartCoroutine(AsyPost(uri,data, callBack));
    }
    static IEnumerator AsyPost(string uri, Dictionary<string, string> data, CallBack<string, Dictionary<string, string>> callBack)
    {
        UniLogger.Log("Send Http Post ->" + uri);
        WWWForm form = new WWWForm();
        //键值对
        if (data != null)
        {
            foreach (var item in data)
            {
                form.AddField(item.Key, item.Value);
            }
        }

        UnityWebRequest webRequest = UnityWebRequest.Post(uri, form);
        webRequest.timeout = 15;
        webRequest.method = UnityWebRequest.kHttpVerbPOST;
        yield return webRequest.SendWebRequest();
        //异常处理，很多博文用了error!=null这是错误的，请看下文其他属性部分
        string error = null;
        if (webRequest.result == UnityWebRequest.Result.ProtocolError || webRequest.result == UnityWebRequest.Result.ConnectionError)
        {
            error = webRequest.error;
            UniLogger.Error(error);
        }

        if (callBack != null)
        {
            callBack(error, ParseString(webRequest.downloadHandler.text));
        }
    }
}
