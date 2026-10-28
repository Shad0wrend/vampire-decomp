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

// FUNCTION: 0x10069ae0 size=0x39
#include "CTETParticleAttached.h"
#include "IVEngineServerFull.h"


void CTETParticleAttached::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION
