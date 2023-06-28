using System;
using FancyScrollView;

namespace Arena
{
    class Context : FancyGridViewContext
    {
        public int SelectedIndex = -1;
        public Action<int> OnCellClicked;
    }
}
