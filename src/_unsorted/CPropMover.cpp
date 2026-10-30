// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101928a0 size=0x8
#include "CPropMover.h"
namespace lifted {
int sub_10006703();
}
int CPropMover::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
}
// END FUNCTION

// FUNCTION: 0x101928c0 size=0x1e
#include "CPropMover.h"

void sub_100aa7b0(void *p);

// TARGET: CPropMover::vfunc5
CPropMover *CPropMover::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
