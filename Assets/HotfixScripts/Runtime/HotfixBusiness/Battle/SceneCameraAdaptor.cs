using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneCameraAdaptor : MonoBehaviour
{   
   private const float ReferenceWidth = 1080f;
    private const float ReferenceHeight = 1920f;
    private const float ReferenceSize = 9.5f;

    private float m_aspectRatio; // 相机视口宽高比
    private Camera m_camera;

    private void Awake()
    {
        m_camera = GetComponent<Camera>();

        // 计算相机视口宽高比和初始大小
        m_aspectRatio = ReferenceWidth / ReferenceHeight;
        float currentAspectRatio = (float)Screen.width / Screen.height;
        float scaleFactor = Mathf.Max(currentAspectRatio / m_aspectRatio, m_aspectRatio / currentAspectRatio);
        m_camera.orthographicSize = ReferenceSize * scaleFactor;
    }

    private void Update()
    {
        // 实时更新相机大小
        float currentAspectRatio = (float)Screen.width / Screen.height;
        if (currentAspectRatio != m_aspectRatio)
        {
            float scaleFactor = Mathf.Max(currentAspectRatio / m_aspectRatio, m_aspectRatio / currentAspectRatio);
            m_camera.orthographicSize = ReferenceSize * scaleFactor;
            m_aspectRatio = currentAspectRatio;
        }
    }
}
