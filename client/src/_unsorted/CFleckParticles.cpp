// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1002e710 size=0x1e
#include "CFleckParticles.h"

// VC6 writes CFleckParticles's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFleckParticles *pcd_emit_1002e710() { return new CFleckParticles; }

// TARGET: ??_GCFleckParticles@@UAEPAXI@Z
// END FUNCTION
