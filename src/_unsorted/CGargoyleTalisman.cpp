// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f9010 size=0x35
#include "CGargoyleTalisman.h"

// TARGET: CGargoyleTalisman::vfunc300
void CGargoyleTalisman::vfunc300()
{
    char *pChar = sub_10252240();
    if (pChar) {
        char *pOwner = sub_10010ea6();
        *(unsigned int *)(pChar + 0xe38) &= ~*(unsigned int *)(pOwner + 0x4fed0);
    }
    sub_10005b69();
}
// END FUNCTION

// FUNCTION: 0x1040a0c0 size=0x1e
#include "CGargoyleTalisman.h"

void sub_100aa7b0(void *p);

// TARGET: CGargoyleTalisman::vfunc5
CGargoyleTalisman *CGargoyleTalisman::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
