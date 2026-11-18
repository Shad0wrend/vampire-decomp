// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037c520 size=0x6
#include "CNPC_VGuard1.h"
namespace lifted {
extern char g_1063b590;
}
datamap_t * CNPC_VGuard1::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1063b590);
}
// END FUNCTION

// FUNCTION: 0x1037c660 size=0x6
#include "CNPC_VGuard1.h"
namespace lifted {
extern char g_1093b168;
}
int CNPC_VGuard1::vfunc580()
{
    return (int)&lifted::g_1093b168;
}
// END FUNCTION

// FUNCTION: 0x1037c680 size=0x6
#include "CNPC_VGuard1.h"
namespace lifted {
extern int g_1063b608;
}
int CNPC_VGuard1::vfunc451()
{
    return lifted::g_1063b608;
}
// END FUNCTION

// FUNCTION: 0x1037c6a0 size=0x1e
#include "CNPC_VGuard1.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VGuard1::vfunc5
CBaseEntity *CNPC_VGuard1::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1037c7a0 size=0x6
extern unsigned char g_1063b600;
// TARGET: sub_1037c7a0
unsigned char sub_1037c7a0()
{
    return g_1063b600;
}
// END FUNCTION

// FUNCTION: 0x1037c800 size=0x1d
#include "CNPC_VGuard1.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b1b4;
extern B g_10936c74;
int CNPC_VGuard1::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b1b4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1037cd80 size=0x5
#include "CNPC_VGuard1.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGuard1::vfunc104
// the game's 0x1037cd80: a tail call (jmp) of CNPC_VHuman::vfunc104
void CNPC_VGuard1::vfunc104()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1037cda0 size=0x1c
#include "CNPC_VGuard1.h"

// TARGET: CNPC_VGuard1::vfunc103
void CNPC_VGuard1::vfunc103()
{
	sub_1026dc00(0x200d00);
	m_b6660 = 0;
	sub_10384690();
}
// END FUNCTION

// FUNCTION: 0x1037cdd0 size=0x6
#include "CNPC_VGuard1.h"
int CNPC_VGuard1::vfunc138()
{
    return 7;
}
// END FUNCTION

// FUNCTION: 0x1037cdf0 size=0x1bc
#include "CBaseEntity.h"
#include "CNPC_VGuard1.h"
#include "CEHandleGet.h"

struct CGuardPlayerView1037cdf0
{
	int sub_1017de60();	// stub 0x100038f5
	int sub_1017ddd0();	// stub 0x100065f5
	int sub_1017dd80();	// stub 0x10003364
};

struct CNPC_VGuard1_1037cdf0 : CNPC_VGuard1
{
	bool IsPlayerWeak(CGuardPlayerView1037cdf0 *pPlayer, bool bResult)
	{
		if (!pPlayer)
			return true;
		int n;
		n = m_n6348; if (pPlayer->sub_1017de60() >= n) return false;
		n = m_n634c; if (pPlayer->sub_1017ddd0() >= n) return false;
		n = m_n6350; if (pPlayer->sub_1017ddd0() >= n) return false;
		n = m_n6354; if (pPlayer->sub_1017dd80() >= n) return false;
		n = m_n6358; if (pPlayer->sub_1017dd80() >= n) return false;
		return bResult;
	}
};

void CNPC_VGuard1::vfunc453()
{
	CNPC_VGuard1_1037cdf0 *self = (CNPC_VGuard1_1037cdf0 *)this;
	sub_10280fb0();
	switch (m_nState5cc0) {
	case 11: {
		bool bNoFlag = false;
		CGuardPlayerView1037cdf0 *pPlayer = (CGuardPlayerView1037cdf0 *)EHandle_Get(m_h628c);
		if (!m_b6660)
			bNoFlag = true;
		if (self->IsPlayerWeak(pPlayer, bNoFlag)) {
			sub_10269f30(0x5a);
			sub_10269f30(0x6f);
		} else {
			sub_10269eb0(0x5a);
			sub_10269eb0(0x6f);
		}
		break;
	}
	case 1:
		sub_10269eb0(0x27);
	case 3: {
		CGuardPlayerView1037cdf0 *pPlayer = (CGuardPlayerView1037cdf0 *)EHandle_Get(m_h628c);
		if (self->IsPlayerWeak(pPlayer, true)) {
			sub_10269f30(0x6f);
		} else {
			sub_10269eb0(0x1e);
			sub_10269eb0(0x1f);
			sub_10269eb0(0x20);
			sub_10269eb0(0x21);
			sub_10269eb0(0x22);
		}
		break;
	}
	}
}
// END FUNCTION

// FUNCTION: 0x1037d020 size=0xbb
#include "CBaseEntity.h"
#include "CNPC_VGuard1.h"
#include "CNPC_VHuman.h"
#include "CEntityVSlots.h"

void CNPC_VGuard1::vfunc463(int a, int b)
{
	CEntityVSlots *self = (CEntityVSlots *)this;
	if (self->slot167() && *(int *)(self->slot167() + 0xa8))
		sub_1037e2d0();
	switch (b) {
	case 1:
		if (sub_1032e7b0()) {
			sub_1032e7b0()->slot66();
			((CNPC_VHuman *)this)->sub_10384720(a, b);
			return;
		}
		break;
	case 2:
	case 3:
	case 11:
		if (sub_1032e7b0())
			sub_1032e7b0()->slot67();
	}
	(this)->sub_10384720(a, b);
}
// END FUNCTION

// FUNCTION: 0x1037d110 size=0x5
#include "animevent_t.h"
#include "CNPC_VGuard1.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGuard1::vfunc259
// the game's 0x1037d110: a tail call (jmp) of CNPC_VHuman::vfunc259
void CNPC_VGuard1::vfunc259(animevent_t *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x1037d130 size=0xcb
#include "CNPC_VGuard1.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct GuardTargetView
{
	void sub_1017e6f0(int a);	// stub 0x1000c838
};

static inline GuardTargetView *GetTarget(const unsigned int &rh)
{
	if (rh != 0xffffffff) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[rh & 0x1fff];
		if (pSlot->m_Serial == (int)(rh >> 13))
			return (GuardTargetView *)pSlot->m_pEntity;
	}
	return 0;
}

// TARGET: CNPC_VGuard1::vfunc438
int CNPC_VGuard1::vfunc438()
{
	m_n1b2c = 0x12;
	if ((m_flags14b8 & 2) == 2) {
		m_flags14b8 &= ~2;
		return 0xf1;
	}
	if (m_nState5cc0 == 0xc) {
		if (sub_1001482b(0x1e) && GetTarget(m_h628c)) {
			GetTarget(m_h628c)->sub_1017e6f0(0);
			return 0x6d;
		}
		sub_1026e340(1);
	}
	return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x1037d240 size=0x40
#include "CNPC_VGuard1.h"

// TARGET: CNPC_VGuard1::vfunc440
int CNPC_VGuard1::vfunc440(int schedule)
{
	if (schedule != 0x6b) {
		if (schedule != 0x103) {
			return sub_10005e20(schedule);
		}
		return 0x159;
	}
	return ((m_flags14bc & 0x80000) == 0x80000) ? 0x132 : 0x15a;
}
// END FUNCTION

// FUNCTION: 0x1037e1e0 size=0xd
struct CNPC_VHumanFwd;
struct CNPC_VGuard1Fwd {
    void sub_1037e1e0(int a);
};
struct CNPC_VHumanFwd {
    void sub_10385a10(int a);
};

// TARGET: sub_1037e1e0
void CNPC_VGuard1Fwd::sub_1037e1e0(int a)
{
    a = *(volatile int *)&a;
    ((CNPC_VHumanFwd *)this)->sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x1037e200 size=0x5
#include "CNPC_VGuard1.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGuard1::vfunc434
// the game's 0x1037e200: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VGuard1::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x1037e220 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_VGuard1.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGuard1::vfunc390
// the game's 0x1037e220: a tail call (jmp) of CNPC_VHuman::vfunc390
int CNPC_VGuard1::vfunc390(CTakeDamageInfo *a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x1037e240 size=0x3c
#include "CAI_BaseNPC.h"
#include "CNPC_VGuard1.h"

#define CSV_ROW(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CSlot66View
{
	CSV_ROW(r0)
	CSV_ROW(r1)
	CSV_ROW(r2)
	CSV_ROW(r3)
	CSV_ROW(r4)
	CSV_ROW(r5)
	virtual void r60();
	virtual void r61();
	virtual void r62();
	virtual void r63();
	virtual void r64();
	virtual void r65();
	virtual void vfunc66();
};

struct CGuard1CallView
{
	void sub_10273790(const char *pszName, int b);
	void *sub_1032e7b0();
};

// TARGET: CNPC_VGuard1::vfunc420
void CNPC_VGuard1::vfunc420()
{
	*(char *)((char *)this + 0x6660) = 0;
	((CGuard1CallView *)this)->sub_10273790("player D_NU 0", 0);
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc420();
	if (((CGuard1CallView *)this)->sub_1032e7b0() != 0)
	{
		((CSlot66View *)((CGuard1CallView *)this)->sub_1032e7b0())->vfunc66();
	}
}
// END FUNCTION

// FUNCTION: 0x1037e290 size=0x5
#include "CNPC_VGuard1.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGuard1::vfunc366
// the game's 0x1037e290: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VGuard1::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x1037e2b0 size=0x5
#include "CNPC_VGuard1.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGuard1::vfunc144
// the game's 0x1037e2b0: a tail call (jmp) of CNPC_VHuman::vfunc144
void CNPC_VGuard1::vfunc144(int a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc144(a0);
}
// END FUNCTION
