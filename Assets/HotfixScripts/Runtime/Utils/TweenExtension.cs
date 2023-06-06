using System;
using System.Collections;
using System.Collections.Generic;
using UniFramework.Tween;
using UnityEngine;

public static class TweenExtesion 
{
    public static Vector3Tween DOShake(this Transform transform,float duration,Vector3 magnitude,Action onComplete = null)
    {
        var tween = transform.ShakePosition(0.2f,magnitude);
        tween.SetOnComplete(onComplete);
        UniTween.Play(tween);
        return tween;
    }

    public static Vector3Tween DoMove(this Transform transform,AnimationCurve easeCure, float duration, Vector3 targetPos, bool isWorld, Action onComplete = null)
    {
        Vector3Tween tween = transform.TweenMove(duration, targetPos, isWorld);
        tween.SetEase(easeCure);
        tween.SetOnComplete(onComplete);
        UniTween.Play(tween);
        return tween;
    }

    public static Vector3Tween DoScale(this Transform transform, AnimationCurve easeCure, float duration, Vector3 from, Vector3 to, Action onComplete = null)
    {
        Vector3Tween tween = transform.TweenScale(duration, from, to);
        tween.SetEase(easeCure);
        tween.SetOnComplete(onComplete);
        UniTween.Play(tween);
        return tween;
    }

}
