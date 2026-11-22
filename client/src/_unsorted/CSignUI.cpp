// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100609a0 size=0x1e
#include "CSignUI.h"

// VC6 writes CSignUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSignUI *pcd_emit_100609a0() { return new CSignUI; }

// TARGET: ??_GCSignUI@@UAEPAXI@Z
// END FUNCTION
