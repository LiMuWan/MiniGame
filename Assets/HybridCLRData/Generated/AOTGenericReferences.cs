public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// Main.Runtime.dll
	// System.Core.dll
	// UniFramework.Singleton.dll
	// UniTask.dll
	// UnityEngine.CoreModule.dll
	// UnityEngine.JSONSerializeModule.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>
	// Cysharp.Threading.Tasks.UniTask<object>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<object>
	// System.Action<int>
	// System.Action<byte>
	// System.Action<WeChatWASM.ReleaseResult>
	// System.Action<object>
	// System.Action<UnityEngine.Vector2,object>
	// System.Action<object,object>
	// System.Action<UnityEngine.Vector3,object>
	// System.Collections.Generic.Dictionary<object,LitJson.ObjectMetadata>
	// System.Collections.Generic.Dictionary<object,LitJson.ArrayMetadata>
	// System.Collections.Generic.Dictionary<object,LitJson.PropertyMetadata>
	// System.Collections.Generic.Dictionary<object,byte>
	// System.Collections.Generic.Dictionary<object,System.ValueTuple<object,object>>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,System.ValueTuple<object,object>>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,System.ValueTuple<object,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.ICollection<LitJson.PropertyMetadata>
	// System.Collections.Generic.IDictionary<object,LitJson.PropertyMetadata>
	// System.Collections.Generic.IDictionary<object,object>
	// System.Collections.Generic.IDictionary<object,LitJson.ArrayMetadata>
	// System.Collections.Generic.IDictionary<int,object>
	// System.Collections.Generic.IDictionary<object,LitJson.ObjectMetadata>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerable<LitJson.PropertyMetadata>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IEnumerator<LitJson.PropertyMetadata>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IList<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List<LitJson.PropertyMetadata>
	// System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.List<float>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.Queue<object>
	// System.Collections.Generic.Stack<int>
	// System.Collections.Generic.Stack<object>
	// System.Collections.Generic.Stack<System.ValueTuple<object,object>>
	// System.Comparison<object>
	// System.Func<object,Cysharp.Threading.Tasks.UniTask<object>>
	// System.Func<object,byte>
	// System.Func<object,object>
	// System.IEquatable<object>
	// System.Predicate<object>
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>
	// System.Runtime.CompilerServices.TaskAwaiter<object>
	// System.Threading.Tasks.Task<object>
	// System.Threading.Tasks.TaskCompletionSource<object>
	// System.ValueTuple<object,object>
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
		// Cysharp.Threading.Tasks.UniTask<object> GameFramework.Resource.ResourcesManager.LoadAssetAsync<object>(string)
		// object[] System.Array.Empty<object>()
		// object System.Linq.Enumerable.FirstOrDefault<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Select<object,object>(System.Collections.Generic.IEnumerable<object>,System.Func<object,object>)
		// object[] System.Linq.Enumerable.ToArray<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Where<object>(System.Collections.Generic.IEnumerable<object>,System.Func<object,bool>)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,UIManager.<Init>d__5>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,UIManager.<Init>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UIManager.<Show>d__12>(System.Runtime.CompilerServices.TaskAwaiter&,UIManager.<Show>d__12&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UIManager.<Show>d__14>(System.Runtime.CompilerServices.TaskAwaiter&,UIManager.<Show>d__14&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<DoRefresh>d__78>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<DoRefresh>d__78&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<ShowAsync>d__84>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<ShowAsync>d__84&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,Feif.UIFramework.UIFrame.<ShowAsync>d__85>(System.Runtime.CompilerServices.TaskAwaiter<object>&,Feif.UIFramework.UIFrame.<ShowAsync>d__85&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<ShowAsync>d__85>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<ShowAsync>d__85&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,Feif.UIFramework.UIFrame.<HideAsync>d__86>(System.Runtime.CompilerServices.TaskAwaiter<object>&,Feif.UIFramework.UIFrame.<HideAsync>d__86&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<HideAsync>d__86>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<HideAsync>d__86&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<Feif.UIFramework.UIFrame.<ShowAsync>d__85>(Feif.UIFramework.UIFrame.<ShowAsync>d__85&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<Feif.UIFramework.UIFrame.<HideAsync>d__86>(Feif.UIFramework.UIFrame.<HideAsync>d__86&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<Feif.UIFramework.UIFrame.<DoRefresh>d__78>(Feif.UIFramework.UIFrame.<DoRefresh>d__78&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<Feif.UIFramework.UIFrame.<ShowAsync>d__84>(Feif.UIFramework.UIFrame.<ShowAsync>d__84&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UIManager.<Show>d__13<object>>(UIManager.<Show>d__13<object>&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UIManager.<Show>d__14>(UIManager.<Show>d__14&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UIManager.<Show>d__12>(UIManager.<Show>d__12&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<UIManager.<Init>d__5>(UIManager.<Init>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,Feif.UIFramework.UIFrame.<RequestInstance>d__76>(System.Runtime.CompilerServices.TaskAwaiter<object>&,Feif.UIFramework.UIFrame.<RequestInstance>d__76&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,UIManager.<OnAssetRequest>d__6>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,UIManager.<OnAssetRequest>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<InstantiateAsync>d__83>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<InstantiateAsync>d__83&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<Feif.UIFramework.UIFrame.<RequestInstance>d__76>(Feif.UIFramework.UIFrame.<RequestInstance>d__76&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<UIManager.<OnAssetRequest>d__6>(UIManager.<OnAssetRequest>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<Feif.UIFramework.UIFrame.<InstantiateAsync>d__83>(Feif.UIFramework.UIFrame.<InstantiateAsync>d__83&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,ConfigLoader.<UniFramework-Singleton-ISingleton-OnCreate>d__5>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,ConfigLoader.<UniFramework-Singleton-ISingleton-OnCreate>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UI.UIConfirmBox_Demo2.<OnBtnConfirm>d__5>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UI.UIConfirmBox_Demo2.<OnBtnConfirm>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Hotfix.UI.UIMain.<OnBtnCancel>d__6>(System.Runtime.CompilerServices.TaskAwaiter&,Hotfix.UI.UIMain.<OnBtnCancel>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Hotfix.UI.UIMain.<OnBtnConfirm>d__5>(System.Runtime.CompilerServices.TaskAwaiter&,Hotfix.UI.UIMain.<OnBtnConfirm>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,LoginStatus.<OnEnterStatus>d__0>(System.Runtime.CompilerServices.TaskAwaiter&,LoginStatus.<OnEnterStatus>d__0&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UI.UIConfirmBox_Demo2.<OnBtnCancel>d__6>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UI.UIConfirmBox_Demo2.<OnBtnCancel>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ApplicationManager.<AppLaunch>d__8>(System.Runtime.CompilerServices.TaskAwaiter&,ApplicationManager.<AppLaunch>d__8&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<ConfigLoader.<UniFramework-Singleton-ISingleton-OnCreate>d__5>(ConfigLoader.<UniFramework-Singleton-ISingleton-OnCreate>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<LoginStatus.<OnEnterStatus>d__0>(LoginStatus.<OnEnterStatus>d__0&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<ApplicationManager.<AppLaunch>d__8>(ApplicationManager.<AppLaunch>d__8&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Hotfix.UI.UIMain.<OnBtnCancel>d__6>(Hotfix.UI.UIMain.<OnBtnCancel>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Hotfix.UI.UIMain.<OnBtnConfirm>d__5>(Hotfix.UI.UIMain.<OnBtnConfirm>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Feif.UI.UIConfirmBox_Demo2.<OnBtnConfirm>d__5>(Feif.UI.UIConfirmBox_Demo2.<OnBtnConfirm>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Feif.UI.UIConfirmBox_Demo2.<OnBtnCancel>d__6>(Feif.UI.UIConfirmBox_Demo2.<OnBtnCancel>d__6&)
		// object System.Threading.Interlocked.CompareExchange<object>(object&,object,object)
		// object UniFramework.Singleton.UniSingleton.CreateSingleton<object>(int)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.GameObject.GetComponentInChildren<object>()
		// object UnityEngine.GameObject.GetComponentInParent<object>()
		// object[] UnityEngine.GameObject.GetComponents<object>()
		// WeChatWASM.WXUserInfo UnityEngine.JsonUtility.FromJson<WeChatWASM.WXUserInfo>(string)
		// object UnityEngine.JsonUtility.FromJson<object>(string)
		// object UnityEngine.Object.FindObjectOfType<object>()
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform)
		// object UnityEngine.Object.Instantiate<object>(object)
	}
}