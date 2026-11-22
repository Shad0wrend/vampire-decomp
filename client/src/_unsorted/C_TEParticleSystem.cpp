// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003df30 size=0x1e
#include "C_TEParticleSystem.h"

// VC6 writes C_TEParticleSystem's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEParticleSystem *pcd_emit_1003df30() { return new C_TEParticleSystem; }

// TARGET: ??_GC_TEParticleSystem@@UAEPAXI@Z
// END FUNCTION
