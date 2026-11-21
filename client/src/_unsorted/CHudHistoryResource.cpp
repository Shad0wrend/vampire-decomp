// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100f0110 size=0x1e
#include "CHudHistoryResource.h"

// VC6 writes CHudHistoryResource's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudHistoryResource *pcd_emit_100f0110() { return new CHudHistoryResource; }

// TARGET: ??_GCHudHistoryResource@@UAEPAXI@Z
// END FUNCTION
