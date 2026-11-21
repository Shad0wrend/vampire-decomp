// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bb3b0 size=0x1e
#include "vgui2__PropertyPage.h"

// VC6 writes vgui2::PropertyPage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::PropertyPage *pcd_emit_101bb3b0() { return new vgui2::PropertyPage; }

// TARGET: ??_GPropertyPage@vgui2@@UAEPAXI@Z
// END FUNCTION
