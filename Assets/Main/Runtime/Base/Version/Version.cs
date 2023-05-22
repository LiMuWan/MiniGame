namespace GameFramework
{
    /// <summary>
    /// 版本号类。
    /// </summary>
    public static partial class Version
    {
        public static string gameVersion = "1.0"; // 主版本号信息
        /// <summary>
        /// 获取游戏版本号。
        /// </summary>
        public static string GameVersion
        {
            get
            {
                return gameVersion;
            }
        }
    }
}
