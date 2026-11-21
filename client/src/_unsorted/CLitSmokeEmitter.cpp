// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b5470 size=0x1e
#include "CLitSmokeEmitter.h"

// VC6 writes CLitSmokeEmitter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLitSmokeEmitter *pcd_emit_100b5470() { return new CLitSmokeEmitter; }

// TARGET: ??_GCLitSmokeEmitter@@UAEPAXI@Z
// END FUNCTION
