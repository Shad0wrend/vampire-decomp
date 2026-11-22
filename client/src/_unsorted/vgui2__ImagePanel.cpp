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

// FUNCTION: 0x101c5ae0 size=0x23
#include "vgui2__ImagePanel.h"
namespace lifted {
extern char g_102da754;
extern char g_1067b8a0;
int sub_101ab860();
int sub_101d3192(int, int, int, int);
}
int vgui2::ImagePanel::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_1067b8a0, 0x400, (int)&lifted::g_102da754, lifted::sub_101ab860());
    return (int)&lifted::g_1067b8a0;
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
