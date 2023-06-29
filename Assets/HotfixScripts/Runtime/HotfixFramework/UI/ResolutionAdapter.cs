using UnityEngine;

public class ResolutionAdapter : MonoBehaviour
{
    [SerializeField]
    private Camera UICamera;
    public float designWidth = 1080f;
    public float designHeight = 1920f;

    private void Start()
    {
        AdaptResolution();
    }

    private void AdaptResolution()
    {
        float screenHeight = Screen.height;
        float targetAspect = designWidth / designHeight;
        float currentAspect = (float)Screen.width / Screen.height;
        float scaleFactor = currentAspect / targetAspect;

        if (scaleFactor < 1f) // 设备宽高比小于设计宽高比，需要调整
        {
            UICamera.orthographicSize = designHeight / 2f / scaleFactor;
        }
        else // 设备宽高比大于等于设计宽高比，不需要调整
        {
            UICamera.orthographicSize = designHeight / 2f;
        }
    }
}
