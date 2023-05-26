using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;

//Donot use base.[MethodName] 
public partial class UIMainWindow
{
    public class animal_slot_viewTableModel : TableItemModel<animal_slot_viewTableTemplate>
    {
        public animal_slot_viewTableModel() { }
        public override void InitModel()
        {
            //todo
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
    }

    protected override void OnSetVisible(bool visible)
    {

    }
}