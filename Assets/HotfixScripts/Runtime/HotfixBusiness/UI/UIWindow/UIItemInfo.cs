using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;

//Donot use base.[MethodName] 
public partial class UIItemInfo
{
     public class PropertiesTableModel : TableItemModel<PropertiesTableTemplate>
    {
        public PropertiesTableModel(){}
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