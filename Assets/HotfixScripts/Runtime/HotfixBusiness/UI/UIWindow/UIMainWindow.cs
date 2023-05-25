using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;

//Donot use base.[MethodName] 
public partial class UIMainWindow
{
    public class item_bagTableModel : TableItemModel<item_bagTableTemplate>
    {
        public item_bagTableModel() { }
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