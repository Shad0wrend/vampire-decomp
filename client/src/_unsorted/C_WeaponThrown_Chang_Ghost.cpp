// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10016a90 size=0x1e
#include "C_WeaponThrown_Chang_Ghost.h"

// VC6 writes C_WeaponThrown_Chang_Ghost's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponThrown_Chang_Ghost *pcd_emit_10016a90() { return new C_WeaponThrown_Chang_Ghost; }

// TARGET: ??_GC_WeaponThrown_Chang_Ghost@@UAEPAXI@Z
// END FUNCTION
