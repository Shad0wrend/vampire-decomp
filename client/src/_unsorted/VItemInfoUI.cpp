// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101847f0 size=0x1e
#include "VItemInfoUI.h"

// VC6 writes VItemInfoUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VItemInfoUI *pcd_emit_101847f0() { return new VItemInfoUI; }

// TARGET: ??_GVItemInfoUI@@UAEPAXI@Z
// END FUNCTION
