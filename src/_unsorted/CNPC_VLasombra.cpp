// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10388e20 size=0x1e
#include "CNPC_VLasombra.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VLasombra::vfunc5
CNPC_VLasombra *CNPC_VLasombra::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10388f80 size=0x1d
#include "CNPC_VLasombra.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b680;
extern B g_10936c74;
int CNPC_VLasombra::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b680.sub_10012300(x));
}
// END FUNCTION
