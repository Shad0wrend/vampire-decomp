// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000b190 size=0x1e
#include "C_WeaponMelee_AVampBlade.h"

// VC6 writes C_WeaponMelee_AVampBlade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_AVampBlade *pcd_emit_1000b190() { return new C_WeaponMelee_AVampBlade; }

// TARGET: ??_GC_WeaponMelee_AVampBlade@@UAEPAXI@Z
// END FUNCTION
