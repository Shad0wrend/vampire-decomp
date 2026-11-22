// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000d490 size=0x1e
#include "C_WeaponRanged.h"

// VC6 writes C_WeaponRanged's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged *pcd_emit_1000d490() { return new C_WeaponRanged; }

// TARGET: ??_GC_WeaponRanged@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000d4c0 size=0x3
#include "C_WeaponRanged.h"
int C_WeaponRanged::vfunc15()
{
    return 0;
}
// END FUNCTION
