// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000a010 size=0x1e
#include "C_WeaponMelee_Claws_Protean4.h"

// VC6 writes C_WeaponMelee_Claws_Protean4's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Claws_Protean4 *pcd_emit_1000a010() { return new C_WeaponMelee_Claws_Protean4; }

// TARGET: ??_GC_WeaponMelee_Claws_Protean4@@UAEPAXI@Z
// END FUNCTION
