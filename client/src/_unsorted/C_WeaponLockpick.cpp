// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000fa10 size=0x1e
#include "C_WeaponLockpick.h"

// VC6 writes C_WeaponLockpick's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponLockpick *pcd_emit_1000fa10() { return new C_WeaponLockpick; }

// TARGET: ??_GC_WeaponLockpick@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000fa40 size=0x3
#include "C_WeaponLockpick.h"
int C_WeaponLockpick::vfunc15()
{
    return 0;
}
// END FUNCTION
