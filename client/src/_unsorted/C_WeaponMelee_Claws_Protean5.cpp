// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000a290 size=0x1e
#include "C_WeaponMelee_Claws_Protean5.h"

// VC6 writes C_WeaponMelee_Claws_Protean5's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Claws_Protean5 *pcd_emit_1000a290() { return new C_WeaponMelee_Claws_Protean5; }

// TARGET: ??_GC_WeaponMelee_Claws_Protean5@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000a2c0 size=0x3
#include "C_WeaponMelee_Claws_Protean5.h"
int C_WeaponMelee_Claws_Protean5::vfunc15()
{
    return 0;
}
// END FUNCTION
