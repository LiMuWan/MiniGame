public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// Main.Runtime.dll
	// UniFramework.Event.dll
	// UniFramework.Singleton.dll
	// UnityEngine.CoreModule.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// System.Action<object>
	// System.Action<int>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List<UniFramework.Window.UniWindow.WindowInfo>
	// System.Collections.Generic.List<float>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Comparison<object>
	// System.Func<object,object>
	// System.Nullable<long>
	// System.Threading.Tasks.TaskCompletionSource<object>
	// UniFramework.Singleton.SingletonInstance<object>
	// }}

	public void RefMethods()
	{
		// string Bright.Common.StringUtil.CollectionToString<object>(System.Collections.Generic.IEnumerable<object>)
		// string Bright.Common.StringUtil.CollectionToString<int>(System.Collections.Generic.IEnumerable<int>)
		// YooAsset.AssetOperationHandle GameFramework.Resource.ResourcesManager.LoadAssetAsync<object>(string)
		// object[] System.Array.Empty<object>()
		// System.Void UniFramework.Event.EventGroup.AddListener<object>(System.Action<UniFramework.Event.IEventMessage>)
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