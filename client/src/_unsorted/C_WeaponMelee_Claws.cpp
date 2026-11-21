// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008490 size=0x1e
#include "C_WeaponMelee_Claws.h"

// VC6 writes C_WeaponMelee_Claws's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Claws *pcd_emit_10008490() { return new C_WeaponMelee_Claws; }

// TARGET: ??_GC_WeaponMelee_Claws@@UAEPAXI@Z
// END FUNCTION
