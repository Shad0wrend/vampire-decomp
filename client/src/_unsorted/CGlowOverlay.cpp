// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100eed70 size=0x1e
#include "CGlowOverlay.h"

// VC6 writes CGlowOverlay's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CGlowOverlay *pcd_emit_100eed70() { return new CGlowOverlay; }

// TARGET: ??_GCGlowOverlay@@UAEPAXI@Z
// END FUNCTION
