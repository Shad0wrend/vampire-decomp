// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000e390 size=0x1e
#include "C_WeaponRanged_Rifle_M37.h"

// VC6 writes C_WeaponRanged_Rifle_M37's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_M37 *pcd_emit_1000e390() { return new C_WeaponRanged_Rifle_M37; }

// TARGET: ??_GC_WeaponRanged_Rifle_M37@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000e3c0 size=0x3
#include "C_WeaponRanged_Rifle_M37.h"
int C_WeaponRanged_Rifle_M37::vfunc15()
{
    return 0;
}
// END FUNCTION
