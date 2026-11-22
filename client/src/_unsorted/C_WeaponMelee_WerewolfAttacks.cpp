// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000a700 size=0x6
#include "C_WeaponMelee_WerewolfAttacks.h"
namespace lifted {
extern char g_10272a60;
}
int C_WeaponMelee_WerewolfAttacks::vfunc17()
{
    return (int)&lifted::g_10272a60;
}
// END FUNCTION

// FUNCTION: 0x1000a790 size=0x1e
#include "C_WeaponMelee_WerewolfAttacks.h"

// VC6 writes C_WeaponMelee_WerewolfAttacks's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_WerewolfAttacks *pcd_emit_1000a790() { return new C_WeaponMelee_WerewolfAttacks; }

// TARGET: ??_GC_WeaponMelee_WerewolfAttacks@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000a7b0 size=0x6
#include "C_WeaponMelee_WerewolfAttacks.h"
namespace lifted {
extern char g_10274f4c;
}
int C_WeaponMelee_WerewolfAttacks::vfunc16()
{
    return (int)&lifted::g_10274f4c;
}
// END FUNCTION

// FUNCTION: 0x1000a7c0 size=0x3
#include "C_WeaponMelee_WerewolfAttacks.h"
int C_WeaponMelee_WerewolfAttacks::vfunc15()
{
    return 0;
}
// END FUNCTION
