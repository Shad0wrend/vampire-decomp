// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10024b90 size=0x1e
#include "C_ItemKShrekHubOneKey.h"

// VC6 writes C_ItemKShrekHubOneKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKShrekHubOneKey *pcd_emit_10024b90() { return new C_ItemKShrekHubOneKey; }

// TARGET: ??_GC_ItemKShrekHubOneKey@@UAEPAXI@Z
// END FUNCTION
