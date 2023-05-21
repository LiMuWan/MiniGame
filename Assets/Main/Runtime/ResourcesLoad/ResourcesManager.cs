using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Singleton;
using YooAsset;
using System.Threading;
using Cysharp.Threading.Tasks;
using System;
using UniFramework.Utility;
using UnityEngine.SceneManagement;
using System.IO;
using UnityGameFramework.Runtime;
using UnityEngine.Networking;

namespace GameFramework.Resource
{
    public partial class ResourcesManager : SingletonInstance<ResourcesManager>, ISingleton
    {
        #region Propreties
        private const int DefaultPriority = 0;
        /// <summary>
        /// 当前最新的包裹版本。
        /// </summary>
        public string PackageVersion { set; get; }
        private bool m_ForceUnloadUnusedAssets = false;
        private bool m_PreorderUnloadUnusedAssets = false;
        private bool m_PerformGCCollect = false;
        private AsyncOperation m_AsyncOperation = null;
        private float m_LastUnloadUnusedAssetsOperationElapseSeconds = 0f;
        private float m_MinUnloadUnusedAssetsInterval = 60f;
        private float m_MaxUnloadUnusedAssetsInterval = 300f;

        /// <summary>
        /// 资源包名称。
        /// </summary>
        public string PackageName = "DefaultPackage";

        /// <summary>
        /// 资源系统运行模式。
        /// </summary>
        public EPlayMode PlayMode = EPlayMode.EditorSimulateMode;

        /// <summary>
        /// 下载文件校验等级。
        /// </summary>
        public EVerifyLevel VerifyLevel { get; set; }

        /// <summary>
        /// 可读写路径
        /// </summary>
        private ReadWritePathType m_ReadWritePathType = ReadWritePathType.Unspecified;

        /// <summary>
        /// 实例化的根节点。
        /// </summary>
        public Transform InstanceRoot { get; set; }

        /// <summary>
        /// Propagates notification that operations should be canceled.
        /// </summary>
        public CancellationToken CancellationToken { get; private set; }

        /// <summary>
        /// 资源生命周期服务器。
        /// </summary>
        public ResourceHelper ResourceHelper { get; private set; }

        /// <summary>
        /// 资源服务器地址。
        /// </summary>
        public string HostServerURL { get; set; }


        /// <summary>
        /// 设置异步系统参数，每帧执行消耗的最大时间切片（单位：毫秒）
        /// </summary>
        public long Milliseconds { get; set; }

        /// <summary>
        /// The total number of frames since the start of the game (Read Only).
        /// </summary>
        private static int _lastUpdateFrame = 0;

        private string m_ApplicableGameVersion;

        private int m_InternalResourceVersion;

        private string m_ReadOnlyPath;
        private string m_ReadWritePath;

        /// <summary>
        /// 获取资源读写区路径。
        /// </summary>
        public string ReadWritePath
        {
            get
            {
                return m_ReadWritePath;
            }
        }

        /// <summary>
        /// 获取当前资源适用的游戏版本号。
        /// </summary>
        public string ApplicableGameVersion
        {
            get
            {
                return m_ApplicableGameVersion;
            }
        }

        /// <summary>
        /// 获取当前内部资源版本号。
        /// </summary>
        public int InternalResourceVersion
        {
            get
            {
                return m_InternalResourceVersion;
            }
        }

        public int DownloadingMaxNum { get; set; }
        public int FailedTryAgain { get; set; }
        #endregion

        #region 设置接口
        /// <summary>
        /// 设置资源只读区路径。
        /// </summary>
        /// <param name="readOnlyPath">资源只读区路径。</param>
        public void SetReadOnlyPath(string readOnlyPath)
        {
            if (string.IsNullOrEmpty(readOnlyPath))
            {
                throw new Exception("Read-only path is invalid.");
            }

            m_ReadOnlyPath = readOnlyPath;
        }

        /// <summary>
        /// 设置资源读写区路径。
        /// </summary>
        /// <param name="readWritePath">资源读写区路径。</param>
        public void SetReadWritePath(string readWritePath)
        {
            if (string.IsNullOrEmpty(readWritePath))
            {
                throw new Exception("Read-write path is invalid.");
            }

            m_ReadWritePath = readWritePath;
        }


        #endregion
        void ISingleton.OnCreate(object createParam)
        {
            SetReadOnlyPath(Application.streamingAssetsPath);
            if (m_ReadWritePathType == ReadWritePathType.TemporaryCache)
            {
                SetReadWritePath(Application.temporaryCachePath);
            }
            else
            {
                if (m_ReadWritePathType == ReadWritePathType.Unspecified)
                {
                    m_ReadWritePathType = ReadWritePathType.PersistentData;
                }

                SetReadWritePath(Application.persistentDataPath);
            }

            HostServerURL = GetHostServerURL();//SettingsUtils.GetResDownLoadPath();
            Initialize();
            Debug.Log($"AssetsComponent Run Mode：{PlayMode}");
        }

        private string GetHostServerURL()
        {

            string hostServerIP = "http://192.168.0.111";//"http://192.168.1.15";
            string gameVersion = "version";

#if UNITY_EDITOR
            if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.Android)
                return $"{hostServerIP}/CDN/Android/{gameVersion}";
            else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.iOS)
                return $"{hostServerIP}/CDN/IPhone/{gameVersion}";
            else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.WebGL)
                return $"{hostServerIP}/CDN/WebGL/{gameVersion}";
            else
                return $"{hostServerIP}/CDN/PC/{gameVersion}";
#else
        if (Application.platform == RuntimePlatform.Android)
            return $"{hostServerIP}/CDN/Android/{gameVersion}";
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
            return $"{hostServerIP}/CDN/IPhone/{gameVersion}";
        else if (Application.platform == RuntimePlatform.WebGLPlayer)
            return $"{hostServerIP}/CDN/WebGL/{gameVersion}";
        else
            return $"{hostServerIP}/CDN/PC/{gameVersion}";
#endif
        }

        void ISingleton.OnDestroy()
        {
            InstanceRoot = null;
            YooAssets.Destroy();
        }

        void ISingleton.OnUpdate()
        {
            m_LastUnloadUnusedAssetsOperationElapseSeconds += Time.unscaledDeltaTime;
            if (m_AsyncOperation == null && (m_ForceUnloadUnusedAssets || m_LastUnloadUnusedAssetsOperationElapseSeconds >= m_MaxUnloadUnusedAssetsInterval || m_PreorderUnloadUnusedAssets && m_LastUnloadUnusedAssetsOperationElapseSeconds >= m_MinUnloadUnusedAssetsInterval))
            {
                Debug.Log("Unload unused assets...");
                m_ForceUnloadUnusedAssets = false;
                m_PreorderUnloadUnusedAssets = false;
                m_LastUnloadUnusedAssetsOperationElapseSeconds = 0f;
                m_AsyncOperation = Resources.UnloadUnusedAssets();
            }

            if (m_AsyncOperation is { isDone: true })
            {
                UnloadUnusedAssets();
                m_AsyncOperation = null;
                if (m_PerformGCCollect)
                {
                    Debug.Log("GC.Collect...");
                    m_PerformGCCollect = false;
                    GC.Collect();
                }
            }
        }

        public InitializationOperation InitPackage()
        {
            if (PlayMode == EPlayMode.EditorSimulateMode)
            {
                Debug.Log("During this run, Game Framework will use editor resource files, which you should validate first.");
#if !UNITY_EDITOR
            PlayMode = EPlayMode.OfflinePlayMode;
#endif
            }
            // 创建默认的资源包
            string packageName = PackageName;
            var package = YooAssets.TryGetPackage(packageName);
            if (package == null)
            {
                package = YooAssets.CreatePackage(packageName);
                YooAssets.SetDefaultPackage(package);
            }

            // 编辑器下的模拟模式
            InitializationOperation initializationOperation = null;
            if (PlayMode == EPlayMode.EditorSimulateMode)
            {
                var createParameters = new EditorSimulateModeParameters();
                createParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(packageName);
                initializationOperation = package.InitializeAsync(createParameters);
            }

            // 单机运行模式
            if (PlayMode == EPlayMode.OfflinePlayMode)
            {
                var createParameters = new OfflinePlayModeParameters();
                createParameters.DecryptionServices = new GameDecryptionServices();
                initializationOperation = package.InitializeAsync(createParameters);
            }

            // 联机运行模式
            if (PlayMode == EPlayMode.HostPlayMode)
            {
                var createParameters = new HostPlayModeParameters();
                createParameters.DecryptionServices = new GameDecryptionServices();
                createParameters.QueryServices = new GameQueryServices();
                createParameters.DefaultHostServer = HostServerURL;
                createParameters.FallbackHostServer = HostServerURL;
                initializationOperation = package.InitializeAsync(createParameters);
            }

            return initializationOperation;
        }

        public void Initialize()
        {
            // 初始化资源系统
            YooAssets.Initialize();
            YooAssets.SetOperationSystemMaxTimeSlice(Milliseconds);
            YooAssets.SetCacheSystemCachedFileVerifyLevel(VerifyLevel);

            // 创建默认的资源包
            string packageName = PackageName;
            var defaultPackage = YooAssets.TryGetPackage(packageName);
            if (defaultPackage == null)
            {
                defaultPackage = YooAssets.CreatePackage(packageName);
                YooAssets.SetDefaultPackage(defaultPackage);
            }

            InstanceRoot = UniSingleton.Behaviour.transform;
            ResourceHelper = InstanceRoot.gameObject.AddComponent<ResourceHelper>();
            CancellationToken = ResourceHelper.GetCancellationTokenOnDestroy();
        }

        #region 资源信息

        /// <summary>
        /// 是否需要从远端更新下载。
        /// </summary>
        /// <param name="location">资源的定位地址</param>
        public bool IsNeedDownloadFromRemote(string location)
        {
            return YooAssets.IsNeedDownloadFromRemote(location);
        }

        /// <summary>
        /// 是否需要从远端更新下载。
        /// </summary>
        /// <param name="assetInfo">资源信息。</param>
        public bool IsNeedDownloadFromRemote(AssetInfo assetInfo)
        {
            return YooAssets.IsNeedDownloadFromRemote(assetInfo);
        }

        /// <summary>
        /// 获取资源信息列表。
        /// </summary>
        /// <param name="tag">资源标签。</param>
        /// <returns>资源信息列表。</returns>
        public AssetInfo[] GetAssetInfos(string tag)
        {
            return YooAssets.GetAssetInfos(tag);
        }

        /// <summary>
        /// 获取资源信息列表。
        /// </summary>
        /// <param name="tags">资源标签列表。</param>
        /// <returns>资源信息列表。</returns>
        public AssetInfo[] GetAssetInfos(string[] tags)
        {
            return YooAssets.GetAssetInfos(tags);
        }

        /// <summary>
        /// 获取资源信息。
        /// </summary>
        /// <param name="location">资源的定位地址。</param>
        /// <returns>资源信息。</returns>
        public AssetInfo GetAssetInfo(string location)
        {
            return YooAssets.GetAssetInfo(location);
        }

        /// <summary>
        /// 检查资源定位地址是否有效。
        /// </summary>
        /// <param name="location">资源的定位地址</param>
        public bool CheckLocationValid(string location)
        {
            return YooAssets.CheckLocationValid(location);
        }

        #endregion

        #region 资源加载
        /// <summary>
        /// 异步加载资源对象
        /// </summary>
        /// <param name="assetInfo">资源信息</param>
        public AssetOperationHandle LoadAssetASync<T>(string  assetName) where T : UnityEngine.Object
        {
            return YooAssets.LoadAssetAsync<T>(assetName);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <typeparam name="T">要加载的资源类型。</typeparam>
        /// <returns>UniTask资源实例。</returns>
        public async UniTask<T> LoadAssetAsync<T>(string assetName) where T : UnityEngine.Object
        {
            if (string.IsNullOrEmpty(assetName))
            {
                Debug.LogError("Asset name is invalid.");
                return default;
            }

            AssetOperationHandle operationHandle = YooAssets.LoadAssetAsync<T>(assetName);

            await operationHandle.ToUniTask(UniSingleton.Behaviour);

            return operationHandle.AssetObject as T;
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="cancellationToken">取消操作Token。</param>
        /// <typeparam name="T">要加载的资源类型。</typeparam>
        /// <returns>UniTask资源实例。</returns>
        public async UniTask<T> LoadAssetAsync<T>(string assetName, CancellationToken cancellationToken) where T : UnityEngine.Object
        {
            if (string.IsNullOrEmpty(assetName))
            {
                Debug.LogError("Asset name is invalid.");
                return default;
            }

            AssetOperationHandle operationHandle = YooAssets.LoadAssetAsync<T>(assetName);

            await operationHandle.ToUniTask(cancellationToken: cancellationToken).SuppressCancellationThrow();

            return operationHandle.AssetObject as T;
        }

        /// <summary>
        /// 异步加载原生对象
        /// </summary>
        /// <typeparam name="TObject">资源类型</typeparam>
        /// <param name="location">资源的定位地址</param>
        public RawFileOperationHandle LoadRawFileAsync(string location)
        {
            return YooAssets.LoadRawFileAsync(location);
        }

        /// <summary>
        /// 异步加载子对象
        /// </summary>
        /// <typeparam name="TObject">资源类型</typeparam>
        /// <param name="location">资源的定位地址</param>
        public SubAssetsOperationHandle LoadSubAssetsAsync<T>(string location) where T : UnityEngine.Object
        {
            return YooAssets.LoadSubAssetsAsync<T>(location);
        }

        /// <summary>
        /// 异步加载资源对象
        /// </summary>
        /// <param name="location">资源的定位地址</param>
        /// <param name="type">资源类型</param>
        public AssetOperationHandle LoadAssetAsync(string location, System.Type type)
        {
            return YooAssets.LoadAssetAsync(location, type);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="assetType">要加载资源的类型。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        public void LoadAssetAsync(string assetName, Type assetType, LoadAssetCallbacks loadAssetCallbacks, object userData = null)
        {
            if (string.IsNullOrEmpty(assetName))
            {
                Debug.LogError("Asset name is invalid.");
                return;
            }
            LoadAssetAsync(assetName, assetType, DefaultPriority, loadAssetCallbacks, userData);
        }

        public async UniTask<TObject> LoadAsync<TObject>(string location) where TObject : UnityEngine.Object
        {
            var assetPackage = YooAssets.TryGetPackage(PackageName);

            var handle = assetPackage.LoadAssetAsync<TObject>(location);

            await handle.ToUniTask(ResourceHelper);

            return handle.AssetObject as TObject;
        }


        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="assetType">要加载资源的类型。</param>
        /// <param name="priority">加载资源的优先级。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        public async void LoadAssetAsync(string assetName, Type assetType, int priority, LoadAssetCallbacks loadAssetCallbacks, object userData)
        {
            float duration = Time.time;

            if (string.IsNullOrEmpty(assetName))
            {
                throw new Exception("Asset name is invalid.");
            }

            if (loadAssetCallbacks == null)
            {
                throw new Exception("Load asset callbacks is invalid.");
            }

            var assetPackage = YooAssets.TryGetPackage(PackageName);

            AssetInfo assetInfo = assetPackage.GetAssetInfo(assetName);

            if (assetInfo == null)
            {
                string errorMessage = StringFormat.Format("Can not load asset '{0}'.", assetName);
                if (loadAssetCallbacks.LoadAssetFailureCallback != null)
                {
                    loadAssetCallbacks.LoadAssetFailureCallback(assetName, LoadResourceStatus.NotExist, errorMessage, userData);
                    return;
                }

                throw new Exception(errorMessage);
            }

            OperationHandleBase handleBase;

            bool isRawResource = assetInfo.Address == string.Empty;

            if (isRawResource)
            {
                handleBase = assetPackage.LoadRawFileAsync(assetInfo);
            }
            else
            {
                handleBase = assetPackage.LoadAssetAsync(assetName, assetType);
            }

            await handleBase.ToUniTask(ResourceHelper);

            if (isRawResource)
            {
                RawFileOperationHandle handle = (RawFileOperationHandle)handleBase;
                if (handle == null || handle.Status == EOperationStatus.Failed)
                {
                    string errorMessage = StringFormat.Format("Can not load asset '{0}'.", assetName);
                    if (loadAssetCallbacks.LoadAssetFailureCallback != null)
                    {
                        loadAssetCallbacks.LoadAssetFailureCallback(assetName, LoadResourceStatus.NotReady, errorMessage, userData);
                        return;
                    }

                    throw new Exception(errorMessage);
                }
                else
                {
                    if (loadAssetCallbacks.LoadAssetSuccessCallback != null)
                    {
                        duration = Time.time - duration;

                        loadAssetCallbacks.LoadAssetSuccessCallback(assetName, handle, duration, userData);
                    }
                }
            }
            else
            {
                AssetOperationHandle handle = (AssetOperationHandle)handleBase;
                if (handle == null || handle.AssetObject == null || handle.Status == EOperationStatus.Failed)
                {
                    string errorMessage = StringFormat.Format("Can not load asset '{0}'.", assetName);
                    if (loadAssetCallbacks.LoadAssetFailureCallback != null)
                    {
                        loadAssetCallbacks.LoadAssetFailureCallback(assetName, LoadResourceStatus.NotReady, errorMessage, userData);
                        return;
                    }

                    throw new Exception(errorMessage);
                }
                else
                {
                    if (loadAssetCallbacks.LoadAssetSuccessCallback != null)
                    {
                        duration = Time.time - duration;

                        loadAssetCallbacks.LoadAssetSuccessCallback(assetName, handle.AssetObject, duration, userData);
                    }
                }
            }
        }


        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="priority">加载资源的优先级。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        public async void LoadAssetAsync(string assetName, int priority, LoadAssetCallbacks loadAssetCallbacks, object userData)
        {
            float duration = Time.time;

            if (string.IsNullOrEmpty(assetName))
            {
                throw new Exception("Asset name is invalid.");
            }

            if (loadAssetCallbacks == null)
            {
                throw new Exception("Load asset callbacks is invalid.");
            }

            var assetPackage = YooAssets.TryGetPackage(PackageName);

            AssetInfo assetInfo = assetPackage.GetAssetInfo(assetName);

            if (assetInfo == null)
            {
                string errorMessage = StringFormat.Format("Can not load asset '{0}'.", assetName);
                if (loadAssetCallbacks.LoadAssetFailureCallback != null)
                {
                    loadAssetCallbacks.LoadAssetFailureCallback(assetName, LoadResourceStatus.NotExist, errorMessage, userData);
                    return;
                }

                throw new Exception(errorMessage);
            }

            OperationHandleBase handleBase;

            bool isRawResource = assetInfo.Address == string.Empty;

            if (isRawResource)
            {
                handleBase = assetPackage.LoadRawFileAsync(assetInfo);
            }
            else
            {
                handleBase = assetPackage.LoadAssetAsync(assetInfo);
            }

            await handleBase.ToUniTask(ResourceHelper);

            if (isRawResource)
            {
                RawFileOperationHandle handle = (RawFileOperationHandle)handleBase;
                if (handle == null || handle.Status == EOperationStatus.Failed)
                {
                    string errorMessage = StringFormat.Format("Can not load asset '{0}'.", assetName);
                    if (loadAssetCallbacks.LoadAssetFailureCallback != null)
                    {
                        loadAssetCallbacks.LoadAssetFailureCallback(assetName, LoadResourceStatus.NotReady, errorMessage, userData);
                        return;
                    }

                    throw new Exception(errorMessage);
                }
                else
                {
                    if (loadAssetCallbacks.LoadAssetSuccessCallback != null)
                    {
                        duration = Time.time - duration;

                        loadAssetCallbacks.LoadAssetSuccessCallback(assetName, handle, duration, userData);
                    }
                }
            }
            else
            {
                AssetOperationHandle handle = (AssetOperationHandle)handleBase;
                if (handle == null || handle.AssetObject == null || handle.Status == EOperationStatus.Failed)
                {
                    string errorMessage = StringFormat.Format("Can not load asset '{0}'.", assetName);
                    if (loadAssetCallbacks.LoadAssetFailureCallback != null)
                    {
                        loadAssetCallbacks.LoadAssetFailureCallback(assetName, LoadResourceStatus.NotReady, errorMessage, userData);
                        return;
                    }

                    throw new Exception(errorMessage);
                }
                else
                {
                    if (loadAssetCallbacks.LoadAssetSuccessCallback != null)
                    {
                        duration = Time.time - duration;

                        loadAssetCallbacks.LoadAssetSuccessCallback(assetName, handle.AssetObject, duration, userData);
                    }
                }
            }
        }

        #endregion

        public void UnloadUnusedAssets()
        {
            var package = YooAssets.GetPackage(PackageName);
            package.UnloadUnusedAssets();
        }

        public void ForceUnloadAllAssets()
        {
            var package = YooAssets.GetPackage(PackageName);
            package.ForceUnloadAllAssets();
        }

        public void UnloadAsset(object asset)
        {
            if (asset == null)
            {
                throw new Exception("Asset is invalid.");
            }
        }

        public void GCCleanUpMemory()
        {
            Debug.Log("ResourceManager GCCleanUpMemory");
            GC.Collect();
        }

        /// <summary>
        /// 检查资源是否存在。
        /// </summary>
        /// <param name="assetName">要检查资源的名称。</param>
        /// <returns>检查资源是否存在的结果。</returns>
        public HasAssetResult HasAsset(string assetName)
        {
            if (string.IsNullOrEmpty(assetName))
            {
                throw new Exception("Asset name is invalid.");
            }

#if false
            UnityEngine.Object obj = UnityEditor.AssetDatabase.LoadMainAssetAtPath(assetName);
            if (obj == null)
            {
                return HasAssetResult.NotExist;
            }

            HasAssetResult result = obj.GetType() == typeof(UnityEditor.DefaultAsset) ? HasAssetResult.BinaryOnDisk : HasAssetResult.AssetOnDisk;
            obj = null;
            UnityEditor.EditorUtility.UnloadUnusedAssetsImmediate();
            return result;
#else
            AssetInfo assetInfo = YooAssets.GetAssetInfo(assetName);

            if (assetInfo == null)
            {
                return HasAssetResult.NotExist;
            }

            return HasAssetResult.AssetOnDisk;
#endif
        }

        /// <summary>
        /// 异步加载场景。
        /// </summary>
        /// <param name="sceneAssetName">要加载场景资源的名称。</param>
        /// <param name="priority">加载场景资源的优先级。</param>
        /// <param name="loadSceneCallbacks">加载场景回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        public async void LoadScene(string sceneAssetName, int priority, LoadSceneCallbacks loadSceneCallbacks, LoadSceneMode loadSceneMode = LoadSceneMode.Single, object userData = null)
        {
            if (string.IsNullOrEmpty(sceneAssetName))
            {
                throw new Exception("Scene asset name is invalid.");
            }

            if (loadSceneCallbacks == null)
            {
                throw new Exception("Load scene callbacks is invalid.");
            }

            float duration = Time.time;

            SceneOperationHandle handle = YooAssets.LoadSceneAsync(sceneAssetName, loadSceneMode, activateOnLoad: true, priority: priority);

            await handle.ToUniTask(ResourceHelper);

            if (loadSceneCallbacks.LoadSceneSuccessCallback != null)
            {
                duration = Time.time - duration;

                loadSceneCallbacks.LoadSceneSuccessCallback(sceneAssetName, handle.SceneObject, duration, userData);
            }
        }

        /// <summary>
        /// 异步卸载场景。
        /// </summary>
        /// <param name="sceneAssetName">要卸载场景资源的名称</param>
        /// <param name="unloadSceneCallbacks">卸载场景回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        /// <exception cref="GameFrameworkException">游戏框架异常。</exception>
        public void UnloadScene(string sceneAssetName, UnloadSceneCallbacks unloadSceneCallbacks, object userData = null)
        {
            if (string.IsNullOrEmpty(sceneAssetName))
            {
                throw new Exception("Scene asset name is invalid.");
            }

            if (unloadSceneCallbacks == null)
            {
                throw new Exception("Unload scene callbacks is invalid.");
            }

            UniSingleton.StartCoroutine(UnloadSceneCo(sceneAssetName, unloadSceneCallbacks, userData));
        }

        private IEnumerator UnloadSceneCo(string sceneAssetName, UnloadSceneCallbacks unloadSceneCallbacks, object userData)
        {
            AsyncOperation asyncOperation = UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(sceneAssetName);
            if (asyncOperation == null)
            {
                yield break;
            }

            yield return asyncOperation;

            if (asyncOperation.allowSceneActivation)
            {
                if (unloadSceneCallbacks.UnloadSceneSuccessCallback != null)
                {
                    unloadSceneCallbacks.UnloadSceneSuccessCallback(sceneAssetName, userData);
                }
            }
            else
            {
                if (unloadSceneCallbacks.UnloadSceneFailureCallback != null)
                {
                    unloadSceneCallbacks.UnloadSceneFailureCallback(sceneAssetName, userData);
                }
            }
        }

        public string ReadStreamingFile(string name)
        {
            var path = Path.Combine(Application.streamingAssetsPath, name);
            Debug.Log($"Streaming->{path}");
            return ReadLocalText(path);
        }

        public byte[] ReadStreamingBytes(string name)
        {
            var path = Path.Combine(Application.streamingAssetsPath, name);
            Debug.Log($"Streaming->{path}");
            return ReadLocalBytes(path);
        }

        /// <summary>
        /// 读取本地文件返回字节
        /// </summary>
        /// <param name="fullpath">文件的绝对路径</param>
        /// <returns></returns>
        public byte[] ReadLocalBytes(string fullpath)
        {
            /*
             * It is not possible to access the StreamingAssets folder on WebGL and Android platforms. 
             * No file access is available on WebGL. Android uses a compressed .apk file. 
             * These platforms return a URL. 
             * Use the UnityWebRequest class to access the Assets.
             */
#if (UNITY_ANDROID || UNITY_WEBGL) && UNITY_EDITOR
            bool isInStreamingAssets = fullpath.Contains(Application.streamingAssetsPath);
            if (isInStreamingAssets)
            {
                UnityWebRequest a = UnityWebRequest.Get(fullpath);
                a.SendWebRequest();
                while (!a.isDone) { }

                if (!string.IsNullOrEmpty(a.error))
                {
                    throw new FileNotFoundException(fullpath);
                }
                return a.downloadHandler.data;
            }
            else
            {
                return File.ReadAllBytes(fullpath);
            }
#else
            return File.ReadAllBytes(fullpath);
#endif
        }

        /// <summary>
        /// 读取本地文件
        /// </summary>
        /// <param name="fullpath">文件的绝对路径</param>
        /// <returns></returns>
        public string ReadLocalText(string fullpath)
        {
            /*
             * It is not possible to access the StreamingAssets folder on WebGL and Android platforms. 
             * No file access is available on WebGL. Android uses a compressed .apk file. 
             * These platforms return a URL. 
             * Use the UnityWebRequest class to access the Assets.
             */
#if (UNITY_ANDROID || UNITY_WEBGL) && !UNITY_EDITOR
        bool isInStreamingAssets = fullpath.Contains(Application.streamingAssetsPath);
        if (isInStreamingAssets)
        {
            UnityWebRequest a = UnityWebRequest.Get(fullpath);
            a.SendWebRequest();
            while (!a.isDone) { }

            if (!string.IsNullOrEmpty(a.error))
            {
                throw new FileNotFoundException(fullpath);
            }
            return a.downloadHandler.text;
        } else
        {
            return File.ReadAllText(fullpath);
        }
#else
            return File.ReadAllText(fullpath);
#endif
        }

        #region Hotfix
        /// <summary>
        /// 资源下载器，用于下载当前资源版本所有的资源包文件。
        /// </summary>
        public ResourceDownloaderOperation Downloader { get; set; }
        public UpdatePackageVersionOperation UpdatePackageVersionAsync(bool appendTimeTicks = true, int timeout = 60)
        {
            var package = YooAssets.GetPackage(PackageName);
            return package.UpdatePackageVersionAsync(appendTimeTicks, timeout);
        }

        public UpdatePackageManifestOperation UpdatePackageManifestAsync(string packageVersion, bool autoSaveVersion = true, int timeout = 60)
        {
            var package = YooAssets.GetPackage(PackageName);
            return package.UpdatePackageManifestAsync(packageVersion, autoSaveVersion, timeout);
        }

        /// <summary>
        /// 创建资源下载器，用于下载当前资源版本所有的资源包文件
        /// </summary>
        /// <param name="downloadingMaxNumber">同时下载的最大文件数</param>
        /// <param name="failedTryAgain">下载失败的重试次数</param>
        public ResourceDownloaderOperation CreateResourceDownloader(int downloadingMaxNumber, int failedTryAgain)
        {
            var package = YooAssets.GetPackage(PackageName);
            Downloader = package.CreateResourceDownloader(downloadingMaxNumber, failedTryAgain);
            return Downloader;
        }

        /// <summary>
        /// 清理包裹未使用的缓存文件
        /// </summary>
        public ClearUnusedCacheFilesOperation ClearUnusedCacheFilesAsync()
        {
            var package = YooAssets.GetPackage(PackageName);
            return package.ClearUnusedCacheFilesAsync();
        }

        public void ClearSandbox()
        {
            YooAssets.ClearSandbox();
        }
        #endregion

        /// <summary>
        /// 强制执行释放未被使用的资源。
        /// </summary>
        /// <param name="performGCCollect">是否使用垃圾回收。</param>
        public void ForceUnloadUnusedAssets(bool performGCCollect)
        {
            m_ForceUnloadUnusedAssets = true;
            if (performGCCollect)
            {
                m_PerformGCCollect = true;
            }
        }
    }
}