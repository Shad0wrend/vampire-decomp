// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000f790 size=0x1e
#include "C_WeaponIGeneric.h"

// VC6 writes C_WeaponIGeneric's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIGeneric *pcd_emit_1000f790() { return new C_WeaponIGeneric; }

// TARGET: ??_GC_WeaponIGeneric@@UAEPAXI@Z
// END FUNCTION
