// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006d910 size=0x21
#include "CBaseCineCam.h"

struct V3 {
	float x, y, z;
};

float *CBaseCineCam::vfunc193(float *out)
{
	*(V3 *)out = *(V3 *)((char *)this + 0x5ec);
	return out;
}
// END FUNCTION

// FUNCTION: 0x1006d950 size=0x36
#include "CBaseCineCam.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseCineCam *CBaseCineCam::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
