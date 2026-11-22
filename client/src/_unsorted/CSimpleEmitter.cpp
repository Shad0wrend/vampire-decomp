// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10118130 size=0x1e
#include "CSimpleEmitter.h"

// VC6 writes CSimpleEmitter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSimpleEmitter *pcd_emit_10118130() { return new CSimpleEmitter; }

// TARGET: ??_GCSimpleEmitter@@UAEPAXI@Z
// END FUNCTION
