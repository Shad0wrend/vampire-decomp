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

// FUNCTION: 0x1035b080 size=0x2a
#include "CGeneric_NPC_bathack.h"
extern const float g_1044f00c;
extern const float g_1049949c;
extern const float g_1047a3ac;

float CGeneric_NPC_bathack::vfunc516()
{
    int state = *(int *)((char *)this + 0xfec);
    if (state != 0x13) {
        if (state > 0x3a && state <= 0x3c)
            return g_1044f00c;
        return g_1049949c;
    }
    return g_1047a3ac;
}
// END FUNCTION
