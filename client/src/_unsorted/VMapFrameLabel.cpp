// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101871f0 size=0x1e
#include "VMapFrameLabel.h"

// VC6 writes VMapFrameLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VMapFrameLabel *pcd_emit_101871f0() { return new VMapFrameLabel; }

// TARGET: ??_GVMapFrameLabel@@UAEPAXI@Z
// END FUNCTION
