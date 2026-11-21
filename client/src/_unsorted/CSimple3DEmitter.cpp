// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10115c20 size=0x1e
#include "CSimple3DEmitter.h"

// VC6 writes CSimple3DEmitter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSimple3DEmitter *pcd_emit_10115c20() { return new CSimple3DEmitter; }

// TARGET: ??_GCSimple3DEmitter@@UAEPAXI@Z
// END FUNCTION
