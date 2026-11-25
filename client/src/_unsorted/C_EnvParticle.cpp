// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ae5b0 size=0x6
#include "C_EnvParticle.h"
namespace lifted {
extern char g_102b2c20;
}
int C_EnvParticle::vfunc16()
{
    return (int)&lifted::g_102b2c20;
}
// END FUNCTION

// FUNCTION: 0x100ae5c0 size=0x3
#include "C_EnvParticle.h"
int C_EnvParticle::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100aeac0 size=0x1e
#include "C_EnvParticle.h"

// VC6 writes C_EnvParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_EnvParticle *pcd_emit_100aeac0(const C_EnvParticle &other) { return new C_EnvParticle(other); }

// TARGET: ??_GC_EnvParticle@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100aec70 size=0x69
#include "C_EnvParticle.h"
#include "Vector.h"

void C_EnvParticle::vfunc122(int p)
{
	Vector *v = (Vector *)p;
	Vector &a = *(Vector *)((char *)this + 0x2b4);
	Vector &b = *(Vector *)((char *)this + 0x23c);
	Vector &c = *(Vector *)((char *)this + 0x254);
	c = b = a = *v;
}
// END FUNCTION
