// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10050200 size=0x1e
#include "CFeedBar.h"

// VC6 writes CFeedBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFeedBar *pcd_emit_10050200() { return new CFeedBar; }

// TARGET: ??_GCFeedBar@@UAEPAXI@Z
// END FUNCTION
