// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b68e0 size=0x1e
#include "vgui2__Image.h"

// VC6 writes vgui2::Image's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Image *pcd_emit_101b68e0() { return new vgui2::Image; }

// TARGET: ??_GImage@vgui2@@UAEPAXI@Z
// END FUNCTION
