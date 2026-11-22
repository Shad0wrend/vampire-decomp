// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10036cf0 size=0x1e
#include "CExplosionOverlay.h"

// VC6 writes CExplosionOverlay's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CExplosionOverlay *pcd_emit_10036cf0() { return new CExplosionOverlay; }

// TARGET: ??_GCExplosionOverlay@@UAEPAXI@Z
// END FUNCTION
