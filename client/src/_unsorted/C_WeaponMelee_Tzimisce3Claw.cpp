// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000b910 size=0x1e
#include "C_WeaponMelee_Tzimisce3Claw.h"

// VC6 writes C_WeaponMelee_Tzimisce3Claw's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Tzimisce3Claw *pcd_emit_1000b910() { return new C_WeaponMelee_Tzimisce3Claw; }

// TARGET: ??_GC_WeaponMelee_Tzimisce3Claw@@UAEPAXI@Z
// END FUNCTION
