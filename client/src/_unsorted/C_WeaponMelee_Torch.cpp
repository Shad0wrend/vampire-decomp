// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10027060 size=0x1e
#include "C_WeaponMelee_Torch.h"

// VC6 writes C_WeaponMelee_Torch's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Torch *pcd_emit_10027060() { return new C_WeaponMelee_Torch; }

// TARGET: ??_GC_WeaponMelee_Torch@@UAEPAXI@Z
// END FUNCTION
