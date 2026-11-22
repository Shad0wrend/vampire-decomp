// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000b410 size=0x1e
#include "C_WeaponMelee_Tzimisce2Claw.h"

// VC6 writes C_WeaponMelee_Tzimisce2Claw's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Tzimisce2Claw *pcd_emit_1000b410() { return new C_WeaponMelee_Tzimisce2Claw; }

// TARGET: ??_GC_WeaponMelee_Tzimisce2Claw@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000b440 size=0x3
#include "C_WeaponMelee_Tzimisce2Claw.h"
int C_WeaponMelee_Tzimisce2Claw::vfunc15()
{
    return 0;
}
// END FUNCTION
