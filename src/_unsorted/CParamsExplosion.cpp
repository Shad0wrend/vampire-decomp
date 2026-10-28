// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10104290 size=0x6
#include "CParamsExplosion.h"
namespace lifted {
extern char g_1056ab10;
}
datamap_t * CParamsExplosion::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056ab10);
}
// END FUNCTION

// FUNCTION: 0x10104370 size=0x1e
#include "CParamsExplosion.h"

void sub_100aa7b0(void *p);

// TARGET: CParamsExplosion::vfunc5
CParamsExplosion *CParamsExplosion::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101043a0 size=0x13
#include "CParamsExplosion.h"
void __fastcall sub_10001f28(CParamsExplosion *self);

// TARGET: CParamsExplosion::vfunc103
void CParamsExplosion::vfunc103()
{
	sub_10001f28(this);
	vfunc104();
}
// END FUNCTION
