// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b2080 size=0x1e
#include "vgui2__Label.h"

// VC6 writes vgui2::Label's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Label *pcd_emit_101b2080() { return new vgui2::Label; }

// TARGET: ??_GLabel@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b2ab0 size=0x4
#include "vgui2__Label.h"
int vgui2::Label::vfunc127()
{
    return *(int *)((char *)this + 0x5c);
}
// END FUNCTION
