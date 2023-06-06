using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PositioningManager : MonoBehaviour
{
   [SerializeField]
   private List<Transform> team_left_positions;
   [SerializeField]
   private List<Transform> team_right_positions;

    public List<Transform> TeamLeftPositions
    {
        get { return team_left_positions; }
        private set { }
    }

    public List<Transform> TeamRightPositions
    {
        get { return team_right_positions; }
        private set { }
    }

    private void OnDestroy()
    {
        team_left_positions.Clear();
        team_right_positions.Clear();
        team_left_positions = null;
        team_right_positions = null;
    }
}
