// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1002f460 size=0x1e
#include "CDustParticle.h"

// VC6 writes CDustParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDustParticle *pcd_emit_1002f460() { return new CDustParticle; }

// TARGET: ??_GCDustParticle@@UAEPAXI@Z
// END FUNCTION
