// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b9c30 size=0x1e
#include "vgui2__TextImage.h"

// VC6 writes vgui2::TextImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TextImage *pcd_emit_101b9c30() { return new vgui2::TextImage; }

// TARGET: ??_GTextImage@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b9ec0 size=0x4
#include "vgui2__TextImage.h"
int vgui2::TextImage::vfunc31()
{
    return *(int *)((char *)this + 0x24);
}
// END FUNCTION
