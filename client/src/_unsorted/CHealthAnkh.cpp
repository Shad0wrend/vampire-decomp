// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10051050 size=0x1e
#include "CHealthAnkh.h"

// VC6 writes CHealthAnkh's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHealthAnkh *pcd_emit_10051050() { return new CHealthAnkh; }

// TARGET: ??_GCHealthAnkh@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10051ad0 size=0x1
#include "CHealthAnkh.h"
void CHealthAnkh::vfunc97()
{
}
// END FUNCTION
