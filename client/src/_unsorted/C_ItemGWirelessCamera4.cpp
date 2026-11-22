// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001d110 size=0x1e
#include "C_ItemGWirelessCamera4.h"

// VC6 writes C_ItemGWirelessCamera4's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWirelessCamera4 *pcd_emit_1001d110() { return new C_ItemGWirelessCamera4; }

// TARGET: ??_GC_ItemGWirelessCamera4@@UAEPAXI@Z
// END FUNCTION
