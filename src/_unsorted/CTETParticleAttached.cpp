// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10069a50 size=0x1e
#include "CTETParticleAttached.h"

// TARGET: CTETParticleAttached::vfunc2
CTETParticleAttached *CTETParticleAttached::vfunc2(unsigned int flags)
{
	sub_100021e9();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10069aa0 size=0x1
#include "CTETParticleAttached.h"
void CTETParticleAttached::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x10069ae0 size=0x39
#include "CTETParticleAttached.h"
#include "IVEngineServerFull.h"


void CTETParticleAttached::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10069ba0 size=0x6
#include "CTETParticleAttached.h"
namespace lifted {
extern char g_106c6798;
}
ServerClass * CTETParticleAttached::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c6798);
}
// END FUNCTION
