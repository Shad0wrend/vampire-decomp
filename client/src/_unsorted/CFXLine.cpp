// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10045740 size=0x1e
#include "CFXLine.h"

// VC6 writes CFXLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXLine *pcd_emit_10045740() { return new CFXLine; }

// TARGET: ??_GCFXLine@@UAEPAXI@Z
// END FUNCTION
