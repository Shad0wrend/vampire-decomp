// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b8420 size=0x5
#include "vgui2__FrameSystemButton.h"
int vgui2::FrameSystemButton::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b8590 size=0x1e
#include "vgui2__FrameSystemButton.h"

// VC6 writes vgui2::FrameSystemButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::FrameSystemButton *pcd_emit_101b8590() { return new vgui2::FrameSystemButton; }

// TARGET: ??_GFrameSystemButton@vgui2@@UAEPAXI@Z
// END FUNCTION
