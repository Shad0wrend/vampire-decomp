// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000fc90 size=0x1e
#include "C_WeaponUnarmed.h"

// VC6 writes C_WeaponUnarmed's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponUnarmed *pcd_emit_1000fc90() { return new C_WeaponUnarmed; }

// TARGET: ??_GC_WeaponUnarmed@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000fcc0 size=0x3
#include "C_WeaponUnarmed.h"
int C_WeaponUnarmed::vfunc15()
{
    return 0;
}
// END FUNCTION
