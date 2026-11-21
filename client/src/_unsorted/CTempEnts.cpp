// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003b570 size=0x1e
#include "CTempEnts.h"

// VC6 writes CTempEnts's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTempEnts *pcd_emit_1003b570() { return new CTempEnts; }

// TARGET: ??_GCTempEnts@@UAEPAXI@Z
// END FUNCTION
