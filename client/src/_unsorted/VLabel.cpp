// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018c270 size=0x1e
#include "VLabel.h"

// VC6 writes VLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VLabel *pcd_emit_1018c270() { return new VLabel; }

// TARGET: ??_GVLabel@@UAEPAXI@Z
// END FUNCTION
