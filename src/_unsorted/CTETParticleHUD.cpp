// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10069f40 size=0x1e
#include "CTETParticleHUD.h"

// TARGET: CTETParticleHUD::vfunc2
CTETParticleHUD *CTETParticleHUD::vfunc2(unsigned int flags)
{
	sub_10006a5a();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10069fd0 size=0x39
#include "CTETParticleHUD.h"
#include "IVEngineServerFull.h"


void CTETParticleHUD::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION
