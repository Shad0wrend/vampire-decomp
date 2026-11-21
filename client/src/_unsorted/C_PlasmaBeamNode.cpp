// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100057a0 size=0x1e
#include "C_PlasmaBeamNode.h"

// VC6 writes C_PlasmaBeamNode's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_PlasmaBeamNode *pcd_emit_100057a0() { return new C_PlasmaBeamNode; }

// TARGET: ??_GC_PlasmaBeamNode@@UAEPAXI@Z
// END FUNCTION
