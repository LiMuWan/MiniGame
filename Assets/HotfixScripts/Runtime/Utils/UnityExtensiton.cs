using UnityEngine;

public static class UnityExtensiton 
{
   public static void SetTRSNormalize(this Transform transform)
   {
        transform.localPosition = Vector3.zero;
        transform.localScale = Vector3.one;
        transform.localRotation = Quaternion.identity;
   }
}
