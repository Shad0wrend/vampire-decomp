// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c84a0 size=0x1e
#include "vgui2__PropertySheet.h"

// VC6 writes vgui2::PropertySheet's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::PropertySheet *pcd_emit_101c84a0() { return new vgui2::PropertySheet; }

// TARGET: ??_GPropertySheet@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c89f0 size=0x4
#include "vgui2__PropertySheet.h"
int vgui2::PropertySheet::vfunc112()
{
    return *(int *)((char *)this + 0x70);
}
// END FUNCTION

// FUNCTION: 0x101c8a00 size=0x4
#include "vgui2__PropertySheet.h"
int vgui2::PropertySheet::vfunc119()
{
    return *(int *)((char *)this + 0x74);
}
// END FUNCTION

// FUNCTION: 0x101c8a10 size=0x4
#include "vgui2__PropertySheet.h"
int vgui2::PropertySheet::vfunc123()
{
    return *(int *)((char *)this + 0x58);
}
// END FUNCTION
