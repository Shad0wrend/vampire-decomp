// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10065390 size=0x1e
#include "CVMenuButton.h"

// VC6 writes CVMenuButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVMenuButton *pcd_emit_10065390() { return new CVMenuButton; }

// TARGET: ??_GCVMenuButton@@UAEPAXI@Z
// END FUNCTION
