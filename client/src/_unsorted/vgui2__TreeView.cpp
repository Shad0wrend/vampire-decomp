// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bc700 size=0x1e
#include "vgui2__TreeView.h"

// VC6 writes vgui2::TreeView's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeView *pcd_emit_101bc700() { return new vgui2::TreeView; }

// TARGET: ??_GTreeView@vgui2@@UAEPAXI@Z
// END FUNCTION
