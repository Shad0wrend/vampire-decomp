// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000cf90 size=0x1e
#include "C_WeaponRanged_Rifle_RemingtonBach.h"

// VC6 writes C_WeaponRanged_Rifle_RemingtonBach's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_RemingtonBach *pcd_emit_1000cf90() { return new C_WeaponRanged_Rifle_RemingtonBach; }

// TARGET: ??_GC_WeaponRanged_Rifle_RemingtonBach@@UAEPAXI@Z
// END FUNCTION
