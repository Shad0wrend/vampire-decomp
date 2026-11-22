// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001cc10 size=0x1e
#include "C_ItemGWirelessCamera2.h"

// VC6 writes C_ItemGWirelessCamera2's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWirelessCamera2 *pcd_emit_1001cc10() { return new C_ItemGWirelessCamera2; }

// TARGET: ??_GC_ItemGWirelessCamera2@@UAEPAXI@Z
// END FUNCTION
