// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bc350 size=0x1e
#include "vgui2__ToggleButton.h"

// VC6 writes vgui2::ToggleButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ToggleButton *pcd_emit_101bc350() { return new vgui2::ToggleButton; }

// TARGET: ??_GToggleButton@vgui2@@UAEPAXI@Z
// END FUNCTION
