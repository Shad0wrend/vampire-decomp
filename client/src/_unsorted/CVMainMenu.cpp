// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10065840 size=0x1e
#include "CVMainMenu.h"

// VC6 writes CVMainMenu's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVMainMenu *pcd_emit_10065840() { return new CVMainMenu; }

// TARGET: ??_GCVMainMenu@@UAEPAXI@Z
// END FUNCTION
