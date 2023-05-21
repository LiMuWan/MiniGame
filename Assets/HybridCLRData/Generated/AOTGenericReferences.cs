public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// Main.Runtime.dll
	// UniFramework.Singleton.dll
	// UniTask.dll
	// UnityEngine.CoreModule.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>
	// Cysharp.Threading.Tasks.UniTask<object>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<object>
	// System.Action<int>
	// System.Action<object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List<UniFramework.Window.UniWindow.WindowInfo>
	// System.Collections.Generic.List<float>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Comparison<object>
	// System.Func<object,Cysharp.Threading.Tasks.UniTask<object>>
	// System.Threading.Tasks.TaskCompletionSource<object>
	// UniFramework.Singleton.SingletonInstance<object>
	// }}

	public void RefMethods()
	{
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,cfg.Tables.<LoadAsync>d__25>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,cfg.Tables.<LoadAsync>d__25&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<cfg.Tables.<LoadAsync>d__25>(cfg.Tables.<LoadAsync>d__25&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,ConfigLoader.<LoadAllUserConfig>d__8>(Cysharp.Threading.Tasks.UniTask.Awaiter&,ConfigLoader.<LoadAllUserConfig>d__8&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,ConfigLoader.<ConfigByteLoader>d__9>(Cysharp.Threading.Tasks.UniTask.Awaiter&,ConfigLoader.<ConfigByteLoader>d__9&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<ConfigLoader.<LoadAllUserConfig>d__8>(ConfigLoader.<LoadAllUserConfig>d__8&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<ConfigLoader.<ConfigByteLoader>d__9>(ConfigLoader.<ConfigByteLoader>d__9&)
		// Cysharp.Threading.Tasks.UniTask.Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions.GetAwaiter<object>(object)
		// object GameFramework.Resource.ResourcesManager.LoadAsset<object>(string)
		// YooAsset.AssetOperationHandle GameFramework.Resource.ResourcesManager.LoadAssetSync<object>(string)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,ConfigLoader.<UniFramework-Singleton-ISingleton-OnCreate>d__5>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,ConfigLoader.<UniFramework-Singleton-ISingleton-OnCreate>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<ConfigLoader.<UniFramework-Singleton-ISingleton-OnCreate>d__5>(ConfigLoader.<UniFramework-Singleton-ISingleton-OnCreate>d__5&)
		// object UniFramework.Singleton.UniSingleton.CreateSingleton<object>(int)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.GameObject.GetComponentInChildren<object>()
		// object UnityEngine.GameObject.GetComponentInParent<object>()
		// object[] UnityEngine.GameObject.GetComponentsInChildren<object>(bool)
		// object UnityEngine.Object.FindObjectOfType<object>()
	}
}