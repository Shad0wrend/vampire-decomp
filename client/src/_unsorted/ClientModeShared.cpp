// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d3f50 size=0x1e
#include "ClientModeShared.h"

// VC6 writes ClientModeShared's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
ClientModeShared *pcd_emit_100d3f50() { return new ClientModeShared; }

// TARGET: ??_GClientModeShared@@UAEPAXI@Z
// END FUNCTION
