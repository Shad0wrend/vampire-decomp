// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c38f0 size=0x1e
#include "C_BaseFlex.h"

// VC6 writes C_BaseFlex's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseFlex *pcd_emit_100c38f0() { return new C_BaseFlex; }

// TARGET: ??_GC_BaseFlex@@UAEPAXI@Z
// END FUNCTION
