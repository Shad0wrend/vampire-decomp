// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x10361060 size=0x68
#include "CNPC_VAsianVampire.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VAsianVampire::vfunc461()
{
	g_109f3620[*g_109f3680].a = "CNPC_VAsianVampire::SelectIdealState";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	m_nIdealState = 6;
	int result = sub_10011225();
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103610f0 size=0x5
#include "CNPC_VAsianVampire.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VAsianVampire::vfunc433
// the game's 0x103610f0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc433
void CNPC_VAsianVampire::vfunc433()
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc433();
}
// END FUNCTION

// FUNCTION: 0x10361110 size=0x6f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VAsianVampire.h"

void CNPC_VAsianVampire::vfunc432(int arg)
{
	ScopeTrace trace("CNPC_VAsianVampire::RunAI", g_106b8540);
	sub_10005673();
	sub_1000698d(arg);
}
// END FUNCTION

// FUNCTION: 0x103611a0 size=0xf3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"

// TARGET: CNPC_VAsianVampire::vfunc442
void CNPC_VAsianVampire::vfunc442(const CVAsianVampireTask_t *pTask)
{
	ScopeTrace trace("CNPC_VAsianVampire::StartTask", g_106b8540);
	switch (pTask->iTask) {
	case 0x150:
		break;
	case 0x151:
		m_pHint5ddc = sub_103615c0();
		if (!m_pHint5ddc) {
			m_pszFailFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp";
			m_nFailLine = 0x110;
			((CEntityVSlots *)this)->slot448(1);
		}
		sub_1000ac68(0);
		break;
	case 0x152:
		m_pHint5ddc = sub_10361730();
		if (!m_pHint5ddc) {
			m_pszFailFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp";
			m_nFailLine = 0x118;
			((CEntityVSlots *)this)->slot448(1);
		}
		sub_1000ac68(0);
		break;
	default:
		sub_103c5ac0(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103612e0 size=0x139
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

// TARGET: CNPC_VAsianVampire::vfunc444
void CNPC_VAsianVampire::vfunc444(const CVAsianVampireTask_t *pTask)
{
    ScopeTrace trace("CNPC_VAsianVampire::RunTask", g_106b8540);
    switch (pTask->iTask) {
    case 0x150:
        sub_10005d17(m_pHint5ddc);
        m_bTaskFailedJump = 0;
        sub_1000ac68(0);
        return;
    case 0x13a: {
        sub_10004edf(pTask);
        if (m_nIdealActivity != 0x2d) {
            Vector vec = *((CEntityVSlots *)this)->slot198();
            if (vec.z <= 250.0f) {
                sub_10014524(0x2d);
                return;
            }
        }
        break;
    }
    default:
        sub_10004edf(pTask);
        break;
    case 0x151:
    case 0x152:
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x10361470 size=0x5
#include "CNPC_VAsianVampire.h"
bool CNPC_VAsianVampire::vfunc566(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10361490 size=0x72
#include "CNPC_VAsianVampire.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern float g_104a9304;

void CNPC_VAsianVampire::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VAsianVampire::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	m_flNextThink = g_104a9304 + gpGlobals->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10361530 size=0x64
#include "CNPC_VAsianVampire.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062cdd8[];
extern char g_106b8540[];

// TARGET: CNPC_VAsianVampire::vfunc619
void CNPC_VAsianVampire::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062cdd8;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103615c0 size=0x11f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct HintListView : CEntityVSlots
{
    char pad[0x5d8 - 4];
    HintListView *m_pNext;
    int m_nHintType;
};
extern HintListView *g_10925450;
extern float g_104a9320;

// TARGET: CNPC_VAsianVampire::sub_103615c0
void *CNPC_VAsianVampire::sub_103615c0()
{
    ScopeTrace trace("CNPC_VAsianVampire::SelectLedgeNode", g_106b8540);
    HintListView *pBest = 0;
    float flBest; flBest = 3.402823466e+38f;
    { HintListView *pHint = g_10925450; while (pHint) { if (pHint->m_nHintType == 0x4653)
        {
            if (sub_103629d0((const float *)pHint->slot217(), g_104a9320))
            {
                const Vector *pHintPos = pHint->slot217();
                const Vector *pPos = ((CEntityVSlots *)this)->slot217();
                Vector delta;
                VectorSubtract(*pPos, *pHintPos, delta);
                float flDist = FastSqrt((delta.x * delta.x) + (delta.z * delta.z) + delta.y * delta.y);
                if (flDist < flBest)
                {
                    flBest = flDist;
                    pBest = pHint;
                }
            }
        } pHint = pHint->m_pNext; } }
    if (pBest)
        sub_10361990((CBaseEntity *)pBest);
    return pBest;
}
// END FUNCTION

// FUNCTION: 0x10361730 size=0x11f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct HintListView : CEntityVSlots
{
    char pad[0x5d8 - 4];
    HintListView *m_pNext;
    int m_nHintType;
};
extern HintListView *g_10925450;
extern float g_104a9320;

// TARGET: CNPC_VAsianVampire::sub_10361730
void *CNPC_VAsianVampire::sub_10361730()
{
    ScopeTrace trace("CNPC_VAsianVampire::SelectJumpbaseNode", g_106b8540);
    HintListView *pBest = 0;
    float flBest; flBest = 3.402823466e+38f;
    { HintListView *pHint = g_10925450; while (pHint) { if (pHint->m_nHintType == 0x4650)
        {
            if (sub_103629d0((const float *)pHint->slot217(), g_104a9320))
            {
                const Vector *pHintPos = pHint->slot217();
                const Vector *pPos = ((CEntityVSlots *)this)->slot217();
                Vector delta;
                VectorSubtract(*pPos, *pHintPos, delta);
                float flDist = FastSqrt((delta.x * delta.x) + (delta.z * delta.z) + delta.y * delta.y);
                if (flDist < flBest)
                {
                    flBest = flDist;
                    pBest = pHint;
                }
            }
        } pHint = pHint->m_pNext; } }
    if (pBest)
        sub_10361990((CBaseEntity *)pBest);
    return pBest;
}
// END FUNCTION

// FUNCTION: 0x103618a0 size=0xbc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VAsianVampire.h"
bool CNPC_VAsianVampire::sub_10004b8d(const float *pos)
{
    ScopeTrace trace("CNPC_VAsianVampire::IsPosNearStoredJumpPositions", g_106b8540);
    const StoredHintPos_t *p = m_storedHints;
    for (int i = 0; i < 2; i++, p++)
    {
        Vector d;
        d = *(const Vector *)p - *(const Vector *)pos;
        if (d.Length2D() <= 30.0f)
            return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10361990 size=0xaa
#include "CBaseEntity.h"
#include "CNPC_VAsianVampire.h"

#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

// CBaseEntity viewed as a plain list of slots up to 217 (GetAbsOrigin).
struct SSlot217Entity
{
	PV100(a0) PV100(a1)
	PV10(b0)
	virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13();
	virtual void b14(); virtual void b15(); virtual void b16();
	virtual StoredHintPos_t *GetAbsOrigin();
};

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNPC_VAsianVampire::sub_10361990(CBaseEntity *pHint)
{
	g_109f3620[*g_109f3680].a = "CNPC_VAsianVampire::AddHintToStoredJumpPositions";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (pHint)
	{
		m_storedHints[m_nNextStoredHint] = *((SSlot217Entity *)pHint)->GetAbsOrigin();
		m_nNextStoredHint++;
		if (m_nNextStoredHint >= 2)
			m_nNextStoredHint = 0;
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10361a70 size=0x11c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern float g_104a9310;

struct SJumpView
{
	char m_pad0000[0x649c];
	Vector m_vecJumpStart;	// 0x649c
	Vector m_vecJumpEnd;	// 0x64a8
	float m_flJumpHeight;	// 0x64b4
};

struct CNPC_VAsianVampireUnit : CNPC_VAsianVampire
{
	void sub_10361a70(void *pHint);	// "CNPC_VAsianVampire::SetupJump"
	void sub_102c4e80();	// stub 0x10011a31, called directly
};

void CNPC_VAsianVampireUnit::sub_10361a70(void *pHint)
{
	ScopeTrace trace("CNPC_VAsianVampire::SetupJump", g_106b8540);
	if (pHint) {
		SJumpView *pView = (SJumpView *)this;
		CEntityVSlots *pThis = (CEntityVSlots *)this;
		pView->m_vecJumpStart = *pThis->slot217();
		pView->m_vecJumpEnd = *((CEntityVSlots *)m_pHint5ddc)->slot217();
		float flZ = ((CEntityVSlots *)m_pHint5ddc)->slot217()->z;
		if (pThis->slot217()->z > flZ)
			flZ = pThis->slot217()->z;
		float flDiff = flZ - pThis->slot217()->z;
		pView->m_flJumpHeight = g_104a9310 + flDiff;
		sub_102c4e80();
	}
}
// END FUNCTION

// FUNCTION: 0x10361be0 size=0x3e3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VAsianVampire.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown10924a1c.h"

#define STAMP(line) (m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp", m_nLine1b30 = line)

extern float g_104454c4;

int CNPC_VAsianVampire::vfunc604(int unused)
{
	ScopeTrace scope("CNPC_VAsianVampire::SelectScheduleMeleeCombat", g_106b8540);
	CAI_BaseNPCTroika *p = (CAI_BaseNPCTroika *)this;
	if (m_b6078) {
		if (p->vfunc602()) {
			p->vfunc601((int)p->vfunc167());
			if (p->vfunc308()) {
				STAMP(0x1ea);
				return 0x15c;
			}
			const float &flDist = p->m_f6268;
			if ((g_10924a1c->vfunc1() ? g_104454c4 * 2.0f : g_10924a1c->m_fl28 * 2.0f) <= flDist) {
				STAMP(0x1f0);
				return 0xe7;
			}
			STAMP(0x1f4);
			return 0xe4;
		}
	} else {
		if (!p->vfunc599((int)p->vfunc167())) {
			if (p->vfunc308()) {
				STAMP(0x1ff);
				return 0x15c;
			}
			STAMP(0x203);
			return 0xe4;
		}
	}
	if (p->sub_10014df8(0x59)) {
		p->vfunc601((int)p->vfunc167());
		STAMP(0x20c);
		return sub_10362430();
	}
	if (p->sub_10014df8(0x51)) {
		if (p->vfunc308()) {
			STAMP(0x221);
			return 0xdc;
		}
		STAMP(0x225);
		return 0xdd;
	}
	bool bTimer = false;
	if (p->m_f626c > 64.0f) {
		if (p->m_fl6274 == -1.0f) {
			p->m_fl6274 = gpGlobals->curtime + enginerandom->vfunc1(3.0f, 4.0f);
		} else if (gpGlobals->curtime >= p->m_fl6274) {
			bTimer = true;
		}
	} else {
		p->m_fl6274 = -1.0f;
	}
	if (p->vfunc308() && (p->sub_10014df8(9) || p->sub_10014df8(0x1a) || bTimer) && !m_bSuppressRanged) {
		p->vfunc601((int)p->vfunc167());
		STAMP(0x249);
		return 0x15c;
	}
	if (!p->sub_10014df8(9) && !p->sub_10014df8(0x60) && !p->sub_10014df8(0x48)) {
		STAMP(0x25c);
		return 0xc7;
	}
	if (p->vfunc308() && !m_bSuppressRanged) {
		STAMP(0x254);
		return 0xca;
	}
	STAMP(0x258);
	return 0xcb;
}
// END FUNCTION

// FUNCTION: 0x103620d0 size=0x222
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VAsianVampire.h"
#include "ScopeTrace.h"

int CNPC_VAsianVampire::vfunc605(int unused)
{
	ScopeTrace trace("CNPC_VAsianVampire::SelectScheduleRangedCombat", g_106b8540, g_106b8540);
	CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
	if (m_b6078) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp";
		m_nLine1b30 = 0x26a;
		return 0xe3;
	}
	if (pNPC->sub_10014df8(8) && pNPC->vfunc307() && pNPC->vfunc599(pNPC->vfunc167())) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp";
		m_nLine1b30 = 0x284;
		return 0xe3;
	}
	if (pNPC->sub_10014df8(0x3c)) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp";
		m_nLine1b30 = 0x289;
		return 0xf0;
	}
	int nSchedule = sub_102b8620();
	if (nSchedule)
		return nSchedule;
	if ((pNPC->sub_10014df8(0x5f) || pNPC->sub_10014df8(8)) && !pNPC->sub_10014df8(0x2f) && !pNPC->sub_10014df8(0x63)) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp";
		m_nLine1b30 = 0x2af;
		return 0xf0;
	}
	if (pNPC->sub_10014df8(0x46) && !pNPC->sub_10014df8(0x48) && !pNPC->sub_10014df8(0x60)) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp";
		m_nLine1b30 = 0x2e5;
		return 0xf0;
	}
	char bHas = pNPC->sub_10014df8(0x59);
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAsianVampire.cpp";
	if (bHas) {
		m_nLine1b30 = 0x2ce;
		return sub_10362430();
	}
	m_nLine1b30 = 0x2d2;
	return 0xe8;
}
// END FUNCTION
