using System.Collections;
using System;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class SpriteLoaderUtils
{
    /// <summary>
    /// 获取图片，先从本地找，本地没有，从网络上下载
    /// </summary>
    /// <param name="file_full_name">文件全名，带后缀</param>
    /// <param name="url"></param>
    /// <returns></returns>
    public IEnumerator GetSprite(string file_full_name, string url,string readAndWritePath, Action<Sprite> callback)
    {
        //现在本地找，本地没有，再去下载
        string dirPath = Path.Combine(readAndWritePath, "DownloadPictures");
        if (!Directory.Exists(dirPath))
        {
            Directory.CreateDirectory(dirPath);
        }

        string filePath = Path.Combine(dirPath, file_full_name);
        if (File.Exists(filePath))
        {
            // 如果本地已经有下载好的图片，则直接加载
            byte[] data = File.ReadAllBytes(filePath);
            Texture2D texture = new Texture2D(2, 2);
            texture.LoadImage(data);
            Sprite sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));
            // 使用 sprite 进行显示
            callback?.Invoke(sprite);
        }
        else
        {
            // 如果本地没有下载好的图片，则从网络上下载
            UnityWebRequest request = UnityWebRequest.Get(url);
            yield return request.SendWebRequest();
            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(request.error);
            }
            else
            {
                // 下载成功，获取图片数据
                byte[] data = request.downloadHandler.data;

                // 将二进制数据转换成 Texture2D 对象
                Texture2D texture = new Texture2D(2, 2);
                texture.LoadImage(data);

                // 将 Texture2D 对象转换成 Sprite 对象
                Sprite sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));

                // 将下载的图片保存到本地文件夹中
                File.WriteAllBytes(filePath, data);

                // 使用 sprite 进行显示
                callback?.Invoke(sprite);
            }
        }
    }
}
