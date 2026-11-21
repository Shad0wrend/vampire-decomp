// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bcc80 size=0x1e
#include "vgui2__TreeNodeText.h"

// VC6 writes vgui2::TreeNodeText's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeNodeText *pcd_emit_101bcc80() { return new vgui2::TreeNodeText; }

// TARGET: ??_GTreeNodeText@vgui2@@UAEPAXI@Z
// END FUNCTION
