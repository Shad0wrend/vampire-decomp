// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001c900 size=0x6
#include "C_ItemGWirelessCamera1.h"
namespace lifted {
extern char g_10273710;
}
int C_ItemGWirelessCamera1::vfunc17()
{
    return (int)&lifted::g_10273710;
}
// END FUNCTION

// FUNCTION: 0x1001c990 size=0x1e
#include "C_ItemGWirelessCamera1.h"

// VC6 writes C_ItemGWirelessCamera1's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWirelessCamera1 *pcd_emit_1001c990() { return new C_ItemGWirelessCamera1; }

// TARGET: ??_GC_ItemGWirelessCamera1@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001c9c0 size=0x3
#include "C_ItemGWirelessCamera1.h"
int C_ItemGWirelessCamera1::vfunc15()
{
    return 0;
}
// END FUNCTION
