using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GripAdapter : AdapterBase
{
    [Header("水平间隙")]
    public float HorizontalGap = 0;
    [Header("垂直间隙")]
    public float VerticalGap = 0;
    [Header("是否每一帧都计算")]
    public bool CalculateEveryFrame = true;
    [Header("排列方式")]
    public GridLayoutGroup.Axis axis = GridLayoutGroup.Axis.Horizontal;
    public GridLayoutGroup.Constraint constraint = GridLayoutGroup.Constraint.Flexible;
    public int constraintCount = 2;

    private List<Vector2> targetPos = new List<Vector2>();
    private RectTransform selfRect;
    private GridLayoutGroup grid;

    private RectTransform SelfRect
    {
        get
        {
            if (selfRect == null)
            {
                selfRect = GetComponent<RectTransform>();
            }
            return selfRect;
        }
    }

    private void Awake()
    {
        grid = GetComponent<GridLayoutGroup>();
    }

    private void Update()
    {
        if (CalculateEveryFrame)
        {
            Adapt();
        }
    }

    public override void Adapt()
    {
        float sumWidth = 0;
        float sumHeight = 0;
        int activityCount = 0;
        List<Vector2> newTargetPos = new List<Vector2>();

        for (int i = 0; i < SelfRect.childCount; i++)
        {
            if (i >= targetPos.Count) targetPos.Add(Vector2.zero);

            if (SelfRect.GetChild(i).gameObject.activeInHierarchy)
            {
                activityCount++;
                var childRect = SelfRect.GetChild(i).GetComponent<RectTransform>();
                sumWidth += childRect.rect.width;
                sumHeight += childRect.rect.height;

                if (activityCount > 1)
                {
                    sumWidth += HorizontalGap;
                    sumHeight += VerticalGap;
                }

                if (axis == GridLayoutGroup.Axis.Horizontal)
                {
                    targetPos[i] = new Vector2(sumWidth - childRect.rect.width, 0);
                }
                else
                {
                    targetPos[i] = new Vector2(0, sumHeight - childRect.rect.height);
                }

                newTargetPos.Add(targetPos[i]);
            }
        }

        SelfRect.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, sumWidth);
        SelfRect.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, sumHeight);

        if (grid != null)
        {
            grid.constraint = constraint;
            grid.constraintCount = constraintCount;

            grid.cellSize = new Vector2(TargetPos[0].x, TargetPos[0].y);

            grid.CalculateLayoutInputHorizontal();
            grid.CalculateLayoutInputVertical();

            grid.SetLayoutHorizontal();
            grid.SetLayoutVertical();
        }

        for (int i = 0; i < SelfRect.childCount; i++)
        {
            var childRect = SelfRect.GetChild(i).GetComponent<RectTransform>();

            if (newTargetPos.Count > i)
            {
                childRect.anchoredPosition = newTargetPos[i];
            }
        }
    }

    public List<Vector2> TargetPos { get { return targetPos; } set { targetPos = value; } }
}
