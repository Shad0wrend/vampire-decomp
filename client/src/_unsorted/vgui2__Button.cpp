// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b36f0 size=0x1e
#include "vgui2__Button.h"

// VC6 writes vgui2::Button's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Button *pcd_emit_101b36f0() { return new vgui2::Button; }

// TARGET: ??_GButton@vgui2@@UAEPAXI@Z
// END FUNCTION
