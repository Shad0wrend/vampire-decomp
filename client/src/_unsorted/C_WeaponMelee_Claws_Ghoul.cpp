// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000cd10 size=0x1e
#include "C_WeaponMelee_Claws_Ghoul.h"

// VC6 writes C_WeaponMelee_Claws_Ghoul's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Claws_Ghoul *pcd_emit_1000cd10() { return new C_WeaponMelee_Claws_Ghoul; }

// TARGET: ??_GC_WeaponMelee_Claws_Ghoul@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000cd40 size=0x3
#include "C_WeaponMelee_Claws_Ghoul.h"
int C_WeaponMelee_Claws_Ghoul::vfunc15()
{
    return 0;
}
// END FUNCTION
