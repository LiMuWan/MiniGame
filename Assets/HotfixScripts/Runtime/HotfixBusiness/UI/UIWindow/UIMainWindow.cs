using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UniFramework.Utility;
using UnityEngine.UI;

//Donot use base.[MethodName] 
public partial class UIMainWindow
{
    private List<EquipData> equipDatas = new List<EquipData>(16);
    public class animal_slot_viewTableModel : TableItemModel<animal_slot_viewTableTemplate>
    {
        public EquipData EquipData;
        public animal_slot_viewTableModel() { }

        //默认初始化函数,此类写item逻辑
        public override void InitModel()
        {
            //todo
        }
        
        public void RefreshData(EquipData equipData)
        {
            EquipData = equipData;
        }
    }

    public class item_food_bagTableModel : TableItemModel<item_food_bagTableTemplate>
    {
        public item_food_bagTableModel() { }
        public override void InitModel()
        {
            //todo
        }
    }

    public class item_home_bagTableModel : TableItemModel<item_home_bagTableTemplate>
    {
        public item_home_bagTableModel() { }
        public override void InitModel()
        {
            //todo
        }
    }
    


    protected override void InitModel()
    {
        //To do: init
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 1 });
        equipDatas.Add(new EquipData() { Name = "母狗", AnimalType = 1 });
        equipDatas.Add(new EquipData() { Name = "公猫", AnimalType = 2 });
        equipDatas.Add(new EquipData() { Name = "母猫", AnimalType = 2 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 3 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 3 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 4 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 4 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 5 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 5 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 6 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 6 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 7 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 7 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 8 });
        equipDatas.Add(new EquipData() { Name = "公狗", AnimalType = 8 });
        UniLogger.Log($"animal_slot_viewTableManager.Count = {animal_slot_viewTableManager.Count}");
        animal_slot_viewTableManager.Each(EachAnimalSlot);
    }

    protected override void OnSetVisible(bool visible)
    {
         
    }

    private bool EachAnimalSlot(AutoGenTableItem<animal_slot_viewTableTemplate, animal_slot_viewTableModel> item, int index)
    {
       UniLogger.Log($"index = {index}");
       item.Model.RefreshData(equipDatas[index]);
       item.Template.RefreshUI(equipDatas[index]);
       if(index >= equipDatas.Count - 1) return true;
       return false;
    }
}

public class EquipData
{
    public string Name;
    public int AnimalType;
    // public string Icon;
    // public string Quality;
}