// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10367870 size=0x6
extern void *g_1093a740;

void *sub_10367870(void)
{
    return &g_1093a740;
}
// END FUNCTION

// FUNCTION: 0x10367890 size=0x6
extern char *g_1062f280;

char *sub_10367890(void)
{
    return g_1062f280;
}
// END FUNCTION

// FUNCTION: 0x103678b0 size=0x1e
#include "CNPC_VBrujah.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VBrujah::vfunc5
CNPC_VBrujah *CNPC_VBrujah::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103679b0 size=0x6
extern char g_1062f278;

char sub_103679b0(void)
{
    return g_1062f278;
}
// END FUNCTION

// FUNCTION: 0x10367a10 size=0x1d
#include "CNPC_VBrujah.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a788;
extern B g_10936c74;
int CNPC_VBrujah::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a788.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10367f00 size=0x6
#include "CNPC_VBrujah.h"
int CNPC_VBrujah::vfunc138()
{
    return 0x10;
}
// END FUNCTION
