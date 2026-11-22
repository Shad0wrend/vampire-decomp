// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000e610 size=0x1e
#include "C_WeaponRanged_Smg_Mac10.h"

// VC6 writes C_WeaponRanged_Smg_Mac10's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Smg_Mac10 *pcd_emit_1000e610() { return new C_WeaponRanged_Smg_Mac10; }

// TARGET: ??_GC_WeaponRanged_Smg_Mac10@@UAEPAXI@Z
// END FUNCTION
