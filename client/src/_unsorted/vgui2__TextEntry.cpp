// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101acd90 size=0x1e
#include "vgui2__TextEntry.h"

// VC6 writes vgui2::TextEntry's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TextEntry *pcd_emit_101acd90() { return new vgui2::TextEntry; }

// TARGET: ??_GTextEntry@vgui2@@UAEPAXI@Z
// END FUNCTION
