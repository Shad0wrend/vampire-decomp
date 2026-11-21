// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001c990 size=0x1e
#include "C_ItemGWirelessCamera1.h"

// VC6 writes C_ItemGWirelessCamera1's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWirelessCamera1 *pcd_emit_1001c990() { return new C_ItemGWirelessCamera1; }

// TARGET: ??_GC_ItemGWirelessCamera1@@UAEPAXI@Z
// END FUNCTION
