// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101251b0 size=0x1e
#include "CEntityRandomProxy.h"

// VC6 writes CEntityRandomProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEntityRandomProxy *pcd_emit_101251b0() { return new CEntityRandomProxy; }

// TARGET: ??_GCEntityRandomProxy@@UAEPAXI@Z
// END FUNCTION
