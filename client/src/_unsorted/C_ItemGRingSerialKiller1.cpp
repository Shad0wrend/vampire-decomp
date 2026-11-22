// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020000 size=0x6
#include "C_ItemGRingSerialKiller1.h"
namespace lifted {
extern char g_10273978;
}
int C_ItemGRingSerialKiller1::vfunc17()
{
    return (int)&lifted::g_10273978;
}
// END FUNCTION

// FUNCTION: 0x10020090 size=0x1e
#include "C_ItemGRingSerialKiller1.h"

// VC6 writes C_ItemGRingSerialKiller1's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGRingSerialKiller1 *pcd_emit_10020090() { return new C_ItemGRingSerialKiller1; }

// TARGET: ??_GC_ItemGRingSerialKiller1@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100200b0 size=0x6
#include "C_ItemGRingSerialKiller1.h"
namespace lifted {
extern char g_10274280;
}
int C_ItemGRingSerialKiller1::vfunc16()
{
    return (int)&lifted::g_10274280;
}
// END FUNCTION

// FUNCTION: 0x100200c0 size=0x3
#include "C_ItemGRingSerialKiller1.h"
int C_ItemGRingSerialKiller1::vfunc15()
{
    return 0;
}
// END FUNCTION
