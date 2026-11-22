// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10044f50 size=0x1e
#include "CFXDiscreetLine.h"

// VC6 writes CFXDiscreetLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXDiscreetLine *pcd_emit_10044f50() { return new CFXDiscreetLine; }

// TARGET: ??_GCFXDiscreetLine@@UAEPAXI@Z
// END FUNCTION
