public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// LitJson.dll
	// Main.Runtime.dll
	// System.Core.dll
	// UniFramework.Event.dll
	// UniFramework.Singleton.dll
	// UnityEngine.CoreModule.dll
	// YooAsset.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// System.Action<UnityEngine.Quaternion>
	// System.Action<object>
	// System.Action<int>
	// System.Action<UnityEngine.Color>
	// System.Action<UnityEngine.Vector4>
	// System.Action<UnityEngine.Vector3>
	// System.Action<UnityEngine.Vector2>
	// System.Action<float>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<object,UnityEngine.SceneManagement.Scene>
	// System.Collections.Generic.HashSet<object>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.List<float>
	// System.Collections.Generic.List<UnityEngine.Vector2>
	// System.Collections.Generic.List<byte>
	// System.Collections.Generic.List<UniFramework.Window.UniWindow.WindowInfo>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.Queue<object>
	// System.Comparison<object>
	// System.Func<byte>
	// System.Func<System.ValueTuple<float,float>>
	// System.Func<int>
	// System.Func<float>
	// System.Func<int,object>
	// System.Func<object,object>
	// System.Func<object,float>
	// System.Func<object,int,byte>
	// System.Nullable<double>
	// System.Predicate<object>
	// System.Threading.Tasks.TaskCompletionSource<object>
	// System.Tuple<int,object>
	// System.ValueTuple<float,float>
	// UniFramework.Singleton.SingletonInstance<object>
	// UnityEngine.Events.UnityAction<float>
	// UnityEngine.Events.UnityEvent<float>
	// }}

	public void RefMethods()
	{
		// string Bright.Common.StringUtil.CollectionToString<int>(System.Collections.Generic.IEnumerable<int>)
		// YooAsset.AssetOperationHandle GameFramework.Resource.ResourcesManager.LoadAssetAsync<object>(string)
		// System.Void GameFramework.Resource.ResourcesManager.LoadAssetAsync<object>(string,System.Action<object>)
		// System.Void GameFramework.Resource.ResourcesManager.LoadSubAssetsAsync<object>(string,System.Action<object>)
		// object LitJson.JsonMapper.ToObject<object>(string)
		// object System.Activator.CreateInstance<object>()
		// object[] System.Array.Empty<object>()
		// System.Linq.IOrderedEnumerable<object> System.Linq.Enumerable.OrderByDescending<object,float>(System.Collections.Generic.IEnumerable<object>,System.Func<object,float>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Select<int,object>(System.Collections.Generic.IEnumerable<int>,System.Func<int,object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Take<object>(System.Collections.Generic.IEnumerable<object>,int)
		// System.Collections.Generic.List<object> System.Linq.Enumerable.ToList<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Void UniFramework.Event.EventGroup.AddListener<object>(System.Action<UniFramework.Event.IEventMessage>)
		// object UniFramework.Singleton.UniSingleton.CreateSingleton<object>(int)
		// object UnityEngine.Component.GetComponent<object>()
		// object[] UnityEngine.Component.GetComponentsInChildren<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.GameObject.GetComponentInChildren<object>()
		// object UnityEngine.GameObject.GetComponentInParent<object>()
		// object[] UnityEngine.GameObject.GetComponentsInChildren<object>(bool)
		// object UnityEngine.Object.FindObjectOfType<object>()
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform)
		// object UnityEngine.Object.Instantiate<object>(object)
		// YooAsset.AssetOperationHandle YooAsset.ResourcePackage.LoadAssetAsync<object>(string)
	}
}