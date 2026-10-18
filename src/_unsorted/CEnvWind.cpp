// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fe6b0 size=0x12
#include "CEnvWind.h"
void CEnvWind::vfunc113()
{
	sub_100a53d0(0);
	CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x100feab0 size=0x1e
#include "CEnvWind.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvWind::vfunc5
CEnvWind *CEnvWind::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
