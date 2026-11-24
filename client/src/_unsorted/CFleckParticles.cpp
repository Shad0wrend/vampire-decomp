// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1002e710 size=0x1e
#include "CFleckParticles.h"

// VC6 writes CFleckParticles's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFleckParticles *pcd_emit_1002e710(const CFleckParticles &other) { return new CFleckParticles(other); }

// TARGET: ??_GCFleckParticles@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100e5880 size=0x2f
#include "CFleckParticles.h"
struct ISub { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(int, int, int, int, int, int, int); };
void CFleckParticles::vfunc13(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
	((ISub *)((char *)this + 0x78))->v4(a0, a1, a2, a3, a4, a5, a6);
}
// END FUNCTION
