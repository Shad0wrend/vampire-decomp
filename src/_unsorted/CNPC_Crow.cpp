// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10359240 size=0x1d
#include "CNPC_Crow.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a070;
extern B g_10936c74;
int CNPC_Crow::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a070.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10359b70 size=0x1e
#include "CNPC_Crow.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_Crow::vfunc5
CNPC_Crow *CNPC_Crow::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
