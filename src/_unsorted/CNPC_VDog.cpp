// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10373530 size=0x6
#include "CNPC_VDog.h"
namespace lifted {
extern char g_1093acd8;
}
int CNPC_VDog::vfunc580()
{
    return (int)&lifted::g_1093acd8;
}
// END FUNCTION

// FUNCTION: 0x10373550 size=0x6
#include "CNPC_VDog.h"
namespace lifted {
extern int g_106368b0;
}
int CNPC_VDog::vfunc451()
{
    return lifted::g_106368b0;
}
// END FUNCTION

// FUNCTION: 0x10373570 size=0x1e
#include "CNPC_VDog.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VDog::vfunc5
CBaseEntity *CNPC_VDog::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10373670 size=0x6
extern unsigned char g_106368a8;
// TARGET: sub_10373670
unsigned char sub_10373670()
{
    return g_106368a8;
}
// END FUNCTION

// FUNCTION: 0x103736d0 size=0x1d
#include "CNPC_VDog.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093ad64;
extern B g_10936c74;
int CNPC_VDog::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093ad64.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10373fe0 size=0x5
#include "CNPC_VDog.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VDog::vfunc104
// the game's 0x10373fe0: a tail call (jmp) of CNPC_VAnimal::vfunc104
void CNPC_VDog::vfunc104()
{
	CNPC_VAnimal::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10374000 size=0x5a
#include "CBaseEntity.h"
#include "CNPC_VDog.h"
#include "globalvars.h"
#include "engineiface.h"
// TARGET: CNPC_VDog::vfunc103
void CNPC_VDog::vfunc103()
{
	*(float *)((char *)this + 0x6674) = enginerandom->vfunc1(0.0f, 1.0f) + gpGlobals->curtime;
	*(int *)((char *)this + 0x6688) = 0;
	sub_1026dc00(0x4000000);
	sub_1026dc00(0x200000);
	sub_1026dc00(0x8000);
	CNPC_VAnimal::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x10374080 size=0x6
#include "CNPC_VDog.h"
int CNPC_VDog::vfunc138()
{
    return 0xb;
}
// END FUNCTION

// FUNCTION: 0x10374130 size=0xed
#include <math.h>
#include "CNPC_VDog.h"
#include "CEntityFSlots.h"
#include "ConVar.h"
#pragma intrinsic(fabs)

extern ConVar *g_1093ad24;
extern ConVar *g_109247ec;
extern ConVar *g_10923e84;

// TARGET: CNPC_VDog::vfunc516
float CNPC_VDog::vfunc516()
{
    if (*(unsigned int *)((char *)this + 0x5d8c) & 0x2000) {
        float flSpeed = ((CEntityFSlots *)this)->slot242();
        float flScale = g_1093ad24->vfunc1() ? 0.0f : g_1093ad24->m_fValue;
        float flResult = (float)fabs(flSpeed) * flScale;
        if (flResult > 1.0f)
            return flResult;
        return 1.0f;
    }
    if (*(unsigned int *)((char *)this + 0x14b8) & 0x8000000)
        return 45.0f;
    int act = *(int *)((char *)this + 0xfec);
    if (act <= 0x3c) {
        if (act >= 0x3b)
            goto l30;
        switch (act) {
        case 1:
        case 5:
            if (g_109247ec->vfunc1() || g_109247ec->m_nValue == 0) {
                if (g_10923e84->vfunc1())
                    return 0.0f;
                return g_10923e84->m_fValue;
            }
l30:
            return 30.0f;
        case 0x13:
            return 40.0f;
        default:
            return 45.0f;
        }
    }
    if (act == 0x1093 || (act > 0x1093 && act <= 0x1096))
        return 40.0f;
    return 45.0f;
}
// END FUNCTION

// FUNCTION: 0x10374260 size=0x5
#include "CNPC_VDog.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VDog::vfunc463
// the game's 0x10374260: a tail call (jmp) of CNPC_VAnimal::vfunc463
void CNPC_VDog::vfunc463(int a0, int a1)
{
	CNPC_VAnimal::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10374280 size=0x3f
#include "vampire.h"
#include "CNPC_VDog.h"

extern void (*g_109f3628)(const char *pszFormat, ...);

// TARGET: CNPC_VDog::vfunc259
void CNPC_VDog::vfunc259(int *pEvent)
{
    if (*pEvent != 0xbb9)
    {
        CNPC_VAnimal::vfunc259(pEvent);
        return;
    }
    if (sub_1032e7b0())
    {
        sub_10374f40();
        g_109f3628("Gots a doggie bite!\n");
    }
}
// END FUNCTION

// FUNCTION: 0x103742d0 size=0x80
#include "CBaseEntity.h"
#include "CNPC_VDog.h"

struct DogSchedObj_t {
	int n00;
	int nSchedule;
};

struct DogView_t {
	char pad0[0x1b2c];
	int n1b2c;
	char pad1b30[0x5b80 - 0x1b30];
	char b5b80;
	char pad5b81[0x5cc0 - 0x5b81];
	int nState;
	char pad5cc4[0x6590 - 0x5cc4];
	DogSchedObj_t *pSched;
};

struct DogView2_t {
	char pad[0x63d9];
	char b63d9;
};

int CNPC_VDog::vfunc438()
{
	DogView_t *pView = (DogView_t *)this;
	pView->n1b2c = 0xd;
	if (sub_10014df8(0x7b)) {
		sub_10015839(0x7b);
		return 0x166;
	}
	switch (pView->nState) {
	case 1:
		if (pView->pSched)
			return pView->pSched->nSchedule;
		if (((DogView2_t *)this)->b63d9) {
			if (sub_1001482b(0x7d))
				return 0x167;
		} else {
			return 0x164;
		}
		break;
	case 2:
		pView->b5b80 = 0;
		break;
	case 3:
		if (sub_1001482b(0x7d))
			return 0x167;
		break;
	}
	int nSchedule = CNPC_VAnimal::vfunc438();
	if (nSchedule == 0x6b)
		return 0x164;
	return nSchedule;
}
// END FUNCTION

// FUNCTION: 0x10374370 size=0x36
#include "CNPC_VDog.h"

struct CNPC_VAnimalBaseCall
{
	int sub_10012283(int activity);
};

// TARGET: CNPC_VDog::vfunc440
int CNPC_VDog::vfunc440(int activity)
{
	switch (activity)
	{
	case 0x6b:
		return 0x164;
	case 0x156:
		return 0x161;
	case 0x157:
		return 0x162;
	}
	return ((CNPC_VAnimalBaseCall *)this)->sub_10012283(activity);
}
// END FUNCTION
