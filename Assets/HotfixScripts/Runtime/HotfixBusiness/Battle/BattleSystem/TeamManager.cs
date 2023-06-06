using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class TeamManager : MonoBehaviour
{
    [SerializeField]
    private GameObject hero_item_template;
    private List<ItemData> team_left_items;
    private List<ItemData> team_right_items;

    private List<GameObject> team_left_entities;
    private List<GameObject> team_right_entities;

    private PositioningManager positioningManager;

    public List<ItemData> TeamLeftItems
    {
        get { return team_left_items; }
    }

    public List<ItemData> TeamRightItems
    {
        get { return team_right_items; }
    }

    public List<GameObject> TeamLeftEntities
    {
        get { return team_left_entities; }
    }

    public List<GameObject> TeamRightEntities
    {
        get { return team_right_entities; }
    }

    private void Awake()
    {
        positioningManager = GetComponent<PositioningManager>();
        team_left_entities = new List<GameObject>();
        team_right_entities = new List<GameObject>();
    }

    private void OnDestroy()
    {
        for (int i = 0; i < team_left_entities.Count; i++)
        {
            GameObject.Destroy(team_left_entities[i]);
        }
        team_left_entities.Clear();
        for (int i = 0; i < team_right_entities.Count; i++)
        {
            GameObject.Destroy(team_right_entities[i]);
        }
        team_right_entities.Clear();
        team_left_entities = null;
        team_right_entities = null;
        positioningManager = null;
    }

    public void SetUp(List<ItemData> team_left_items, List<ItemData> team_right_items)
    {
        this.team_left_items = team_left_items;
        this.team_right_items = team_right_items;
        SortTeamDataBySpeed();
        LoadEntites();
    }

    private void LoadEntites()
    {
        LoadTeamEntity(team_left_items, positioningManager.TeamLeftPositions, team_left_entities);
        LoadTeamEntity(team_right_items, positioningManager.TeamRightPositions, team_right_entities);
    }

    private void LoadTeamEntity(List<ItemData> team_items, List<Transform> team_positions, List<GameObject> team_entities)
    {
        for (int i = 0; i < team_items.Count; i++)
        {
            var item_entity = GameObject.Instantiate(hero_item_template);
            item_entity.transform.SetParent(team_positions[i]);
            item_entity.transform.SetTRSNormalize();
            item_entity.SetActive(true);
            var spriteRenderer = item_entity.GetComponent<SpriteRenderer>();
            if (i < 4)
            {
                spriteRenderer.sortingLayerName = LayerDefine.SecondRow;
            }
            else
            {
                spriteRenderer.sortingLayerName = LayerDefine.FirstRow;
            }
            team_entities.Add(item_entity);
        }
    }

    private void SortTeamDataBySpeed()
    {
        team_left_items = team_left_items.OrderByDescending(item => item.Spd).ToList();
        team_right_items = team_right_items.OrderByDescending(item => item.Spd).ToList();
    }
}
