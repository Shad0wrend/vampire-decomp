// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d91f0 size=0x1e
#include "CEffectsList.h"

// VC6 writes CEffectsList's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEffectsList *pcd_emit_100d91f0() { return new CEffectsList; }

// TARGET: ??_GCEffectsList@@UAEPAXI@Z
// END FUNCTION
