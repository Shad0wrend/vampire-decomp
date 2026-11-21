// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10040d40 size=0x1e
#include "C_TEUserTracer.h"

// VC6 writes C_TEUserTracer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEUserTracer *pcd_emit_10040d40() { return new C_TEUserTracer; }

// TARGET: ??_GC_TEUserTracer@@UAEPAXI@Z
// END FUNCTION
