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
CNPC_VDog *CNPC_VDog::vfunc5(unsigned int flags)
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

// FUNCTION: 0x103747e0 size=0xa4
#include "CNPC_VDog.h"

extern "C" __declspec(dllimport) int RandomInt(int minVal, int maxVal);

#define SL_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL_V100(p) SL_V10(p##0) SL_V10(p##1) SL_V10(p##2) SL_V10(p##3) SL_V10(p##4) SL_V10(p##5) SL_V10(p##6) SL_V10(p##7) SL_V10(p##8) SL_V10(p##9)

// the vtable of the NPC up to slot 309, then slot 310
struct CNpcSlots
{
	SL_V100(a0) SL_V100(a1) SL_V100(a2)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void SetNpcState(int state);	// slot 310
};

void CNPC_VDog::vfunc432(int a)
{
	int &activity = *(int *)((char *)this + 0xfec);
	int &state = *(int *)((char *)this + 0x5cc0);
	if (activity == 1 && state == activity) {
		if (RandomInt(0, 0xff) == 0x80)
			((CNpcSlots *)this)->SetNpcState(3);
	} else if (activity == 3) {
		if (*(char *)((char *)this + 0x65c))
			((CNpcSlots *)this)->SetNpcState(1);
	} else if (activity == 0x6e) {
		if (*(char *)((char *)this + 0x65c))
			((CNpcSlots *)this)->SetNpcState(1);
	} else if (activity == 0x40) {
		if (*(char *)((char *)this + 0x65c))
			((CNpcSlots *)this)->SetNpcState(1);
	}
	CNPC_VAnimal::vfunc432(a);
}
// END FUNCTION

// FUNCTION: 0x103748e0 size=0x5
#include "CNPC_VDog.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VDog::vfunc390
// the game's 0x103748e0: a tail call (jmp) of CNPC_VAnimal::vfunc390
void CNPC_VDog::vfunc390(CVAnimalArg *a0)
{
	CNPC_VAnimal::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x10374900 size=0x5
#include "CNPC_VDog.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VDog::vfunc366
// the game's 0x10374900: a tail call (jmp) of CNPC_VAnimal::vfunc366
bool CNPC_VDog::vfunc366(int a0, int a1, int a2)
{
	return CNPC_VAnimal::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x10374940 size=0xa3
#include "CBaseEntity.h"
#include "CNPC_VDog.h"
#include "CAI_Motor.h"
#include "CUnknown102e0150.h"
#include "Vector.h"

void __fastcall sub_102e0b40(float *pMotor);

#define DOG_V(n) virtual void a##n();
#define DOG_V10(p) DOG_V(p##0) DOG_V(p##1) DOG_V(p##2) DOG_V(p##3) DOG_V(p##4) DOG_V(p##5) DOG_V(p##6) DOG_V(p##7) DOG_V(p##8) DOG_V(p##9)

struct CDogTaskSlots
{
	DOG_V10(0) DOG_V10(1) DOG_V10(2) DOG_V10(3) DOG_V10(4) DOG_V10(5) DOG_V10(6) DOG_V10(7)
	DOG_V10(8) DOG_V10(9) DOG_V10(10) DOG_V10(11) DOG_V10(12) DOG_V10(13) DOG_V10(14) DOG_V10(15)
	DOG_V(160) DOG_V(161) DOG_V(162) DOG_V(163) DOG_V(164) DOG_V(165) DOG_V(166)
	virtual CBaseEntity *vfunc167();
	DOG_V(168) DOG_V(169)
	DOG_V10(17) DOG_V10(18) DOG_V10(19) DOG_V10(20) DOG_V10(21) DOG_V10(22) DOG_V10(23) DOG_V10(24)
	DOG_V(250)
	virtual char vfunc251();
	DOG_V(252) DOG_V(253) DOG_V(254) DOG_V(255) DOG_V(256) DOG_V(257) DOG_V(258) DOG_V(259)
	DOG_V10(26) DOG_V10(27) DOG_V10(28) DOG_V10(29) DOG_V10(30)
	virtual void vfunc310(int a);
	DOG_V(311) DOG_V(312) DOG_V(313) DOG_V(314) DOG_V(315) DOG_V(316) DOG_V(317) DOG_V(318) DOG_V(319)
	DOG_V10(32) DOG_V10(33) DOG_V10(34) DOG_V10(35) DOG_V10(36) DOG_V10(37) DOG_V10(38) DOG_V10(39)
	DOG_V10(40) DOG_V10(41) DOG_V10(42) DOG_V10(43) DOG_V10(44) DOG_V10(45) DOG_V10(46) DOG_V10(47)
	DOG_V10(48) DOG_V10(49) DOG_V10(50) DOG_V10(51) DOG_V10(52) DOG_V10(53)
	DOG_V(540)
	virtual CUnknown102e0150 *vfunc541();
};

void CNPC_VDog::vfunc442(int *pTask)
{
    if (*pTask != 0x36) {
        if (*pTask == 0xbc)
            ((CDogTaskSlots *)this)->vfunc310(3);
        sub_1035f650(pTask);
        return;
    }
    sub_10280a50();
    sub_102e0b40(*(float **)((char *)this + 0x5d44));
    Vector vecPos;
    ((CDogTaskSlots *)this)->vfunc541()->sub_102dfed0(&vecPos, ((CDogTaskSlots *)this)->vfunc167());
    (*(CAI_Motor **)((char *)this + 0x5d44))->sub_102e20b0(&vecPos.x, -2.0f);
    sub_10289ee0(0x4b);
    if (((CDogTaskSlots *)this)->vfunc251())
        sub_10273e80(0);
}
// END FUNCTION

// FUNCTION: 0x10374a20 size=0x52
#include "CNPC_VDog.h"
#include "CAI_Motor.h"
struct CDogLocalPlayer { char pad[4]; };
CBaseEntity *sub_101cda50();
void CNPC_VDog::vfunc444(int *pTask)
{
	switch (*pTask) {
	case 2:
	case 0x67:
		if (*(int *)((char *)this + 0x5cc0) == 3) {
			CBaseEntity *pPlayer = sub_101cda50();
			if (pPlayer) {
				CAI_Motor *pMotor = *(CAI_Motor **)((char *)this + 0x5d44);
				pMotor->sub_102e20b0((const float *)((int (__fastcall *)(CBaseEntity *))(*(void ***)pPlayer)[217])(pPlayer), -2.0f);
			}
		}
	}
	sub_1035f940(pTask);
}
// END FUNCTION

// FUNCTION: 0x10374aa0 size=0x14
#include "CNPC_VDog.h"

char CNPC_VDog::sub_10374aa0(CBaseEntity *pHint)
{
	return *(int *)((char *)pHint + 0x5dc) == 0x2ee0;
}
// END FUNCTION

// FUNCTION: 0x10374ad0 size=0x15
#include "CNPC_VDog.h"

int CNPC_VDog::sub_10374ad0(int act)
{
	if (act == 3)
		return act;
	return sub_10360120(act);
}
// END FUNCTION
