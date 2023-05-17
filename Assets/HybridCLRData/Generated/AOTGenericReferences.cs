public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// System.Core.dll
	// UniFramework.Singleton.dll
	// UnityEngine.CoreModule.dll
	// UnityEngine.JSONSerializeModule.dll
	// YooAsset.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// System.Action<byte>
	// System.Action<object>
	// System.Action<WeChatWASM.ReleaseResult>
	// System.Action<int>
	// System.Action<object,object>
	// System.Action<UnityEngine.Vector3,object>
	// System.Action<UnityEngine.Vector2,object>
	// System.Collections.Generic.Dictionary<object,byte>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<object,LitJson.PropertyMetadata>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,LitJson.ObjectMetadata>
	// System.Collections.Generic.Dictionary<object,System.ValueTuple<object,object>>
	// System.Collections.Generic.Dictionary<object,LitJson.ArrayMetadata>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,System.ValueTuple<object,object>>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,System.ValueTuple<object,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.ICollection<LitJson.PropertyMetadata>
	// System.Collections.Generic.IDictionary<object,LitJson.ArrayMetadata>
	// System.Collections.Generic.IDictionary<int,object>
	// System.Collections.Generic.IDictionary<object,LitJson.ObjectMetadata>
	// System.Collections.Generic.IDictionary<object,LitJson.PropertyMetadata>
	// System.Collections.Generic.IDictionary<object,object>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerable<LitJson.PropertyMetadata>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<LitJson.PropertyMetadata>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.IList<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.List<float>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List<LitJson.PropertyMetadata>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.Queue<object>
	// System.Collections.Generic.Stack<System.ValueTuple<object,object>>
	// System.Collections.Generic.Stack<int>
	// System.Collections.Generic.Stack<object>
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
		// object[] System.Array.Empty<object>()
		// object System.Linq.Enumerable.FirstOrDefault<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Select<object,object>(System.Collections.Generic.IEnumerable<object>,System.Func<object,object>)
		// object[] System.Linq.Enumerable.ToArray<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Where<object>(System.Collections.Generic.IEnumerable<object>,System.Func<object,bool>)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<ShowAsync>d__84>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<ShowAsync>d__84&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,Feif.UIFramework.UIFrame.<HideAsync>d__86>(System.Runtime.CompilerServices.TaskAwaiter<object>&,Feif.UIFramework.UIFrame.<HideAsync>d__86&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<DoRefresh>d__78>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<DoRefresh>d__78&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<HideAsync>d__86>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<HideAsync>d__86&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,Feif.UIFramework.UIFrame.<ShowAsync>d__85>(System.Runtime.CompilerServices.TaskAwaiter<object>&,Feif.UIFramework.UIFrame.<ShowAsync>d__85&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<ShowAsync>d__85>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<ShowAsync>d__85&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<Feif.UIFramework.UIFrame.<ShowAsync>d__84>(Feif.UIFramework.UIFrame.<ShowAsync>d__84&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<Feif.UIFramework.UIFrame.<HideAsync>d__86>(Feif.UIFramework.UIFrame.<HideAsync>d__86&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<Feif.UIFramework.UIFrame.<ShowAsync>d__85>(Feif.UIFramework.UIFrame.<ShowAsync>d__85&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Start<Feif.UIFramework.UIFrame.<DoRefresh>d__78>(Feif.UIFramework.UIFrame.<DoRefresh>d__78&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,Feif.UIFramework.UIFrame.<RequestInstance>d__76>(System.Runtime.CompilerServices.TaskAwaiter<object>&,Feif.UIFramework.UIFrame.<RequestInstance>d__76&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UIFramework.UIFrame.<InstantiateAsync>d__83>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UIFramework.UIFrame.<InstantiateAsync>d__83&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<Feif.UIFramework.UIFrame.<RequestInstance>d__76>(Feif.UIFramework.UIFrame.<RequestInstance>d__76&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<Feif.UIFramework.UIFrame.<InstantiateAsync>d__83>(Feif.UIFramework.UIFrame.<InstantiateAsync>d__83&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UI.UIConfirmBox_Demo2.<OnBtnConfirm>d__5>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UI.UIConfirmBox_Demo2.<OnBtnConfirm>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Feif.UI.UIConfirmBox_Demo2.<OnBtnCancel>d__6>(System.Runtime.CompilerServices.TaskAwaiter&,Feif.UI.UIConfirmBox_Demo2.<OnBtnCancel>d__6&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Feif.UI.UIConfirmBox_Demo2.<OnBtnConfirm>d__5>(Feif.UI.UIConfirmBox_Demo2.<OnBtnConfirm>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<Feif.UI.UIConfirmBox_Demo2.<OnBtnCancel>d__6>(Feif.UI.UIConfirmBox_Demo2.<OnBtnCancel>d__6&)
		// object System.Threading.Interlocked.CompareExchange<object>(object&,object,object)
		// System.Threading.Tasks.Task<object> System.Threading.Tasks.Task.FromResult<object>(object)
		// object UniFramework.Singleton.UniSingleton.CreateSingleton<object>(int)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.GameObject.GetComponentInParent<object>()
		// object[] UnityEngine.GameObject.GetComponents<object>()
		// WeChatWASM.WXUserInfo UnityEngine.JsonUtility.FromJson<WeChatWASM.WXUserInfo>(string)
		// object UnityEngine.JsonUtility.FromJson<object>(string)
		// object UnityEngine.Object.FindObjectOfType<object>()
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform)
		// object UnityEngine.Resources.Load<object>(string)
		// YooAsset.AssetOperationHandle YooAsset.YooAssets.LoadAssetAsync<object>(string)
	}
}