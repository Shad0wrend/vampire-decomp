// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c6c50 size=0x1e
#include "vgui2__MenuItem.h"

// VC6 writes vgui2::MenuItem's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::MenuItem *pcd_emit_101c6c50() { return new vgui2::MenuItem; }

// TARGET: ??_GMenuItem@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c7480 size=0x5
#include "vgui2__MenuItem.h"
int vgui2::MenuItem::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101c7650 size=0x6
#include "vgui2__MenuItem.h"
namespace lifted {
extern char g_102daaa8;
}
int vgui2::MenuItem::vfunc102()
{
    return (int)&lifted::g_102daaa8;
}
// END FUNCTION
