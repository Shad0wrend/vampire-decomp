// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10362c90 size=0x1e
#include "CNPC_VBach.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VBach::vfunc5
CNPC_VBach *CNPC_VBach::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10362df0 size=0x1d
#include "CNPC_VBach.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a608;
extern B g_10936c74;
int CNPC_VBach::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a608.sub_10012300(x));
}
// END FUNCTION
