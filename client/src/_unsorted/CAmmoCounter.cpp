// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004bbd0 size=0x1e
#include "CAmmoCounter.h"

// VC6 writes CAmmoCounter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CAmmoCounter *pcd_emit_1004bbd0() { return new CAmmoCounter; }

// TARGET: ??_GCAmmoCounter@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1004bc30 size=0xb
#include "CAmmoCounter.h"
namespace lifted {
extern int g_103edde0;
}
void CAmmoCounter::vfunc112()
{
    lifted::g_103edde0 = 0;
}
// END FUNCTION

// FUNCTION: 0x1004c2a0 size=0x1
#include "CAmmoCounter.h"
void CAmmoCounter::vfunc97()
{
}
// END FUNCTION
