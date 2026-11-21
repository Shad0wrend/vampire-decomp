// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10016810 size=0x1e
#include "C_WeaponThrown_Chang_Energy_Ball.h"

// VC6 writes C_WeaponThrown_Chang_Energy_Ball's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponThrown_Chang_Energy_Ball *pcd_emit_10016810() { return new C_WeaponThrown_Chang_Energy_Ball; }

// TARGET: ??_GC_WeaponThrown_Chang_Energy_Ball@@UAEPAXI@Z
// END FUNCTION
