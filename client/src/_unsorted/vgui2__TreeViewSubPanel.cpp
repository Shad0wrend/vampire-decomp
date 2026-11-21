// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bc6e0 size=0x1e
#include "vgui2__TreeViewSubPanel.h"

// VC6 writes vgui2::TreeViewSubPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeViewSubPanel *pcd_emit_101bc6e0() { return new vgui2::TreeViewSubPanel; }

// TARGET: ??_GTreeViewSubPanel@vgui2@@UAEPAXI@Z
// END FUNCTION
