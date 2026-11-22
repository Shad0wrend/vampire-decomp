// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101beee0 size=0x1e
#include "vgui2__ScrollBar.h"

// VC6 writes vgui2::ScrollBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ScrollBar *pcd_emit_101beee0() { return new vgui2::ScrollBar; }

// TARGET: ??_GScrollBar@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bf200 size=0x4
#include "vgui2__ScrollBar.h"
int vgui2::ScrollBar::vfunc117()
{
    return *(int *)((char *)this + 0x60);
}
// END FUNCTION

// FUNCTION: 0x101bf410 size=0x6
#include "vgui2__ScrollBar.h"
namespace lifted {
extern char g_102d9788;
}
int vgui2::ScrollBar::vfunc102()
{
    return (int)&lifted::g_102d9788;
}
// END FUNCTION
