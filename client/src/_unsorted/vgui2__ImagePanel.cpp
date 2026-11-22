// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c5950 size=0x1e
#include "vgui2__ImagePanel.h"

// VC6 writes vgui2::ImagePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ImagePanel *pcd_emit_101c5950() { return new vgui2::ImagePanel; }

// TARGET: ??_GImagePanel@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c59d0 size=0x4
#include "vgui2__ImagePanel.h"
int vgui2::ImagePanel::vfunc108()
{
    return *(int *)((char *)this + 0x58);
}
// END FUNCTION

// FUNCTION: 0x101c5b60 size=0x6
#include "vgui2__ImagePanel.h"
namespace lifted {
extern char g_102da7a8;
}
int vgui2::ImagePanel::vfunc102()
{
    return (int)&lifted::g_102da7a8;
}
// END FUNCTION
