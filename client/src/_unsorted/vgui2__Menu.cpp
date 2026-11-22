// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bf4d0 size=0x1e
#include "vgui2__Menu.h"

// VC6 writes vgui2::Menu's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Menu *pcd_emit_101bf4d0() { return new vgui2::Menu; }

// TARGET: ??_GMenu@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c0750 size=0x4
#include "vgui2__Menu.h"
int vgui2::Menu::vfunc129()
{
    return *(int *)((char *)this + 0x64);
}
// END FUNCTION

// FUNCTION: 0x101c0e60 size=0x6
#include "vgui2__Menu.h"
namespace lifted {
extern char g_102d99b0;
}
int vgui2::Menu::vfunc102()
{
    return (int)&lifted::g_102d99b0;
}
// END FUNCTION
