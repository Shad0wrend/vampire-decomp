// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10383f10 size=0x6
extern void *g_1063f610;

void *sub_10383f10(void)
{
    return &g_1063f610;
}
// END FUNCTION

// FUNCTION: 0x10384060 size=0x6
#include "CNPC_VHuman.h"
namespace lifted {
extern char g_1093b3e0;
}
CAI_CondOwner * CNPC_VHuman::vfunc580()
{
    return (CAI_CondOwner *)((int)&lifted::g_1093b3e0);
}
// END FUNCTION

// FUNCTION: 0x10384080 size=0x6
#include "CNPC_VHuman.h"
namespace lifted {
extern int g_1063f630;
}
const char * CNPC_VHuman::vfunc451()
{
    return (const char *)lifted::g_1063f630;
}
// END FUNCTION

// FUNCTION: 0x103840a0 size=0x1e
#include "CNPC_VHuman.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VHuman::vfunc5
CNPC_VHuman *CNPC_VHuman::vfunc5(int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103841a0 size=0x6
extern char g_1063f628;

char sub_103841a0(void)
{
    return g_1063f628;
}
// END FUNCTION

// FUNCTION: 0x10384200 size=0x1d
#include "CNPC_VHuman.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b3c4;
extern B g_10936c74;
int CNPC_VHuman::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b3c4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10384670 size=0x5
#include "CNPC_VHuman.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHuman::vfunc104
// the game's 0x10384670: a tail call (jmp) of CAI_BaseNPCTroika::vfunc104
void CNPC_VHuman::vfunc104()
{
	CAI_BaseNPCTroika::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10384690 size=0x39
#include "CNPC_VHuman.h"

struct CNPC_VHumanBaseUnit {
    void sub_10012855(int flags);
    void sub_1000303a();
};

// TARGET: CNPC_VHuman::vfunc103
void CNPC_VHuman::vfunc103()
{
    ((CNPC_VHumanBaseUnit *)this)->sub_10012855(0x4000000);
    ((CNPC_VHumanBaseUnit *)this)->sub_10012855(0x8000000);
    ((CNPC_VHumanBaseUnit *)this)->sub_10012855(0x200000);
    ((CNPC_VHumanBaseUnit *)this)->sub_10012855(0xd00);
    ((CNPC_VHumanBaseUnit *)this)->sub_1000303a();
}
// END FUNCTION

// FUNCTION: 0x103846e0 size=0x6
int sub_103846e0(void)
{
    return 0x81f;
}
// END FUNCTION

// FUNCTION: 0x10384700 size=0x6
#include "CNPC_VHuman.h"

int CNPC_VHuman::sub_10384700()
{
	return 4;
}
// END FUNCTION

// FUNCTION: 0x10384720 size=0x5
#include "CNPC_VHuman.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHuman::vfunc463
// the game's 0x10384720: a tail call (jmp) of CAI_BaseNPCTroika::vfunc463
void CNPC_VHuman::vfunc463(int a0, int a1)
{
	CAI_BaseNPCTroika::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10384740 size=0x5
#include "animevent_t.h"
#include "CNPC_VHuman.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHuman::vfunc259
// the game's 0x10384740: a tail call (jmp) of CAI_BaseNPCTroika::vfunc259
void CNPC_VHuman::vfunc259(animevent_t *a0)
{
	CAI_BaseNPCTroika::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x10384760 size=0x64
#include "CNPC_VHuman.h"
struct CUnknown1027d990 { int sub_1027d990(); };
inline void VSub(const Vector &a, const Vector &b, Vector &r)
{
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
}
// TARGET: CNPC_VHuman::vfunc563
void CNPC_VHuman::vfunc563(CEntityVSlots *pEnt, Vector *pVec, int a, int b)
{
    if (((CUnknown1027d990 *)this)->sub_1027d990() == 2) {
        Vector *pOrigin = pEnt->slot217();
        Vector tmp;
        Vector *pOther = pEnt->slot193(&tmp);
        Vector d;
        VSub(*pOther, *pOrigin, d);
        pVec->x += d.x;
        pVec->y += d.y;
        pVec->z += d.z;
    }
}
// END FUNCTION
