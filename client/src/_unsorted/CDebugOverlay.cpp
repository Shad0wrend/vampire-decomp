// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10165730 size=0x1e
#include "CDebugOverlay.h"

// VC6 writes CDebugOverlay's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDebugOverlay *pcd_emit_10165730() { return new CDebugOverlay; }

// TARGET: ??_GCDebugOverlay@@UAEPAXI@Z
// END FUNCTION
