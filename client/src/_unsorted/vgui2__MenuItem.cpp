// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c6c50 size=0x1e
#include "vgui2__MenuItem.h"

// VC6 writes vgui2::MenuItem's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::MenuItem *pcd_emit_101c6c50() { return new vgui2::MenuItem; }

// TARGET: ??_GMenuItem@vgui2@@UAEPAXI@Z
// END FUNCTION
