// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10040370 size=0x1e
#include "C_TETParticleAttached.h"

// VC6 writes C_TETParticleAttached's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TETParticleAttached *pcd_emit_10040370() { return new C_TETParticleAttached; }

// TARGET: ??_GC_TETParticleAttached@@UAEPAXI@Z
// END FUNCTION
