// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000b690 size=0x1e
#include "C_WeaponRanged_Tzimisce2Head.h"

// VC6 writes C_WeaponRanged_Tzimisce2Head's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Tzimisce2Head *pcd_emit_1000b690() { return new C_WeaponRanged_Tzimisce2Head; }

// TARGET: ??_GC_WeaponRanged_Tzimisce2Head@@UAEPAXI@Z
// END FUNCTION
