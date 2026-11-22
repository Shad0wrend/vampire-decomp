// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101873a0 size=0x1e
#include "VMapScreenUI.h"

// VC6 writes VMapScreenUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VMapScreenUI *pcd_emit_101873a0() { return new VMapScreenUI; }

// TARGET: ??_GVMapScreenUI@@UAEPAXI@Z
// END FUNCTION
