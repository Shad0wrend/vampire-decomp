// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009390 size=0x1e
#include "C_WeaponMelee_Stake.h"

// VC6 writes C_WeaponMelee_Stake's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Stake *pcd_emit_10009390() { return new C_WeaponMelee_Stake; }

// TARGET: ??_GC_WeaponMelee_Stake@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100093c0 size=0x3
#include "C_WeaponMelee_Stake.h"
int C_WeaponMelee_Stake::vfunc15()
{
    return 0;
}
// END FUNCTION
