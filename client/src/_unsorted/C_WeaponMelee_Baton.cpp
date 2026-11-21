// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009b10 size=0x1e
#include "C_WeaponMelee_Baton.h"

// VC6 writes C_WeaponMelee_Baton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Baton *pcd_emit_10009b10() { return new C_WeaponMelee_Baton; }

// TARGET: ??_GC_WeaponMelee_Baton@@UAEPAXI@Z
// END FUNCTION
