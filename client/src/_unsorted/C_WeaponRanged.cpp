// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000d490 size=0x1e
#include "C_WeaponRanged.h"

// VC6 writes C_WeaponRanged's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged *pcd_emit_1000d490() { return new C_WeaponRanged; }

// TARGET: ??_GC_WeaponRanged@@UAEPAXI@Z
// END FUNCTION
