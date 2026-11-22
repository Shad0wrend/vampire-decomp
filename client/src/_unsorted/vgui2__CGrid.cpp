// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101666f0 size=0x1e
#include "vgui2__CGrid.h"

// VC6 writes vgui2::CGrid's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::CGrid *pcd_emit_101666f0() { return new vgui2::CGrid; }

// TARGET: ??_GCGrid@vgui2@@UAEPAXI@Z
// END FUNCTION
