// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10359e90 size=0x1d
#include "CGeneric_NPC.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a234;
extern B g_10936c74;
int CGeneric_NPC::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a234.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1035a810 size=0x2a
#include "CGeneric_NPC.h"
extern const float g_1044f00c;
extern const float g_1049949c;
extern const float g_1047a3ac;

float CGeneric_NPC::vfunc516()
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
