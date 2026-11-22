// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001ce90 size=0x1e
#include "C_ItemGWirelessCamera3.h"

// VC6 writes C_ItemGWirelessCamera3's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWirelessCamera3 *pcd_emit_1001ce90() { return new C_ItemGWirelessCamera3; }

// TARGET: ??_GC_ItemGWirelessCamera3@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001cec0 size=0x3
#include "C_ItemGWirelessCamera3.h"
int C_ItemGWirelessCamera3::vfunc15()
{
    return 0;
}
// END FUNCTION
