using System;
using FancyScrollView;

namespace Rank
{
    class Context:FancyScrollRectContext
    {
        public int SelectedIndex = -1;
        public Action<int> OnCellClicked;
    }
}
