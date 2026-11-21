// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10034ee0 size=0x1e
#include "C_TEBreakModel.h"

// VC6 writes C_TEBreakModel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBreakModel *pcd_emit_10034ee0() { return new C_TEBreakModel; }

// TARGET: ??_GC_TEBreakModel@@UAEPAXI@Z
// END FUNCTION
