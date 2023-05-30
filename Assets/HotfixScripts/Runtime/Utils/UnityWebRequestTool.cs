using System.Collections;
using UniFramework.Singleton;
using UniFramework.Utility;
using UnityEngine.Networking;

[SettingConfig(Key = "TestWebServerUrl",Value = "192.168.1.21:8082",Label = "测试服网址：")]
public class UnityWebRequestTool 
{
    /// <summary>
    /// Get
    /// </summary>
    /// <param name="uri">不加端口时默认80端口 如：http://192.168.1.185:8181 或http://192.168.1.185</param>
    /// <param name="callBack">string：error， Dictionary<string,string> 返回的数据</param>
    public static void Get(string uri,CallBack<string, string> callBack)
    {
        UniSingleton.StartCoroutine(AsyGetCo(uri, callBack));
    }

    static IEnumerator AsyGetCo(string uri, CallBack<string,string> callBack)
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

        callBack?.Invoke(error, webRequest.downloadHandler.text);
        UniSingleton.StopCoroutine(AsyGetCo(uri,callBack));
    }

    /// <summary>
    /// Post
    /// </summary>
    /// <param name="uri"></param>
    /// <param name="data">发送的数据</param>
    /// <param name="callBack"></param>
    public static void Post(string uri,string data, CallBack<string, string> callBack)
    {
        UniSingleton.StartCoroutine(AsyPostCo(uri,data, callBack));
    }

    static IEnumerator AsyPostCo(string uri, string data, CallBack<string, string> callBack)
    {
        UniLogger.Log("Send Http Post ->" + uri);
        UnityWebRequest webRequest = UnityWebRequest.Post(uri, data);
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

        callBack?.Invoke(error, webRequest.downloadHandler.text);
        UniSingleton.StopCoroutine(AsyPostCo(uri,data,callBack));
    }
}
