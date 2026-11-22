// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101189d0 size=0x1e
#include "CFireSmokeEffect.h"

// VC6 writes CFireSmokeEffect's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFireSmokeEffect *pcd_emit_101189d0() { return new CFireSmokeEffect; }

// TARGET: ??_GCFireSmokeEffect@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10118a80 size=0x3
#include "CFireSmokeEffect.h"
void CFireSmokeEffect::vfunc11(int a0, int a1)
{
}
// END FUNCTION
