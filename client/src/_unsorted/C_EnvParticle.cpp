// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100aeac0 size=0x1e
#include "C_EnvParticle.h"

// VC6 writes C_EnvParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_EnvParticle *pcd_emit_100aeac0() { return new C_EnvParticle; }

// TARGET: ??_GC_EnvParticle@@UAEPAXI@Z
// END FUNCTION
