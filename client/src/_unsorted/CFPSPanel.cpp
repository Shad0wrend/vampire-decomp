// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10165fb0 size=0x1e
#include "CFPSPanel.h"

// VC6 writes CFPSPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFPSPanel *pcd_emit_10165fb0() { return new CFPSPanel; }

// TARGET: ??_GCFPSPanel@@UAEPAXI@Z
// END FUNCTION
