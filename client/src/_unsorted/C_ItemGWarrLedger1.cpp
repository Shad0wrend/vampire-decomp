// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001dd00 size=0x6
#include "C_ItemGWarrLedger1.h"
namespace lifted {
extern char g_102737f0;
}
int C_ItemGWarrLedger1::vfunc17()
{
    return (int)&lifted::g_102737f0;
}
// END FUNCTION

// FUNCTION: 0x1001dd90 size=0x1e
#include "C_ItemGWarrLedger1.h"

// VC6 writes C_ItemGWarrLedger1's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWarrLedger1 *pcd_emit_1001dd90() { return new C_ItemGWarrLedger1; }

// TARGET: ??_GC_ItemGWarrLedger1@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001ddb0 size=0x6
#include "C_ItemGWarrLedger1.h"
namespace lifted {
extern char g_102743a8;
}
int C_ItemGWarrLedger1::vfunc16()
{
    return (int)&lifted::g_102743a8;
}
// END FUNCTION

// FUNCTION: 0x1001ddc0 size=0x3
#include "C_ItemGWarrLedger1.h"
int C_ItemGWarrLedger1::vfunc15()
{
    return 0;
}
// END FUNCTION
