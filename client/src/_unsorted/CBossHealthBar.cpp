// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004d5a0 size=0x1e
#include "CBossHealthBar.h"

// VC6 writes CBossHealthBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBossHealthBar *pcd_emit_1004d5a0() { return new CBossHealthBar; }

// TARGET: ??_GCBossHealthBar@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1004dbd0 size=0x1
#include "CBossHealthBar.h"
void CBossHealthBar::vfunc97()
{
}
// END FUNCTION
