// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001df80 size=0x6
#include "C_ItemGWarrLedger2.h"
namespace lifted {
extern char g_1027380c;
}
int C_ItemGWarrLedger2::vfunc17()
{
    return (int)&lifted::g_1027380c;
}
// END FUNCTION

// FUNCTION: 0x1001e010 size=0x1e
#include "C_ItemGWarrLedger2.h"

// VC6 writes C_ItemGWarrLedger2's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWarrLedger2 *pcd_emit_1001e010() { return new C_ItemGWarrLedger2; }

// TARGET: ??_GC_ItemGWarrLedger2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001e040 size=0x3
#include "C_ItemGWarrLedger2.h"
int C_ItemGWarrLedger2::vfunc15()
{
    return 0;
}
// END FUNCTION
