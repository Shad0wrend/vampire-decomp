// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e1ae0 size=0x1e
#include "CEffectsClient.h"

// VC6 writes CEffectsClient's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEffectsClient *pcd_emit_100e1ae0() { return new CEffectsClient; }

// TARGET: ??_GCEffectsClient@@UAEPAXI@Z
// END FUNCTION
