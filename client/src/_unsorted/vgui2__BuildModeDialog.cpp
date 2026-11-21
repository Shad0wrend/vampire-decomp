// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c3a40 size=0x1e
#include "vgui2__BuildModeDialog.h"

// VC6 writes vgui2::BuildModeDialog's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::BuildModeDialog *pcd_emit_101c3a40() { return new vgui2::BuildModeDialog; }

// TARGET: ??_GBuildModeDialog@vgui2@@UAEPAXI@Z
// END FUNCTION
