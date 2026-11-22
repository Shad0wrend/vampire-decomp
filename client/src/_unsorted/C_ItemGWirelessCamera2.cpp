// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001cb80 size=0x6
#include "C_ItemGWirelessCamera2.h"
namespace lifted {
extern char g_1027372c;
}
int C_ItemGWirelessCamera2::vfunc17()
{
    return (int)&lifted::g_1027372c;
}
// END FUNCTION

// FUNCTION: 0x1001cc10 size=0x1e
#include "C_ItemGWirelessCamera2.h"

// VC6 writes C_ItemGWirelessCamera2's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWirelessCamera2 *pcd_emit_1001cc10() { return new C_ItemGWirelessCamera2; }

// TARGET: ??_GC_ItemGWirelessCamera2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001cc30 size=0x6
#include "C_ItemGWirelessCamera2.h"
namespace lifted {
extern char g_1027443c;
}
int C_ItemGWirelessCamera2::vfunc16()
{
    return (int)&lifted::g_1027443c;
}
// END FUNCTION

// FUNCTION: 0x1001cc40 size=0x3
#include "C_ItemGWirelessCamera2.h"
int C_ItemGWirelessCamera2::vfunc15()
{
    return 0;
}
// END FUNCTION
