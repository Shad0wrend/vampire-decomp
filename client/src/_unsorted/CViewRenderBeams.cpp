// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10193320 size=0x1e
#include "CViewRenderBeams.h"

// VC6 writes CViewRenderBeams's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CViewRenderBeams *pcd_emit_10193320() { return new CViewRenderBeams; }

// TARGET: ??_GCViewRenderBeams@@UAEPAXI@Z
// END FUNCTION
