// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b8360 size=0x1e
#include "vgui2__FrameButton.h"

// VC6 writes vgui2::FrameButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::FrameButton *pcd_emit_101b8360() { return new vgui2::FrameButton; }

// TARGET: ??_GFrameButton@vgui2@@UAEPAXI@Z
// END FUNCTION
