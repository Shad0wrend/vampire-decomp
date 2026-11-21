// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017c950 size=0x1e
#include "VHButton.h"

// VC6 writes VHButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHButton *pcd_emit_1017c950() { return new VHButton; }

// TARGET: ??_GVHButton@@UAEPAXI@Z
// END FUNCTION
