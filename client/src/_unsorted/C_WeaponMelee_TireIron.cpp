// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009890 size=0x1e
#include "C_WeaponMelee_TireIron.h"

// VC6 writes C_WeaponMelee_TireIron's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_TireIron *pcd_emit_10009890() { return new C_WeaponMelee_TireIron; }

// TARGET: ??_GC_WeaponMelee_TireIron@@UAEPAXI@Z
// END FUNCTION
