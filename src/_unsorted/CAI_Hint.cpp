// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102d0370 size=0x6
#include "CAI_Hint.h"
#include "datamap.h"
namespace lifted {
extern char g_106099f0;
}
datamap_t *CAI_Hint::vfunc82()
{
    return (datamap_t *)&lifted::g_106099f0;
}
// END FUNCTION

// FUNCTION: 0x102d0860 size=0x14
#include "CAI_Hint.h"

// TARGET: CAI_Hint::vfunc77
void CAI_Hint::vfunc77()
{
	sub_100a8710();
	*(int *)((char *)this + 0x5e8) = 1;
}
// END FUNCTION

// FUNCTION: 0x102d0890 size=0x14
#include "CAI_Hint.h"

// TARGET: CAI_Hint::vfunc78
void CAI_Hint::vfunc78()
{
	sub_100a8990();
	*(int *)((char *)this + 0x5e8) = 0;
}
// END FUNCTION

// FUNCTION: 0x102d08c0 size=0x8
#include "CAI_Hint.h"
// TARGET: CAI_Hint::vfunc119
void CAI_Hint::vfunc119()
{
	vfunc77();
}
// END FUNCTION

// FUNCTION: 0x102d1320 size=0x18
// TARGET: CAI_Hint::vfunc163
#include "CAI_Hint.h"
char CAI_Hint::vfunc163()
{
    if (m_n5e8 != 0) {
        return 0;
    }
    return m_n5dc == 0xd;
}
// END FUNCTION

// FUNCTION: 0x102d1600 size=0x104
#include "CAI_Hint.h"
__declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern float g_104454c4;
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
    return engine->vfunc35(pEdict);
}
int CAI_Hint::vfunc124()
{
    int n = sub_100a02b0();
    SHintView *v = (SHintView *)this;
    char buf[0x200];
    if (v->fl & 1) {
        Q_snprintf(buf, 0x200, "%i", v->id);
        sub_101434b0(ENTINDEX(v->edict), n, buf, 0, 255, 255, 255, 255);
        float d = v->lockTime - gpGlobals->curtime;
        n++;
        if (g_104454c4 > d) d = g_104454c4;
        Q_snprintf(buf, 0x200, "delay %f", (double)d);
        sub_101434b0(ENTINDEX(v->edict), n, buf, 0, 255, 255, 255, 255);
        n++;
    }
    return n;
}
// END FUNCTION

// FUNCTION: 0x102d2ee0 size=0x8
#include "CBaseEntity.h"
#include "CAI_Hint.h"
// TARGET: CAI_Hint::sub_102d2ee0
unsigned char CAI_Hint::sub_102d2ee0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
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

// FUNCTION: 0x102d3ec0 size=0x6c
#include "CAI_Hint.h"
#include "CBaseEntity.h"

__declspec(dllimport) void DevMsg(const char *, ...);

void CAI_Hint::vfunc130(int a)
{
	((CBaseEntity *)this)->CBaseEntity::vfunc130(a);
	char *pNode = sub_102d3e60();
	if (!pNode) {
		DevMsg("Warning: AI hint has incorrect or no AI node\n");
		return;
	}
	Vector vecPos = *(Vector *)(pNode + 8);
	vfunc181(&vecPos, 0, 0);
	*(CAI_Hint **)(pNode + 0xa0) = this;
}
// END FUNCTION
