// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103dc950 size=0x1d
#include "CNPC_VWolfMorph.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1094028c;
extern B g_10936c74;
int CNPC_VWolfMorph::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1094028c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103dcdc0 size=0x8
#include "CNPC_VWolfMorph.h"
int CNPC_VWolfMorph::vfunc375(int unused) { return 0x1145; }
// END FUNCTION

// FUNCTION: 0x103dcf20 size=0x1e
#include "CNPC_VWolfMorph.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VWolfMorph::vfunc5
CNPC_VWolfMorph *CNPC_VWolfMorph::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
