// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018cc50 size=0x1e
#include "VStatusLabel.h"

// VC6 writes VStatusLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VStatusLabel *pcd_emit_1018cc50() { return new VStatusLabel; }

// TARGET: ??_GVStatusLabel@@UAEPAXI@Z
// END FUNCTION
