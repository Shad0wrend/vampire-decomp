// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10100f70 size=0x1
// TARGET: sub_10100f70
void __fastcall sub_10100f70(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x10101340 size=0x2b
#include "CEnvFade.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CEnvFade::vfunc5
CEnvFade *CEnvFade::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x458))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
