// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x103743c0 size=0x327
#include "CNPC_VDog.h"
#include "CDevFlagObj.h"
#include "engineiface.h"
#include "globalvars.h"

extern CDevFlagObj *g_10924a6c;

#define VDOG_INT(off) (*(int *)((char *)this + (off)))
#define VDOG_IDEAL (*(int *)((char *)this + 0x5cc4))
#define VDOG_FILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VDog.cpp"
#define VDOG_STAMP(line) { VDOG_INT(0x1b3c) = (int)VDOG_FILE; VDOG_INT(0x1b40) = (line); }
static inline int SetIdeal(volatile int *p, int s) { *p = s; return *p; }
#define VDOG_SET(state, line) { r = SetIdeal(&VDOG_IDEAL, state); VDOG_STAMP(line); return r; }

int CNPC_VDog::vfunc461()
{
	int r;

	VDOG_INT(0x1b38) = 0xd;
	switch (VDOG_INT(0x5cc0))
	{
	case 3:
		if (sub_1001482b(0x44))
			VDOG_SET(8, 0x357);
		if (!sub_1001482b(0x54) && !sub_1001482b(0x46))
		{
			if ((sub_1001482b(0x6a) || sub_1001482b(0x6d) || sub_1001482b(0x6f) || sub_1001482b(0x70)
				|| (*(char (__fastcall **)(CNPC_VDog *))(*(int *)this + 0x738))(this)))
				goto L_check;
			if (sub_1001482b(0x78))
				VDOG_SET(2, 0x36d);
			if (sub_1001482b(0x7c) || sub_1001482b(0x7d))
				VDOG_SET(1, 0x372);
			goto L_check;
		}
		{ r = SetIdeal(&VDOG_IDEAL, 2); VDOG_STAMP(0x35d); if (0) goto L_check; return r; }
	L_check:
		if (sub_103747c0(1))
			return VDOG_INT(0x5cc4);
		break;
	case 1:
		if (sub_1001482b(0x44))
		{
			VDOG_INT(0x1b40) = 0x30f;
			VDOG_IDEAL = 8;
		}
		else if (sub_1001482b(0x54))
		{
			VDOG_INT(0x1b40) = 0x31d;
			VDOG_IDEAL = 2;
		}
		else
		{
			if (sub_1001482b(0x4c) || sub_1001482b(0x4d))
			{
				*(char *)((char *)this + 0x5b80) = 0;
				break;
			}
			if (sub_1001482b(1))
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x7b);
				return CNPC_VAnimal::vfunc461();
			}
			if (sub_1001482b(0x6a) || sub_1001482b(0x6d) || sub_1001482b(0x6e) || sub_1001482b(0x6f)
				|| sub_1001482b(0x6b) || sub_1001482b(0x70) || sub_1001482b(0x5e))
				break;
			if (sub_1001482b(0x2b))
			{
				VDOG_STAMP(0x347);
				VDOG_IDEAL = 3;
				g_10924a6c->vfunc1();
				sub_100041b0(0x7b);
				int a = VDOG_INT(0x667c);
				EngineGlobals::CGlobalVars *g = gpGlobals;
				int t = *(int *)&g->curtime;
				VDOG_INT(0x6678) = t;
				VDOG_INT(0x6680) = a;
			}
			break;
		}
		VDOG_INT(0x1b3c) = (int)VDOG_FILE;
		if (enginerandom->vfunc2(0, 0x63) < 0x32)
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x7b);
		}
		return VDOG_INT(0x5cc4);
	}
	return CNPC_VAnimal::vfunc461();
}
// END FUNCTION

// FUNCTION: 0x103747c0 size=0x5
char __stdcall sub_103747c0(int a0)
{
    return 0;
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

// FUNCTION: 0x103748c0 size=0x5
#include "CNPC_VDog.h"
void __cdecl sub_10360180();
// TARGET: CNPC_VDog::vfunc434
// the game's 0x103748c0: a tail call (jmp) of sub_10360180
void CNPC_VDog::vfunc434()
{
	sub_10360180();
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

// FUNCTION: 0x10374920 size=0x5
#include "CNPC_VDog.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VDog::vfunc144
// the game's 0x10374920: a tail call (jmp) of CNPC_VAnimal::vfunc144
void CNPC_VDog::vfunc144(void *a0)
{
	CNPC_VAnimal::vfunc144(a0);
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

// FUNCTION: 0x10374b00 size=0x1fc
#include <math.h>
#include "CNPC_VDog.h"
#include "CAI_BaseNPC.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;
int sub_101cda50();

void CNPC_VDog::vfunc433()
{
	sub_102b27f0();
	if (*(char *)((char *)this + 0x6660))
	{
		g_10924a6c->vfunc1();
		sub_100041b0(0x7e);
	}
	if (*(int *)((char *)this + 0x6664) == 6)
		return;
	if (!sub_10014df8(0x6f) && !sub_10014df8(0x5a))
	{
		if (*(int *)((char *)this + 0xfec) != 0x6e)
			return;
		g_10924a6c->vfunc1();
		sub_100041b0(0x7c);
		return;
	}
	int nState = *(int *)((char *)this + 0x665c);
	if (nState != 2)
	{
		if (nState == 0)
		{
			int nSubState = *(int *)((char *)this + 0x6664);
			if (nSubState == 5)
			{
				*(int *)((char *)this + 0x665c) = 2;
				g_10924a6c->vfunc1();
				sub_100041b0(0x7d);
			}
			else if (nSubState == 4)
				*(int *)((char *)this + 0x665c) = 1;
		}
		Vector vecPlayerOrigin = *(Vector *)((CAI_BaseNPC *)sub_101cda50())->vfunc220();
		Vector vecMyOrigin = *(Vector *)((CAI_BaseNPC *)this)->vfunc220();
		Vector vecDelta = vecPlayerOrigin - vecMyOrigin;
		float flDist = fabs(FastSqrt(vecDelta.x * vecDelta.x + (vecDelta.y * vecDelta.y + vecDelta.z * vecDelta.z)));
		if (*(int *)((char *)this + 0xfec) == 0x6e && flDist < *(float *)((char *)this + 0x666c))
		{
			if (*(int *)((char *)this + 0x665c) == 0)
				*(int *)((char *)this + 0x665c) = 1;
			if (*(int *)((char *)this + 0x665c) == 1)
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x78);
			}
		}
		else if (flDist < *(float *)((char *)this + 0x6668))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x2b);
		}
		else if (flDist >= *(float *)((char *)this + 0x6668))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x7c);
		}
		*(float *)((char *)this + 0x667c) = flDist;
	}
	else
	{
		g_10924a6c->vfunc1();
		sub_100041b0(0x7d);
	}
}
// END FUNCTION

// FUNCTION: 0x10374d80 size=0x99
#include "CNPC_VDog.h"

#define VDOG_INT(off) (*(int *)((char *)this + (off)))
#define VDOG_FILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VDog.cpp"

int CNPC_VDog::vfunc460()
{
	if (sub_10014df8(0x78) || sub_10014df8(0x7e)) {
		sub_10374e50();
		return VDOG_INT(0x5cc4);
	}
	if (sub_10014df8(0x79)) {
		VDOG_INT(0x1b40) = 0x517;
		VDOG_INT(0x5cc4) = 3;
		*(const char **)((char *)this + 0x1b3c) = VDOG_FILE;
	} else if (sub_10014df8(0x7c) && VDOG_INT(0x5cc4) == 3) {
		VDOG_INT(0x1b40) = 0x51d;
		VDOG_INT(0x5cc4) = 1;
		*(const char **)((char *)this + 0x1b3c) = VDOG_FILE;
	}
	return sub_1000cc34();
}
// END FUNCTION

// FUNCTION: 0x10374e50 size=0xb9
#include "CBaseEntity.h"
#include "CNPC_VDog.h"
#include "CBCCSlotViews.h"

class CDogSlotView	// slots 167, 596 and 600 of the dog
{
public:
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13) VIEW_SLOT10(14) VIEW_SLOT10(15)
	VIEW_SLOT(160) VIEW_SLOT(161) VIEW_SLOT(162) VIEW_SLOT(163) VIEW_SLOT(164) VIEW_SLOT(165) VIEW_SLOT(166)
	virtual void *vfunc167();
	VIEW_SLOT(168) VIEW_SLOT(169)
	VIEW_SLOT10(17) VIEW_SLOT10(18) VIEW_SLOT10(19)
	VIEW_SLOT100(2) VIEW_SLOT100(3) VIEW_SLOT100(4)
	VIEW_SLOT10(50) VIEW_SLOT10(51) VIEW_SLOT10(52) VIEW_SLOT10(53) VIEW_SLOT10(54) VIEW_SLOT10(55) VIEW_SLOT10(56) VIEW_SLOT10(57) VIEW_SLOT10(58)
	VIEW_SLOT(590) VIEW_SLOT(591) VIEW_SLOT(592) VIEW_SLOT(593) VIEW_SLOT(594) VIEW_SLOT(595)
	virtual void vfunc596(void *pEnt);
	VIEW_SLOT(597) VIEW_SLOT(598) VIEW_SLOT(599)
	virtual void vfunc600(void *p);
};

class CDogThing
{
public:
	void sub_103161a0(void *p);
};

struct CDogHandleEntry
{
	void *m_pEnt;
	int m_serial;
	int m_pad;
};
extern char *g_10566458;

void CNPC_VDog::sub_10374e50()
{
	char *p = (char *)this;
	CDogSlotView *view = (CDogSlotView *)this;
	unsigned int h = *(unsigned int *)(p + 0x628c);
	void *pEnt;
	if (h != 0xffffffff) {
		CDogHandleEntry *e = &((CDogHandleEntry *)(g_10566458 + 4))[h & 0x1fff];
		if (e->m_serial != (int)(h >> 13))
			pEnt = 0;
		else
			pEnt = e->m_pEnt;
	} else {
		pEnt = 0;
	}
	view->vfunc596(pEnt);
	*(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VDog.cpp";
	*(int *)(p + 0x1b40) = 0x52a;
	*(int *)(p + 0x5cc4) = 2;
	view->vfunc600(view->vfunc167());
	if (*(int *)(p + 0x5bb0) <= 0 && *(int *)(p + 0x5da4) != 0 && view->vfunc167() != 0) {
		CDogThing *pThing = *(int *)(p + 0x5bb0) <= 0 ? *(CDogThing **)(p + 0x5da4) : 0;
		pThing->sub_103161a0(view->vfunc167());
	}
}
// END FUNCTION
