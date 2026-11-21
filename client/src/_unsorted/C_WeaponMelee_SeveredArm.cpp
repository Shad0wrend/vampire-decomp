// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009d90 size=0x1e
#include "C_WeaponMelee_SeveredArm.h"

// VC6 writes C_WeaponMelee_SeveredArm's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_SeveredArm *pcd_emit_10009d90() { return new C_WeaponMelee_SeveredArm; }

// TARGET: ??_GC_WeaponMelee_SeveredArm@@UAEPAXI@Z
// END FUNCTION
