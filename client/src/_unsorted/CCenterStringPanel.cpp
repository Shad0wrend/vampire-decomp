// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10164c30 size=0x1e
#include "CCenterStringPanel.h"

// VC6 writes CCenterStringPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CCenterStringPanel *pcd_emit_10164c30() { return new CCenterStringPanel; }

// TARGET: ??_GCCenterStringPanel@@UAEPAXI@Z
// END FUNCTION
