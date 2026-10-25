// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f030 size=0x3f
#include "vampire.h"
#include "CSprite.h"

// TARGET: CSprite::vfunc173
void CSprite::vfunc173(int a, int b, int nUseType, int d)
{
    int bOff = *(int *)((char *)this + 0x19c) != 0x40;
    if (sub_100a98f0(nUseType, bOff))
    {
        if (bOff)
        {
            sub_1042ef40();
            return;
        }
        sub_1042ef70();
    }
}
// END FUNCTION

// FUNCTION: 0x1042f150 size=0x1e
#include "CSprite.h"

void sub_100aa7b0(void *p);

// TARGET: CSprite::vfunc5
CSprite *CSprite::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
