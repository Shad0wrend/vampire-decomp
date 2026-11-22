// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bb410 size=0x1e
#include "CDustEffect.h"

// VC6 writes CDustEffect's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDustEffect *pcd_emit_100bb410() { return new CDustEffect; }

// TARGET: ??_GCDustEffect@@UAEPAXI@Z
// END FUNCTION
