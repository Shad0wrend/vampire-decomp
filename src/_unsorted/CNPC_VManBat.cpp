// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10389df0 size=0x1e
#include "CNPC_VManBat.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VManBat::vfunc5
CNPC_VManBat *CNPC_VManBat::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10389f50 size=0x1d
#include "CNPC_VManBat.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b89c;
extern B g_10936c74;
int CNPC_VManBat::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b89c.sub_10012300(x));
}
// END FUNCTION
