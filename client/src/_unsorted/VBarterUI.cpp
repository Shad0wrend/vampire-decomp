// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016b720 size=0x1e
#include "VBarterUI.h"

// VC6 writes VBarterUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterUI *pcd_emit_1016b720() { return new VBarterUI; }

// TARGET: ??_GVBarterUI@@UAEPAXI@Z
// END FUNCTION
