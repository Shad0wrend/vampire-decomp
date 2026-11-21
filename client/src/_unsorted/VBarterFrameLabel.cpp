// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016b050 size=0x1e
#include "VBarterFrameLabel.h"

// VC6 writes VBarterFrameLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterFrameLabel *pcd_emit_1016b050() { return new VBarterFrameLabel; }

// TARGET: ??_GVBarterFrameLabel@@UAEPAXI@Z
// END FUNCTION
