// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003df80 size=0x1e
#include "CTEParticleRenderer.h"

// VC6 writes CTEParticleRenderer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTEParticleRenderer *pcd_emit_1003df80() { return new CTEParticleRenderer; }

// TARGET: ??_GCTEParticleRenderer@@UAEPAXI@Z
// END FUNCTION
