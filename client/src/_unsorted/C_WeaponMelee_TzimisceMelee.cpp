// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000a510 size=0x1e
#include "C_WeaponMelee_TzimisceMelee.h"

// VC6 writes C_WeaponMelee_TzimisceMelee's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_TzimisceMelee *pcd_emit_1000a510() { return new C_WeaponMelee_TzimisceMelee; }

// TARGET: ??_GC_WeaponMelee_TzimisceMelee@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000a540 size=0x3
#include "C_WeaponMelee_TzimisceMelee.h"
int C_WeaponMelee_TzimisceMelee::vfunc15()
{
    return 0;
}
// END FUNCTION
