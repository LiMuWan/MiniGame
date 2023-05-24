#if UNITY_EDITOR

using System.IO;
using UnityEditor;
using UnityEngine;

namespace UniFramework
{
    public class AssetsImportProcessor : AssetPostprocessor
    {
        private void OnCommonPreprocess()
        {
            // AssetsManager.CheckToAddAddressable(assetImporter.assetPath);
        }

        /// <summary>
        /// 主要优化对图片占用的内存以及图片占用的内存影响图片的加载速度
        /// </summary>
        private void OnPreprocessTexture()
        {
            //If we already have a meta file for that asset it's a reimport and not a first import, so we don't want to apply the preset.
            if (!assetImporter.importSettingsMissing) return;
            var path = assetImporter.assetPath;
            var importer = assetImporter as TextureImporter;
            if (importer == null) return;
            string textureName = System.IO.Path.GetFileNameWithoutExtension(path);
             Texture2D texture = GetTexture();
            if (textureName.EndsWith("_N")) importer.textureType = TextureImporterType.NormalMap;
            else if (texture.width > 256 || texture.height > 256)
                importer.textureType = TextureImporterType.Default;
            else
                importer.textureType = TextureImporterType.Sprite;
            importer.isReadable = true;
            importer.mipmapEnabled = true;
            importer.wrapMode = TextureWrapMode.Clamp;
            importer.filterMode = FilterMode.Trilinear;
            importer.textureCompression = TextureImporterCompression.Compressed;
           
           
            int maxSide = GetLongSide(texture);
            int maxSize = 0;
            if (maxSide < 50) maxSize = 32;
            else if (maxSide < 100) maxSize = 64;
            else if (maxSide < 150) maxSize = 128;
            else if (maxSide < 300) maxSize = 256;
            else if (maxSide < 600) maxSize = 512;
            else maxSize = 1024;

            importer.maxTextureSize = maxSize;
            Debug.Log("<b><color=#339933>Import [Texture]</color></b> " + path);
            OnCommonPreprocess();
        }

        /// <summary>
        /// 对音频做初始化设置
        /// </summary>
        private void OnPreprocessAudio()
        {
            if (!assetImporter.importSettingsMissing) return;
            var path = assetImporter.assetPath;
            var importer = assetImporter as AudioImporter;
            if (importer == null) return;
            AudioImporterSampleSettings sampleSettings = importer.defaultSampleSettings;
            // Compression format should be dependant on the sound file being played
            // sampleSettings.compressionFormat = AudioCompressionFormat.Vorbis;

            sampleSettings.quality = 75f;
            sampleSettings.sampleRateSetting = AudioSampleRateSetting.OptimizeSampleRate;
            sampleSettings.loadType = AudioClipLoadType.Streaming;
            importer.preloadAudioData = false;
            importer.defaultSampleSettings = sampleSettings;
            Debug.Log("<b><color=#339933>Import [Audio]</color></b> " + path);
            OnCommonPreprocess();
        }

        /// <summary>
        /// 对模型做初始化设置
        /// </summary>
        private void OnPreprocessModel()
        {
            if (!assetImporter.importSettingsMissing) return;
            var path = assetImporter.assetPath;
            var importer = assetImporter as ModelImporter;
            if (importer == null) return;
            // Scene
            importer.globalScale = 1f;
            importer.useFileUnits = true;
            importer.bakeAxisConversion = true;
            importer.importBlendShapes = false;
            importer.importVisibility = false;
            importer.importCameras = false;
            importer.importLights = false;
            importer.preserveHierarchy = false;
            importer.sortHierarchyByName = true;

            // Meshes
            importer.meshCompression = ModelImporterMeshCompression.Off;
            importer.isReadable = false;
            importer.addCollider = false;

            // Geometery
            importer.keepQuads = false;
            importer.weldVertices = true;
            importer.importNormals = ModelImporterNormals.Import;
            importer.importBlendShapeNormals = ModelImporterNormals.None;
            importer.normalCalculationMode = ModelImporterNormalCalculationMode.AreaAndAngleWeighted;
            importer.normalSmoothingSource = ModelImporterNormalSmoothingSource.FromSmoothingGroups;
            importer.importTangents = ModelImporterTangents.CalculateMikk;
            importer.swapUVChannels = false;
            importer.generateSecondaryUV = false;

            // Rig Import
            importer.animationType = ModelImporterAnimationType.None;

            // Animation Import
            importer.importConstraints = false;
            importer.importAnimation = false;

            // Material Import
            importer.materialImportMode = ModelImporterMaterialImportMode.None;

            Debug.Log("<b><color=#339933>Import [Model]</color></b> " + path);
            OnCommonPreprocess();
        }


        /// <summary>
        /// IO流读取图片
        /// </summary>
        private Texture2D GetTexture()
        {
            FileStream stream = new FileStream(assetPath, FileMode.Open);
            stream.Seek(0, SeekOrigin.Begin);
            byte[] bytes = new byte[stream.Length];
            stream.Read(bytes, 0, (int)stream.Length);
            stream.Close();
            stream.Dispose();
            stream = null;

            Texture2D t = new Texture2D(1, 1);
            t.LoadImage(bytes);
            return t;
        }

        /// <summary>
        /// 获取Texture的最长边长度
        /// </summary>
        /// <param name="texture"></param>
        /// <returns></returns>
        private int GetLongSide(Texture2D texture)
        {
            return texture.width > texture.height ? texture.width : texture.height;
        }
    }
}

#endif