// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10170eb0 size=0x1e
#include "VAnarchyLabel.h"

// VC6 writes VAnarchyLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VAnarchyLabel *pcd_emit_10170eb0() { return new VAnarchyLabel; }

// TARGET: ??_GVAnarchyLabel@@UAEPAXI@Z
// END FUNCTION
