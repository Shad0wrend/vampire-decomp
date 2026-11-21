// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007140 size=0x1e
#include "C_WeaponRanged_Thaumaturgy.h"

// VC6 writes C_WeaponRanged_Thaumaturgy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Thaumaturgy *pcd_emit_10007140() { return new C_WeaponRanged_Thaumaturgy; }

// TARGET: ??_GC_WeaponRanged_Thaumaturgy@@UAEPAXI@Z
// END FUNCTION
