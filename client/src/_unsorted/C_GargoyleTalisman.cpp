// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10014790 size=0x1e
#include "C_GargoyleTalisman.h"

// VC6 writes C_GargoyleTalisman's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_GargoyleTalisman *pcd_emit_10014790() { return new C_GargoyleTalisman; }

// TARGET: ??_GC_GargoyleTalisman@@UAEPAXI@Z
// END FUNCTION
