// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bcd80 size=0x1e
#include "vgui2__TreeNodeImage.h"

// VC6 writes vgui2::TreeNodeImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeNodeImage *pcd_emit_101bcd80() { return new vgui2::TreeNodeImage; }

// TARGET: ??_GTreeNodeImage@vgui2@@UAEPAXI@Z
// END FUNCTION
