// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e5d20 size=0x1e
#include "CFXQuad.h"

// VC6 writes CFXQuad's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXQuad *pcd_emit_100e5d20() { return new CFXQuad; }

// TARGET: ??_GCFXQuad@@UAEPAXI@Z
// END FUNCTION
