// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10032dd0 size=0x1e
#include "C_TEBeamEnts.h"

// VC6 writes C_TEBeamEnts's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBeamEnts *pcd_emit_10032dd0() { return new C_TEBeamEnts; }

// TARGET: ??_GC_TEBeamEnts@@UAEPAXI@Z
// END FUNCTION
