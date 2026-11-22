// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10045ee0 size=0x1e
#include "CTrailParticles.h"

// VC6 writes CTrailParticles's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTrailParticles *pcd_emit_10045ee0() { return new CTrailParticles; }

// TARGET: ??_GCTrailParticles@@UAEPAXI@Z
// END FUNCTION
