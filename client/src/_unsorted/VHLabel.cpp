// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018ca50 size=0x1e
#include "VHLabel.h"

// VC6 writes VHLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHLabel *pcd_emit_1018ca50() { return new VHLabel; }

// TARGET: ??_GVHLabel@@UAEPAXI@Z
// END FUNCTION
