// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000f510 size=0x1e
#include "C_WeaponIWritten.h"

// VC6 writes C_WeaponIWritten's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIWritten *pcd_emit_1000f510() { return new C_WeaponIWritten; }

// TARGET: ??_GC_WeaponIWritten@@UAEPAXI@Z
// END FUNCTION
