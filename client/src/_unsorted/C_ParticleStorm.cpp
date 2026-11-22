// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10004400 size=0x1e
#include "C_ParticleStorm.h"

// VC6 writes C_ParticleStorm's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ParticleStorm *pcd_emit_10004400() { return new C_ParticleStorm; }

// TARGET: ??_GC_ParticleStorm@@UAEPAXI@Z
// END FUNCTION
