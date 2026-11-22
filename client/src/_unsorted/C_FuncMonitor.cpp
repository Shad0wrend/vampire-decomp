// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bba60 size=0x1e
#include "C_FuncMonitor.h"

// VC6 writes C_FuncMonitor's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_FuncMonitor *pcd_emit_100bba60() { return new C_FuncMonitor; }

// TARGET: ??_GC_FuncMonitor@@UAEPAXI@Z
// END FUNCTION
