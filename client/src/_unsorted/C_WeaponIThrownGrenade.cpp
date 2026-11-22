// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10016310 size=0x1e
#include "C_WeaponIThrownGrenade.h"

// VC6 writes C_WeaponIThrownGrenade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIThrownGrenade *pcd_emit_10016310() { return new C_WeaponIThrownGrenade; }

// TARGET: ??_GC_WeaponIThrownGrenade@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10016340 size=0x3
#include "C_WeaponIThrownGrenade.h"
int C_WeaponIThrownGrenade::vfunc15()
{
    return 0;
}
// END FUNCTION
