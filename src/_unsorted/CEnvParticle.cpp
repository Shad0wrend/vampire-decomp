// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fae40 size=0x1e
#include "CEnvParticle.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvParticle::vfunc5
CEnvParticle *CEnvParticle::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100fb7d0 size=0xb
void CEnvParticle::vfunc242()
{
	m_unk484 = 0;
}
// END FUNCTION
