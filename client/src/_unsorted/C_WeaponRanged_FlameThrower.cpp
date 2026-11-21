// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10027840 size=0x1e
#include "C_WeaponRanged_FlameThrower.h"

// VC6 writes C_WeaponRanged_FlameThrower's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_FlameThrower *pcd_emit_10027840() { return new C_WeaponRanged_FlameThrower; }

// TARGET: ??_GC_WeaponRanged_FlameThrower@@UAEPAXI@Z
// END FUNCTION
