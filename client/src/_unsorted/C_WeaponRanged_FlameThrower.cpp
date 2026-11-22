// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10027530 size=0x6
#include "C_WeaponRanged_FlameThrower.h"
namespace lifted {
extern char g_1027a990;
}
int C_WeaponRanged_FlameThrower::vfunc17()
{
    return (int)&lifted::g_1027a990;
}
// END FUNCTION

// FUNCTION: 0x10027590 size=0x6
#include "C_WeaponRanged_FlameThrower.h"
namespace lifted {
extern char g_1027a9ac;
}
int C_WeaponRanged_FlameThrower::vfunc16()
{
    return (int)&lifted::g_1027a9ac;
}
// END FUNCTION

// FUNCTION: 0x100275a0 size=0x3
#include "C_WeaponRanged_FlameThrower.h"
int C_WeaponRanged_FlameThrower::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10027840 size=0x1e
#include "C_WeaponRanged_FlameThrower.h"

// VC6 writes C_WeaponRanged_FlameThrower's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_FlameThrower *pcd_emit_10027840() { return new C_WeaponRanged_FlameThrower; }

// TARGET: ??_GC_WeaponRanged_FlameThrower@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10027980 size=0xb
#include "C_WeaponRanged_FlameThrower.h"
void C_WeaponRanged_FlameThrower::vfunc143()
{
    *(int *)((char *)this + 0x156c) = -1;
}
// END FUNCTION
