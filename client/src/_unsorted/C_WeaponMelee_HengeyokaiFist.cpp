// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000be10 size=0x1e
#include "C_WeaponMelee_HengeyokaiFist.h"

// VC6 writes C_WeaponMelee_HengeyokaiFist's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_HengeyokaiFist *pcd_emit_1000be10() { return new C_WeaponMelee_HengeyokaiFist; }

// TARGET: ??_GC_WeaponMelee_HengeyokaiFist@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000be40 size=0x3
#include "C_WeaponMelee_HengeyokaiFist.h"
int C_WeaponMelee_HengeyokaiFist::vfunc15()
{
    return 0;
}
// END FUNCTION
