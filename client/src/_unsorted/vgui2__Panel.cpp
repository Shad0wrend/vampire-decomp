// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101a9460 size=0x1e
#include "vgui2__Panel.h"

// VC6 writes vgui2::Panel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Panel *pcd_emit_101a9460() { return new vgui2::Panel; }

// TARGET: ??_GPanel@vgui2@@UAEPAXI@Z
// END FUNCTION
