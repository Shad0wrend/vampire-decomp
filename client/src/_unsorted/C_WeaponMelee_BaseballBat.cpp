// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007f90 size=0x1e
#include "C_WeaponMelee_BaseballBat.h"

// VC6 writes C_WeaponMelee_BaseballBat's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_BaseballBat *pcd_emit_10007f90() { return new C_WeaponMelee_BaseballBat; }

// TARGET: ??_GC_WeaponMelee_BaseballBat@@UAEPAXI@Z
// END FUNCTION
