// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005f2a0 size=0x1e
#include "CMoneyBar.h"

// VC6 writes CMoneyBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMoneyBar *pcd_emit_1005f2a0() { return new CMoneyBar; }

// TARGET: ??_GCMoneyBar@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005f540 size=0x1
#include "CMoneyBar.h"
void CMoneyBar::vfunc97()
{
}
// END FUNCTION
