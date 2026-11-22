// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e4e30 size=0x1e
#include "CExplosionParticle.h"

// VC6 writes CExplosionParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CExplosionParticle *pcd_emit_100e4e30() { return new CExplosionParticle; }

// TARGET: ??_GCExplosionParticle@@UAEPAXI@Z
// END FUNCTION
