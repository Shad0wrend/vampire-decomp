// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008990 size=0x1e
#include "C_WeaponMelee_FireAxe.h"

// VC6 writes C_WeaponMelee_FireAxe's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_FireAxe *pcd_emit_10008990() { return new C_WeaponMelee_FireAxe; }

// TARGET: ??_GC_WeaponMelee_FireAxe@@UAEPAXI@Z
// END FUNCTION
