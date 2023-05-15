using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;

public class Main 
{
    public static void Run()
    {
       //跳转到入口场景
       UniSingleton.CreateSingleton<GameManager>();
       GameManager.Instance.Run();
    }
}

