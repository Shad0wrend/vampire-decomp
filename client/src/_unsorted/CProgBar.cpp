// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005fb20 size=0x1e
#include "CProgBar.h"

// VC6 writes CProgBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CProgBar *pcd_emit_1005fb20() { return new CProgBar; }

// TARGET: ??_GCProgBar@@UAEPAXI@Z
// END FUNCTION
