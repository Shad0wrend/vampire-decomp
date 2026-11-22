// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000a980 size=0x6
#include "C_WeaponMelee_SabbatLeaderAttack.h"
namespace lifted {
extern char g_10272a7c;
}
int C_WeaponMelee_SabbatLeaderAttack::vfunc17()
{
    return (int)&lifted::g_10272a7c;
}
// END FUNCTION

// FUNCTION: 0x1000aa10 size=0x1e
#include "C_WeaponMelee_SabbatLeaderAttack.h"

// VC6 writes C_WeaponMelee_SabbatLeaderAttack's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_SabbatLeaderAttack *pcd_emit_1000aa10() { return new C_WeaponMelee_SabbatLeaderAttack; }

// TARGET: ??_GC_WeaponMelee_SabbatLeaderAttack@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000aa40 size=0x3
#include "C_WeaponMelee_SabbatLeaderAttack.h"
int C_WeaponMelee_SabbatLeaderAttack::vfunc15()
{
    return 0;
}
// END FUNCTION
