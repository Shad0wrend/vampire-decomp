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

// FUNCTION: 0x103850a0 size=0xd2
#include "CNPC_VHuman.h"
#include "CCineNPC.h"
#include "CEHandleGet.h"

struct CNPCStateView {
	char m_pad0000[0x5cc0];
	int m_nState;	// 0x5cc0
	int m_nIdealState;	// 0x5cc4
};

int CNPC_VHuman::vfunc482(char bDisregardState, int interruptLevel)
{
	int result = 1;
	if (EHandle_Get(m_h5d74)) {
		CCineNPC *pCine = (CCineNPC *)EHandle_Get(m_h5d74);
		if (!pCine->sub_101a8ac0())
			return 0;
		result = 2;
	}
	if (!((CEntityVSlots *)this)->slot158())
		return 0;
	CNPCStateView *pView = (CNPCStateView *)this;
	if (!bDisregardState && pView->m_nState != 0 && pView->m_nState != 1 && pView->m_nIdealState != 1 && (pView->m_nState != 3 || interruptLevel < 1))
		return (pView->m_nState == 4) ? result : 0;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103854f0 size=0x2fa
#include "CNPC_VHuman.h"
struct CVH375Obj { virtual bool vfunc0(); virtual bool vfunc1(); char m_pad[0x28]; int m_n2c; };
struct CVH375Wpn { char m_pad[0x19c]; unsigned int m_flags19c; };
struct CVH375View { char m_pad[0x6410]; bool m_b6410; };
extern CVH375Obj *g_10924f74;
extern CVH375Obj *g_10924034;
extern CVH375Obj *g_10923f5c;

// TARGET: CNPC_VHuman::vfunc375
int CNPC_VHuman::vfunc375(int act)
{
	CVH375View *v = (CVH375View *)this;
	if (vfunc513() & 0x40) {
		switch (act) {
		case 0x11: act = 9; break;
		case 0x15: act = 0x13; break;
		}
	}
	if (sub_10007e19() && (((CVH375Wpn *)sub_10007e19())->m_flags19c & 0x40) != 0x40) {
		if ((vfunc513() & 0x40) && !g_10924f74->vfunc1() && g_10924f74->m_n2c && (m_flags14bc & 0x400) == 0x400) {
			v->m_b6410 = true;
		} else if ((m_flags14b8 & 0x10000) == 0x10000) {
			v->m_b6410 = false;
		} else if ((m_flags5b84 & 0x200) == 0x200) {
			v->m_b6410 = true;
		} else {
			v->m_b6410 = false;
			switch (m_n5cc0) {
			case 2:
				v->m_b6410 = true;
				break;
			case 3:
				if ((g_10923f5c->vfunc1() || !g_10923f5c->m_n2c) && !(m_flags5d8c & 0x8000000))
					break;
				v->m_b6410 = true;
				break;
			case 0xb:
				if ((g_10924034->vfunc1() || !g_10924034->m_n2c) && !(m_flags5d8c & 0x8000000))
					break;
				v->m_b6410 = true;
				break;
			}
		}
		if (v->m_b6410) {
			switch (act) {
			case 1:
				if (sub_10007e19()) {
					void *w = (void *)sub_10007e19();
					if (((unsigned int (__fastcall *)(void *))(*(void ***)w)[360])(w) & 0x6000)
						act = 5;
				}
				break;
			case 0x3b: act = 0x3d; break;
			case 0x3c: act = 0x3e; break;
			case 0x9d: act = 0x9f; break;
			case 0x9e: act = 0xa0; break;
			case 0xa1: act = 0xa3; break;
			case 0xa2: act = 0xa4; break;
			}
		} else {
			switch (act) {
			case 9: act = 0x16; break;
			case 0x13: act = 0x17; break;
			}
		}
	} else {
		v->m_b6410 = false;
	}
	return sub_10295590(act);
}
// END FUNCTION

// FUNCTION: 0x103858b0 size=0x108
#include "CNPC_VHuman.h"

int CNPC_VHuman::vfunc376(int act)
{
	switch (act) {
	case 0x3d:
		act = 0x3b;
		break;
	case 0x3e:
		act = 0x3c;
		break;
	case 0x9f:
		act = 0x9d;
		break;
	case 0xa0:
		act = 0x9e;
		break;
	case 0xa3:
		act = 0xa1;
		break;
	case 0xa4:
		act = 0xa2;
		break;
	}
	return sub_10295710(act);
}
// END FUNCTION

// FUNCTION: 0x10385a30 size=0x1
#include "CNPC_VHuman.h"
// TARGET: CNPC_VHuman::vfunc434
void CNPC_VHuman::vfunc434() {
}
// END FUNCTION

// FUNCTION: 0x10385a70 size=0x5
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHuman::vfunc366
bool CNPC_VHuman::vfunc366(int a, int b, int c)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10385ab0 size=0x12c
#include "CNPC_VHuman.h"
#include "CUnknown1025ddd0.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

struct SDifficulty {
	virtual void s0();
	virtual char s1();
	char pad[0x24];
	float m28;
};
extern SDifficulty *g_10924a1c;

struct SNotifyObj {
	virtual void s0();
	virtual void s1();
};
extern SNotifyObj *g_10924edc;

struct SHumanView
{
	char m_pad0000[0x5b84];
	unsigned int m_flags5b84;
	char m_pad5b88[0x6070 - 0x5b88];
	float m_f6070;
	float m_f6074;
	char m_b6078;
	char m_pad6079[0x6268 - 0x6079];
	float m_f6268;
	float m_f626c;
	char m_pad6270[0x65e8 - 0x6270];
	CUnknown1025ddd0 *m_pGroup;
};

struct CNPC_VHumanUnit : CNPC_VHuman
{
	char sub_10385ab0(int unused);	// "CNPC_VHuman::vfunc599"
};

char CNPC_VHumanUnit::sub_10385ab0(int unused)
{
	SHumanView *pView = (SHumanView *)this;
	if ((pView->m_flags5b84 & 2) == 2 || vfunc293() != 0) {
		pView->m_b6078 = 1;
		return 1;
	}
	if (gpGlobals->curtime >= pView->m_f6070) {
		bool bOK = true;
		double f = g_10924a1c->s1() ? 0.0f : g_10924a1c->m28;
		if ((float)(f + f) < pView->m_f6268 && vfunc308())
			bOK = false;
		if (!(pView->m_f626c > 64.0f && sub_10014df8(0x59))) {
			if (bOK) {
				pView->m_pGroup->sub_1025db70((CBaseEntity *)this);
				if ((pView->m_flags5b84 & 0x1000) == 0x1000 || pView->m_pGroup->sub_1025db70((CBaseEntity *)this)) {
					pView->m_b6078 = 1;
					pView->m_f6074 = g_1070b244->vfunc1(7.5f, 15.0f) + gpGlobals->curtime;
					g_10924edc->s1();
					return 1;
				}
			}
		}
	}
	pView->m_b6078 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10385c30 size=0x8d
#include "CNPC_VHuman.h"
#include "CBaseCombatWeapon.h"


struct CRandomX {
	virtual void v0();
	virtual float RandomFloat(float flMin, float flMax);
};
extern CRandomX *g_1070b244;

struct CNotifyX {
	virtual void v0();
	virtual void v1();
};
extern CNotifyX *g_10924edc;

char CNPC_VHuman::vfunc600(int unused)
{
	unsigned int flags = sub_10007e19() ? ((CBaseCombatWeapon *)sub_10007e19())->vfunc360() : 0;
	if ((flags & 0x18000) && !*((char *)this + 0x6078)) {
		if ((*(CAI_NamedThing **)((char *)this + 0x65e8))->sub_1025dca0(this, 0)) {
			*((char *)this + 0x6078) = 1;
			*(float *)((char *)this + 0x6074) = g_1070b244->RandomFloat(7.5f, 15.0f) + gpGlobals->curtime;
			g_10924edc->v1();
			return 1;
		}
		*((char *)this + 0x6078) = 0;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10385cf0 size=0x57
#include "CNPC_VHuman.h"
struct CHumanNotify { virtual void v0(); virtual void vfunc1(); };
extern CHumanNotify *g_10924edc;
struct CHumanFields601
{
	char m_pad0000[0x6070];
	float m_f6070;
	char m_pad6074[4];
	char m_b6078;
	char m_pad6079[0x65e8 - 0x6079];
	CAI_NamedThing *m_pNamed65e8;
};
void CNPC_VHuman::vfunc601(int a)
{
	CHumanFields601 *f = (CHumanFields601 *)this;
	g_10924edc->vfunc1();
	f->m_b6078 = 0;
	if (vfunc308())
		f->m_f6070 = enginerandom->vfunc1(5.0f, 10.0f) + gpGlobals->curtime;
	f->m_pNamed65e8->sub_1025ddd0(this);
}
// END FUNCTION

// FUNCTION: 0x10385d70 size=0x9d
#include "CNPC_VHuman.h"

struct CHumanTimeScale
{
	virtual void slot0();
	virtual char slot1();
	char m_pad0004[0x24];
	float m_f28;
};
extern CHumanTimeScale *g_10924a1c;
extern float g_104454c4;
char __fastcall sub_1025db50(int *p);

// TARGET: CNPC_VHuman::vfunc602
char CNPC_VHuman::vfunc602()
{
	if ((m_flags5b84 & 2) == 2 || vfunc293())
		return 0;
	if (((CEntityVSlots *)this)->slot308())
	{
		if (gpGlobals->curtime >= m_f6074)
			return 1;
	}
	else
	{
		double x = g_10924a1c->slot1() ? g_104454c4 : g_10924a1c->m_f28;
		if ((float)(x + x) <= m_f6268 && !sub_1025db50(*(int **)((char *)this + 0x65e8)))
			return 1;
	}
	return (*(CAI_NamedThing **)((char *)this + 0x65e8))->sub_1025de90(this);
}
// END FUNCTION
