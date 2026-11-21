// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b5b20 size=0x1e
#include "CFireOverlay.h"

// VC6 writes CFireOverlay's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFireOverlay *pcd_emit_100b5b20() { return new CFireOverlay; }

// TARGET: ??_GCFireOverlay@@UAEPAXI@Z
// END FUNCTION
