// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009110 size=0x1e
#include "C_WeaponMelee_OccultBlade.h"

// VC6 writes C_WeaponMelee_OccultBlade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_OccultBlade *pcd_emit_10009110() { return new C_WeaponMelee_OccultBlade; }

// TARGET: ??_GC_WeaponMelee_OccultBlade@@UAEPAXI@Z
// END FUNCTION
