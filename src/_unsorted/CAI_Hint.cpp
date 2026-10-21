// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102d08c0 size=0x8
// TARGET: CAI_Hint::vfunc119
void CAI_Hint::vfunc119()
{
	vfunc77();
}
// END FUNCTION

// FUNCTION: 0x102d1600 size=0x104
#include "CAI_Hint.h"
#include "CUnknown1070b22c.h"
__declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern float g_104454c4;
struct SGlobals { char pad[0xc]; float curtime; };
extern SGlobals *g_1070b228;
extern CUnknown1070b22c *g_1070b22c;
void sub_101434b0(int, int, const char *, int, int, int, int, int);
int sub_100a02b0();
struct SHintView {
    char pad0[0x224]; unsigned char fl;
    char pad1[0x2e0 - 0x225]; int edict;
    char pad2[0x5dc - 0x2e4]; int id;
    char pad3[0xc]; float lockTime;
};
inline int ENTINDEX(int pEdict)
{
    return g_1070b22c->vfunc35(pEdict);
}
int CAI_Hint::vfunc124()
{
    int n = sub_100a02b0();
    SHintView *v = (SHintView *)this;
    char buf[0x200];
    if (v->fl & 1) {
        Q_snprintf(buf, 0x200, "%i", v->id);
        sub_101434b0(ENTINDEX(v->edict), n, buf, 0, 255, 255, 255, 255);
        float d = v->lockTime - g_1070b228->curtime;
        n++;
        if (g_104454c4 > d) d = g_104454c4;
        Q_snprintf(buf, 0x200, "delay %f", (double)d);
        sub_101434b0(ENTINDEX(v->edict), n, buf, 0, 255, 255, 255, 255);
        n++;
    }
    return n;
}
// END FUNCTION

// FUNCTION: 0x102d2f00 size=0x1e
#include "CAI_Hint.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_Hint::vfunc5
CAI_Hint *CAI_Hint::vfunc5(unsigned int flags)
{
	sub_10005e98();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
