// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020280 size=0x6
#include "C_ItemGRingSerialKiller2.h"
namespace lifted {
extern char g_10273994;
}
int C_ItemGRingSerialKiller2::vfunc17()
{
    return (int)&lifted::g_10273994;
}
// END FUNCTION

// FUNCTION: 0x10020310 size=0x1e
#include "C_ItemGRingSerialKiller2.h"

// VC6 writes C_ItemGRingSerialKiller2's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGRingSerialKiller2 *pcd_emit_10020310() { return new C_ItemGRingSerialKiller2; }

// TARGET: ??_GC_ItemGRingSerialKiller2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10020330 size=0x6
#include "C_ItemGRingSerialKiller2.h"
namespace lifted {
extern char g_10274264;
}
int C_ItemGRingSerialKiller2::vfunc16()
{
    return (int)&lifted::g_10274264;
}
// END FUNCTION

// FUNCTION: 0x10020340 size=0x3
#include "C_ItemGRingSerialKiller2.h"
int C_ItemGRingSerialKiller2::vfunc15()
{
    return 0;
}
// END FUNCTION
