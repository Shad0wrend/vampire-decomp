// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007a6f0 size=0x1e
#include "CBaseAnimatedTextureProxy.h"

// VC6 writes CBaseAnimatedTextureProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBaseAnimatedTextureProxy *pcd_emit_1007a6f0() { return new CBaseAnimatedTextureProxy; }

// TARGET: ??_GCBaseAnimatedTextureProxy@@UAEPAXI@Z
// END FUNCTION
