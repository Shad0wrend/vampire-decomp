// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10050a80 size=0x1e
#include "CFrenzyBar.h"

// VC6 writes CFrenzyBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFrenzyBar *pcd_emit_10050a80() { return new CFrenzyBar; }

// TARGET: ??_GCFrenzyBar@@UAEPAXI@Z
// END FUNCTION
