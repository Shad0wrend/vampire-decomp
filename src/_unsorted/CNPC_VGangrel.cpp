// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10377070 size=0x6
extern void *g_1093aef8;

void *sub_10377070(void)
{
    return &g_1093aef8;
}
// END FUNCTION

// FUNCTION: 0x10377090 size=0x6
extern char *g_10639098;

char *sub_10377090(void)
{
    return g_10639098;
}
// END FUNCTION

// FUNCTION: 0x103770b0 size=0x1e
#include "CNPC_VGangrel.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VGangrel::vfunc5
CNPC_VGangrel *CNPC_VGangrel::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10377210 size=0x1d
#include "CNPC_VGangrel.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093aed8;
extern B g_10936c74;
int CNPC_VGangrel::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093aed8.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10377700 size=0x6
#include "CNPC_VGangrel.h"
int CNPC_VGangrel::vfunc138()
{
    return 0x11;
}
// END FUNCTION
