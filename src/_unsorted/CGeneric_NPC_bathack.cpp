// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035ace0 size=0x1d
#include "CGeneric_NPC_bathack.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a314;
extern B g_10936c74;
int CGeneric_NPC_bathack::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a314.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1035adb0 size=0x1e
#include "CGeneric_NPC_bathack.h"

void sub_100aa7b0(void *p);

// TARGET: CGeneric_NPC_bathack::vfunc5
CGeneric_NPC_bathack *CGeneric_NPC_bathack::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
