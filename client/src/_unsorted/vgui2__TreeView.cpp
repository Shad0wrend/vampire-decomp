// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bc700 size=0x1e
#include "vgui2__TreeView.h"

// VC6 writes vgui2::TreeView's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeView *pcd_emit_101bc700() { return new vgui2::TreeView; }

// TARGET: ??_GTreeView@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bd3d0 size=0x7
#include "vgui2__TreeView.h"
int vgui2::TreeView::vfunc108()
{
    return *(int *)((char *)this + 0x90);
}
// END FUNCTION

// FUNCTION: 0x101bd870 size=0x7
#include "vgui2__TreeView.h"
int vgui2::TreeView::vfunc119()
{
    return *(int *)((char *)this + 0x94);
}
// END FUNCTION

// FUNCTION: 0x101be150 size=0x6
#include "vgui2__TreeView.h"
namespace lifted {
extern char g_102d95c0;
}
int vgui2::TreeView::vfunc102()
{
    return (int)&lifted::g_102d95c0;
}
// END FUNCTION
