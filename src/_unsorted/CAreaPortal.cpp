// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010c3f0 size=0x1e
#include "CAreaPortal.h"

void sub_100aa7b0(void *p);

// TARGET: CAreaPortal::vfunc5
CAreaPortal *CAreaPortal::vfunc5(unsigned int flags)
{
	sub_100156b8();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010c420 size=0x8
#include "CAreaPortal.h"

void CAreaPortal::vfunc103()
{
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1010c520 size=0x29
struct CUnit1010c520 {
    void sub_1010c520(int a, int b, int c, int d);
    void sub_1010c5d0();
};

void CUnit1010c520::sub_1010c520(int a, int b, int c, int d)
{
    if (c == 1) {
        *(int *)((char *)this + 0x458) = c;
        sub_1010c5d0();
        return;
    }
    if (c == 0) {
        *(int *)((char *)this + 0x458) = c;
        sub_1010c5d0();
    }
}
// END FUNCTION
