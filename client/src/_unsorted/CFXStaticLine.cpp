// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e6610 size=0x1e
#include "CFXStaticLine.h"

// VC6 writes CFXStaticLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXStaticLine *pcd_emit_100e6610() { return new CFXStaticLine; }

// TARGET: ??_GCFXStaticLine@@UAEPAXI@Z
// END FUNCTION
