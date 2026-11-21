// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008710 size=0x1e
#include "C_WeaponMelee_Fists.h"

// VC6 writes C_WeaponMelee_Fists's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Fists *pcd_emit_10008710() { return new C_WeaponMelee_Fists; }

// TARGET: ??_GC_WeaponMelee_Fists@@UAEPAXI@Z
// END FUNCTION
