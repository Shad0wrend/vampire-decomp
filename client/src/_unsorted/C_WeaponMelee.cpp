// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007d10 size=0x1e
#include "C_WeaponMelee.h"

// VC6 writes C_WeaponMelee's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee *pcd_emit_10007d10() { return new C_WeaponMelee; }

// TARGET: ??_GC_WeaponMelee@@UAEPAXI@Z
// END FUNCTION
