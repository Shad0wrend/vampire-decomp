// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
