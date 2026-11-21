// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10028390 size=0x1e
#include "C_WeaponGravityGun.h"

// VC6 writes C_WeaponGravityGun's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponGravityGun *pcd_emit_10028390() { return new C_WeaponGravityGun; }

// TARGET: ??_GC_WeaponGravityGun@@UAEPAXI@Z
// END FUNCTION
