// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101aed00 size=0x1e
#include "vgui2__ClickPanel.h"

// VC6 writes vgui2::ClickPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ClickPanel *pcd_emit_101aed00() { return new vgui2::ClickPanel; }

// TARGET: ??_GClickPanel@vgui2@@UAEPAXI@Z
// END FUNCTION
