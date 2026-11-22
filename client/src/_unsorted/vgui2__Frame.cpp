// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b85b0 size=0x1e
#include "vgui2__Frame.h"

// VC6 writes vgui2::Frame's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Frame *pcd_emit_101b85b0() { return new vgui2::Frame; }

// TARGET: ??_GFrame@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b95e0 size=0x3
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc91(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101b9600 size=0x1
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc95()
{
}
// END FUNCTION
