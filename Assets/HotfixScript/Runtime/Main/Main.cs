using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;

public class Main 
{
    public static void Run()
    {
       UniSingleton.CreateSingleton<GameManager>();
       GameManager.Instance.Run();
    }
}

