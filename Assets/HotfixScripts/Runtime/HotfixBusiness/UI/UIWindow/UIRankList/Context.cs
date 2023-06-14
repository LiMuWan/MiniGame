using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

class Context
{
    public int SelectedIndex = -1;
    public Action<int> OnCellClicked;
}
