// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10039ed0 size=0x1e
#include "C_TEImpact.h"

// VC6 writes C_TEImpact's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEImpact *pcd_emit_10039ed0() { return new C_TEImpact; }

// TARGET: ??_GC_TEImpact@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10039f10 size=0x1
#include "C_TEImpact.h"
void C_TEImpact::vfunc13()
{
}
// END FUNCTION
