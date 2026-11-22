// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x103cee70 size=0x5f3
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct CWerewolfDevCvar_103cee70
{
	virtual void v0();
	virtual bool v1();
	char m_pad04[0x28];
	int m_n2c;
};
extern CWerewolfDevCvar_103cee70 *g_1093f9a4;

#define FILE_ "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VWerewolf.cpp"
#define RET(line, val) { m_pszFile1b30 = FILE_; m_nLine1b34 = line; return val; }

// TARGET: CNPC_VWerewolf::vfunc438
int CNPC_VWerewolf::vfunc438()
{
	ScopeTrace trace("CNPC_VWerewolf::SelectSchedule", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_n1b2c = 0x29;
	vfunc461_slot();
	if (!g_1093f9a4->v1() && g_1093f9a4->m_n2c)
	{
		sub_103d4690();
		RET(0x8d8, 0x157);
	}
	if (!vfunc163())
		RET(0x8dd, 0x158);
	switch (m_nState5cc0)
	{
	case 7:
		if (!vfunc158())
			RET(0x8e8, 0x162);
		if (sub_10269aa0(0x7a))
			RET(0x8ed, 0x161);
		break;
	case 0:
	case 1:
		{
			CBaseEntity *pTarget = vfunc167();
			m_pszFile1b30 = FILE_;
			if (!pTarget) { m_nLine1b34 = 0x8f8; return 0x156; }
			m_nLine1b34 = 0x8fc;
			return 0x157;
		}
	case 2:
	case 3:
	case 8:
	case 10:
	case 14:
		if (!vfunc167())
			RET(0x909, 0x156);
		if (vfunc167() && !((CEntityVSlots *)vfunc167())->slot158())
			RET(0x915, 0x157);
		if (sub_10269aa0(0x77)) { sub_103d4a60(); RET(0x91d, 0x158); }
		if (sub_10269aa0(0x7b) && (m_nFlags66e8 & 0x100) != 0x100)
			RET(0x928, 0x15e);
		if (sub_10269aa0(0x5f))
			RET(0x92f, 0xd3);
		if (m_b66a9) { m_b66a9 = 0; RET(0x935, 0x15d); }
		if (sub_10269aa0(0x78) && !sub_10269aa0(0x51) && !sub_10269aa0(0x52) && sub_10269aa0(0x59))
		{
			m_pszFile1b30 = FILE_; m_nLine1b34 = 0x93f;
			return sub_103ce9b0(m_pHint66bc);
		}
		if (sub_10269aa0(0x59))
			RET(0x947, 0x157);
		break;
	case 11:
		if (sub_10269aa0(0x7a))
			RET(0x95b, 0x161);
		if (sub_10269aa0(0x77)) { sub_103d4a60(); RET(0x961, 0x158); }
		if (sub_10269aa0(0x7b) && (m_nFlags66e8 & 0x100) != 0x100)
			RET(0x96b, 0x15e);
		if (sub_10269aa0(0x78))
		{
			if (!sub_10269aa0(0x51) && !sub_10269aa0(0x52) && sub_10269aa0(0x59))
			{
				m_pszFile1b30 = FILE_; m_nLine1b34 = 0x977;
				return sub_103ce9b0(m_pHint66bc);
			}
		}
		else
		{
			bool b = sub_103d14f0();
			m_pszFile1b30 = FILE_;
			if (b) { m_nLine1b34 = 0x97d; return sub_103ce9b0(m_pHint66bc); }
			m_nLine1b34 = 0x981;
			return 0x157;
		}
		break;
	case 9:
		if (sub_10269aa0(0x77)) { sub_103d4a60(); RET(0x98c, 0x158); }
		{
			bool b = sub_103cf770();
			m_pszFile1b30 = FILE_;
			if (b) { m_nLine1b34 = 0x991; return sub_103ce9b0(m_pHint66bc); }
			m_nLine1b34 = 0x995;
			return 0x157;
		}
	}
	return sub_102af660();
}
// END FUNCTION

// FUNCTION: 0x103cf5f0 size=0x124
#include "CNPC_VWerewolf.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "ConVar.h"

extern ConVar *g_1093f8ec;
extern ConVar *g_1093d574;
extern float g_104454c4;

bool CNPC_VWerewolf::sub_103cf5f0()
{
	ScopeTrace trace("CNPC_VWerewolf::ShouldPursueEnemy", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if ((m_nFlags66e8 & 4) != 4) {
		float flElapsed = g_104454c4 > (gpGlobals->curtime - *(float *)((char *)this + 0x66ec)) ? 0.0f : (gpGlobals->curtime - *(float *)((char *)this + 0x66ec));
		if (flElapsed > (g_1093f8ec->vfunc1() ? g_104454c4 : g_1093f8ec->m_fValue)) {
			float flMax = g_1093d574->vfunc1() ? g_104454c4 : g_1093d574->m_fValue;
			if (flMax < *(float *)((char *)this + 0x6264))
				return false;
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x103cf770 size=0x3da
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "utlvector.h"
#include "engineserver.h"
#include "globalvars.h"
#include "CAIHintSlots.h"
#include "CEntityVSlots.h"

inline bool operator==(const CNPC_VWerewolfVec3 &a, const CNPC_VWerewolfVec3 &b)
{
	return b.x == a.x && b.y == a.y && b.z == a.z;
}


inline int AddTailV(CUtlVector<CNPC_VWerewolfVec3> &v, const CNPC_VWerewolfVec3 &src)
{
	return v.InsertBefore(*(volatile int *)&v.m_Size, src);
}
static inline void WWStamp(CNPC_VWerewolf *p)
{
	p->m_nTick66d4 = engine->vfunc120();
	p->m_fl66d8 = gpGlobals->curtime;
	p->m_n66b8 = 0;
}

bool CNPC_VWerewolf::sub_103cf770()
{
	ScopeTrace trace("CNPC_VWerewolf::CheckAllRandomMoveHints", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CNPC_VWerewolfVec3 vecOrigin;
	if (m_pHint66bc) {
		CNPC_VWerewolfVec3 vecStart = *(CNPC_VWerewolfVec3 *)vfunc217();
		CNPC_VWerewolfVec3 vecHint;
		sub_103d68d0(&vecHint, m_pHint66bc);
		if ((char)sub_103d0db0(vecStart, vecHint))
			return true;
		sub_103d4690();
	}
	sub_103d1ca0();
	WWStamp(this);
	CNPC_VWerewolfHint66b0 *pHint = (CNPC_VWerewolfHint66b0 *)g_10925450;
	vecOrigin = *(CNPC_VWerewolfVec3 *)vfunc217();
	CUtlVector<CNPC_VWerewolfVec3> tried;
	while (pHint) {
		char c = sub_103d2810(pHint);
		if (c) {
			sub_103d4690();
			sub_103d44e0(pHint, 1);
			return sub_103d1d60("CheckAllRandomMoveHints", true);
		}
		CNPC_VWerewolfVec3 vecGround;
		bool b;
		if ((char)(int)pHint != c) { b = sub_103d7dc0(pHint); goto L2; }
		b = sub_103d7dc0(pHint);
	L1:
	L2:
		if (b) {
			CNPC_VWerewolfVec3 tmp;
			vecGround = *sub_103d68d0(&tmp, pHint);
			if (tried.Find(vecGround) == -1) {
				Vector d;
				VectorSubtract(*(Vector *)&vecOrigin, *((CEntityVSlots *)pHint)->slot217(), d);
				if (d.Length() < 1500.0f) {
					CNPC_VWerewolfVec3 tmp2;
					if ((char)sub_103d0db0(vecOrigin, *sub_103d6770(&tmp2, pHint))) {
						sub_103d4690();
						sub_103d44e0(pHint, 1);
						return sub_103d1d60("CheckAllRandomMoveHints", true);
					}
				}
			}
		}
		AddTailV(tried, vecGround);
		pHint = pHint->m_pNext;
	}
	return sub_103d1d60("CheckAllRandomMoveHints", false);
}
// END FUNCTION

// FUNCTION: 0x103cfc50 size=0x507
#include "utlsortvector.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
// TARGET: CNPC_VWerewolf::sub_103cfc50
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "utlvector.h"
#include "engineserver.h"
#include "globalvars.h"
#include "Tier1.h"

inline bool operator==(const CNPC_VWerewolfVec3 &a, const CNPC_VWerewolfVec3 &v) { return (v.x == a.x) && (v.y == a.y) && (v.z == a.z); }
struct CWWView : CNPC_VWerewolf { bool sub_103d0db0(CNPC_VWerewolfVec3 a, CNPC_VWerewolfVec3 b); };
struct CWWHintView : CNPC_VWerewolf { CNPC_VWerewolfVec3 sub_103d68d0(void *pHint); CNPC_VWerewolfVec3 sub_103d6770(void *pHint); };
#define HV ((CWWHintView *)this)

extern CAI_Hint *g_10925450;

struct WWTimerCvar
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad04[0x24];
	float m_f28;
	float GetFloat() { return vfunc1() ? 0.0f : m_f28; }
};
extern WWTimerCvar *g_1093d574;

struct CWWIdSpace { int ScheduleGlobalToLocal(int id) const; };
struct CWWNpcView : CNPC_VWerewolf { CWWIdSpace *GetClassScheduleIdSpace(); };
struct CWWScheduleV { char m_pad[0x1c]; int m_iScheduleId; int GetId() const { return m_iScheduleId; } };
inline bool WW_IsCurSchedule(CNPC_VWerewolf *p, int schedId, bool fTranslate = true)
{
	return (p->m_pSchedule5c38 &&
	        ((fTranslate && p->m_pSchedule5c38 == (CNPC_VWerewolfSchedule *)p->sub_102cc1f0(schedId)) ||
	         (!fTranslate && ((CWWNpcView *)p)->GetClassScheduleIdSpace()->ScheduleGlobalToLocal(((CWWScheduleV *)p->m_pSchedule5c38)->m_iScheduleId) == schedId)));
}

char CNPC_VWerewolf::sub_103cfc50()
{
	ScopeTrace scope("CNPC_VWerewolf::CheckAllMoveHints",
	                 this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (WW_IsCurSchedule(this, 0x15f) || WW_IsCurSchedule(this, 0x15b)
	    || WW_IsCurSchedule(this, 0x15a) || WW_IsCurSchedule(this, 0x160))
		return true;

	CNPC_VWerewolfVec3 hintPos;
	if (!sub_103cf5f0())
		return false; else { if (m_pHint66bc)
	{
		CNPC_VWerewolfVec3 vHint = HV->sub_103d68d0(m_pHint66bc);
		CNPC_VWerewolfVec3 vTarget = sub_103d9c90();
		if (((CWWView *)this)->sub_103d0db0(vHint, vTarget))
			return true;
	}

	sub_103d1ca0();
	m_nTick66d4 = engine->vfunc120();
	m_fl66d8 = gpGlobals->curtime;
	m_n66b8 = 0;

	CAI_Hint *pHint = g_10925450;
	Vector vOrigin = *(Vector *)((CNPC_VWerewolf *)(void *)this)->vfunc217();
	CNPC_VWerewolfVec3 vTarget = sub_103d9c90();
	float flLimit1 = g_1093d574->vfunc1() ? 0.0f : g_1093d574->m_f28;
	float flLimit2 = g_1093d574->vfunc1() ? 0.0f : g_1093d574->m_f28;

	CUtlVector<CNPC_VWerewolfVec3> vecPositions;

	while (pHint)
	{
		if (sub_103d2070(pHint))
		{
			goto found1;
		}

		if (sub_103d8060(pHint))
		{
			hintPos = HV->sub_103d68d0(pHint);

			if (vecPositions.Find(hintPos) == -1)
			{
				if ((vOrigin - *(Vector *)((CNPC_VWerewolf *)(void *)pHint)->vfunc217()).Length() < flLimit2
				    && (*(Vector *)&hintPos - *(Vector *)&vTarget).Length() < flLimit1
				    && ((CWWView *)this)->sub_103d0db0(hintPos, vTarget))
				{
					if (((CWWView *)this)->sub_103d0db0(*(CNPC_VWerewolfVec3 *)&vOrigin, HV->sub_103d6770(pHint)))
					{
						goto found2;
					}
				}
			}
		}

		vecPositions.AddToTail(hintPos);
		pHint = pHint->m_pNext;
	}
	g_109f364c("CNPC_VWerewolf::CheckAllMoveHints FAILED.\n");
	return sub_103d1d60("CheckAllMoveHints", false);
found1:
	sub_103d4690();
	sub_103d44e0((CNPC_VWerewolfHint66b0 *)pHint, 0);
	return sub_103d1d60("CheckAllMoveHints", true);
found2:
	sub_103d4690();
	sub_103d44e0((CNPC_VWerewolfHint66b0 *)pHint, 0);
	return sub_103d1d60("CheckAllMoveHints", true);


}
}
// END FUNCTION

// FUNCTION: 0x103d02b0 size=0x108
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"

extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)
extern float g_10462950;	// 40.0f

void CNPC_VWerewolf::vfunc561(int a, int b)
{
	ScopeTrace trace("CNPC_VWerewolf::GatherAttackConditions", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntityVSlots *pEnemy = (CEntityVSlots *)((CEntityVSlots *)this)->slot167();
	if (((m_nFlags66e8 & 4) == 4 || (m_nFlags66e8 & 0x100) == 0x100) && pEnemy) {
		float z = ((CEntityVSlots *)this)->slot217()->z;
		if ((float)fabs(z - pEnemy->slot217()->z) > g_10462950) {
			sub_10015839(0x51);
			sub_10015839(0x52);
			return;
		}
	}
	sub_1026dd10(a, b);
}
// END FUNCTION

// FUNCTION: 0x103d0410 size=0x1c0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CDevFlagObj.h"

struct CWerewolfSignal
{
	virtual void v0();
	virtual void v1();
};
extern CWerewolfSignal *g_10924a6c;
extern CDevFlagObj *g_1093f9a4;
extern Vector g_1070d1b0;

class CWWView
{
public:
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7)
	EVS10(8) EVS10(9) EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165) EVS(166)
	virtual CWWView *slot167();
	EVS(168) EVS(169)
	EVS10(17) EVS10(18) EVS10(19) EVS10(20) EVS10(21)
	virtual Vector *slot220(Vector *pOut);
	EVS(221) EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29) EVS10(30)
	EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38)
	EVS10(39) EVS10(40) EVS10(41) EVS10(42) EVS10(43) EVS10(44) EVS10(45) EVS10(46)
	EVS10(47) EVS10(48) EVS10(49) EVS10(50) EVS10(51) EVS10(52) EVS10(53)
	EVS(540) EVS(541) EVS(542) EVS(543)
	virtual void slot544(CWWView *pTarget, Vector *pPos);
};

// TARGET: CNPC_VWerewolf::vfunc433
void CNPC_VWerewolf::vfunc433()
{
	ScopeTrace trace("CNPC_VWerewolf::GatherConditions", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CWWView *pTarget = ((CWWView *)this)->slot167();
	float flLimit = m_f66d0 + m_f66cc + 1.0;
	if (pTarget) {
		g_10924a6c->v1();
		sub_10269a20(0x46);
		((CWWView *)this)->slot544(pTarget, pTarget->slot220(&g_1070d1b0));
		if (m_f6264 < flLimit) {
			g_10924a6c->v1();
			sub_10269a20(0x5f);
		}
	}
	sub_102b27f0();
	if (pTarget) {
		sub_103cc0d0();
		sub_103cc320();
		sub_103cc890();
		sub_103cc5c0();
		sub_103cc450();
	}
	if (sub_10269aa0(9)) {
		g_10924a6c->v1();
		sub_10269a20(0x60);
	}
	if (sub_10269aa0(0x60)) {
		g_10924a6c->v1();
		sub_10269a20(9);
	}
	if (m_pHint66bc) {
		g_10924a6c->v1();
		sub_10269a20(0x78);
	}
	if (!g_1093f9a4->vfunc1() && g_1093f9a4->m_n2c) {
		sub_10015839(0x51);
		sub_10015839(0x52);
		sub_10015839(0x78);
		sub_10015839(0x79);
	}
}
// END FUNCTION

// FUNCTION: 0x103d0640 size=0xfc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"

const char *CNPC_VWerewolf::vfunc408(int condition)
{
	ScopeTrace t("CNPC_VWerewolf::GetShortConditionName", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	switch (condition) {
	case 0x77:
		return "ww0";
	case 0x78:
		return "ww1";
	case 0x79:
		return "ww2";
	case 0x7a:
		return "ww3";
	case 0x7b:
		return "ww4";
	default:
		return sub_1027ede0(condition);
	}
}
// END FUNCTION

// FUNCTION: 0x103d0780 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_103d0780(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::GetLastSharedCondition";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x7c;
}
// END FUNCTION

// FUNCTION: 0x103d0820 size=0x198
#include "CNPC_VWerewolf.h"
#include "CWerewolfIdealStateSlots.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct CWerewolfStateView {
	char m_pad0000[0x1b38];
	int m_n1b38;
	const char *m_psz1b3c;
	int m_n1b40;
	char m_pad1b44[0x5cc4 - 0x1b44];
	int m_nIdealState;
};
extern char g_10662220[];

int CNPC_VWerewolf::vfunc461()
{
	ScopeTrace trace("CNPC_VWerewolf::SelectIdealState", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	CWerewolfStateView *p = (CWerewolfStateView *)this;
	CWerewolfIdealStateSlots *pSlots = (CWerewolfIdealStateSlots *)this;
	p->m_n1b38 = 0x29;
	pSlots->slot433();
	bool bBase = false;
	if (pSlots->slot158() && !sub_10269aa0(0x7a)) {
		if (!sub_103cf5f0()) {
			p->m_n1b40 = 0xaf3;
			p->m_nIdealState = 9;
		} else if (pSlots->slot167()) {
			if (sub_10269aa0(0x51) || sub_10269aa0(0x52)) {
				p->m_n1b40 = 0xafb;
				p->m_nIdealState = 2;
			} else if (sub_10269aa0(0x78) || sub_10269aa0(0x59)) {
				p->m_n1b40 = 0xb00;
				p->m_nIdealState = 0xb;
			} else {
				p->m_n1b40 = 0xb05;
				p->m_nIdealState = 2;
			}
		} else {
			bBase = true;
		}
	} else {
		p->m_n1b40 = 0xaec;
		p->m_nIdealState = 7;
	}
	if (!bBase) {
		p->m_psz1b3c = g_10662220;
		sub_1026e340(p->m_nIdealState);
		return p->m_nIdealState;
	}
	return sub_102ad660();
}
// END FUNCTION

// FUNCTION: 0x103d0a30 size=0x74
#include "CNPC_VWerewolf.h"
#include "CAI_BaseNPCTroika.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc516()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::MaxYawSpeed";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CAI_BaseNPCTroika *)this)->sub_10011dc4();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103d0ad0 size=0xd5
#include "CNPC_VWerewolf.h"
#include "CEntityVSlots.h"
#include "Tier1.h"

extern int g_106c994c;

static inline void *GetNodeAt(CNPC_VWerewolfNodeNet *net, int idx)
{
	if (idx >= 0 && idx < net->m_nNodes)
		return net->m_ppNodes[idx];
	g_106c994c++;
	return 0;
}

void *CNPC_VWerewolf::sub_103d0ad0()
{
	if (m_flNodeTime + 0.25f < gpGlobals->curtime)
		m_pNode = 0;
	void *pNode = m_pNode;
	if (pNode)
		return pNode;
	m_pNode = pNode;
	CNPC_VWerewolfHelper5d34 *h = m_pHelper5d34;
	h->m_n08 = h->m_pOwner->m_n156c;
	h->m_n0c = gpGlobals->framecount;
	CNPC_VWerewolfNodeNet *pNet = m_pHelper5d34->m_pNet;
	int idx = pNet->sub_102f3c10(this, (const float *)((CEntityVSlots *)this)->slot220());
	if (idx != -1)
		m_pNode = GetNodeAt(m_pHelper5d34->m_pNet, idx);
	else
		g_109f364c("GetNearestNode failed\n");
	m_flNodeTime = gpGlobals->curtime;
	return m_pNode;
}
// END FUNCTION

// FUNCTION: 0x103d0bf0 size=0x152
#include "CNPC_VWerewolf.h"
#include "CGlobalEntityList.h"

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

extern CGlobalEntityList *g_10566458;
extern float g_10450aa4;
extern int g_106c994c;
extern char g_1066249c[];
extern void (*g_109f364c)(const char *pFormat, ...);

struct GlobalsView	// the engine globals: the current time at +0xc, another counter at +4
{
    char m_pad0000[4];
    int m_n04;
    char m_pad0008[4];
    float m_curtime;	// 0x0c
};
extern GlobalsView *g_1070b228;

struct EntOriginView	// an entity: slot 220 gives its origin
{
    SLOTS10(a0) SLOTS10(a1) SLOTS10(a2) SLOTS10(a3) SLOTS10(a4) SLOTS10(a5) SLOTS10(a6) SLOTS10(a7) SLOTS10(a8) SLOTS10(a9)
    SLOTS10(b0) SLOTS10(b1) SLOTS10(b2) SLOTS10(b3) SLOTS10(b4) SLOTS10(b5) SLOTS10(b6) SLOTS10(b7) SLOTS10(b8) SLOTS10(b9)
    SLOTS10(c0) SLOTS10(c1)
    virtual float *vfunc220();
};

struct NodeNetView : public CNPC_VWerewolfNodeNet
{
    int sub_102f41b0(const float *pOrigin);	// stub 0x1000109b: the index of the node nearest to the origin, -1 when there is none
};

struct Holder
{
    char m_pad0000[0x5d34];
    CNPC_VWerewolfHelper5d34 *m_pHelper;	// 0x5d34
    char m_pad5d38[0x628c - 0x5d38];
    unsigned int m_hPlayer;	// 0x628c
    char m_pad6290[0x6700 - 0x6290];
    float m_flNodeTime;	// 0x6700
    void *m_pNode;	// 0x6704
};

static inline CGlobalEntityList_Ent *ResolveHandle(unsigned int h)
{
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (int)(h >> 13))
            return pSlot->m_pEntity;
    }
    return 0;
}

void *__fastcall sub_103d0bf0(Holder *p)
{
    const unsigned int *ph = &p->m_hPlayer;
    const unsigned int *ph2 = &p->m_hPlayer;
    float t0; t0 = p->m_flNodeTime;
    if (g_10450aa4 + t0 < g_1070b228->m_curtime)
        p->m_pNode = 0;
    void *pNode = p->m_pNode;
    if (!pNode) {
        p->m_pNode = pNode;
        if (ResolveHandle(*ph)) {
            EntOriginView *pPlayer = (EntOriginView *)ResolveHandle(*ph2);
            float *pOrigin = pPlayer->vfunc220();
            CNPC_VWerewolfVec3 v;
            v.x = pOrigin[0];
            v.y = pOrigin[1];
            v.z = pOrigin[2];
            CNPC_VWerewolfHelper5d34 *pHelper = p->m_pHelper;
            pHelper->m_n08 = pHelper->m_pOwner->m_n156c;
            pHelper->m_n0c = g_1070b228->m_n04;
            NodeNetView *pNet0 = (NodeNetView *)p->m_pHelper->m_pNet;
            int index; index = pNet0->sub_102f41b0(&v.x);
            if ((int)index != -1) {
                CNPC_VWerewolfNodeNet *pNet = p->m_pHelper->m_pNet;
                void *n;
                if (index >= 0 && index < pNet->m_nNodes) {
                    n = pNet->m_ppNodes[index];
                } else {
                    g_106c994c++;
                    n = 0;
                }
                p->m_pNode = n;
            } else {
                g_109f364c(g_1066249c);
            }
        }
        GlobalsView *g = g_1070b228;
        *(unsigned int *)&p->m_flNodeTime = (*(unsigned int *)&g->m_curtime);
        pNode = p->m_pNode;
    }
    return pNode;
}
// END FUNCTION

// FUNCTION: 0x103d0db0 size=0x8a
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VWerewolf::sub_103d0db0(CNPC_VWerewolfVec3 a, CNPC_VWerewolfVec3 b)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::HasPath";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = m_pHelper5d34->sub_10004e58(&a, &b);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x103d0e70 size=0x39
int *sub_103d0bf0(void);
int *__fastcall sub_10007cca(void *p);

// TARGET: sub_103d0e70
bool __stdcall sub_103d0e70(void *pArg)
{
    int *pA = sub_103d0bf0();
    int *pB = sub_10007cca(pArg);
    if (pB && pA && pA[0x94 / 4] && pB[0x94 / 4])
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x103d0ec0 size=0x284
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"

#define WS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define WS100(p) WS10(p##0) WS10(p##1) WS10(p##2) WS10(p##3) WS10(p##4) WS10(p##5) WS10(p##6) WS10(p##7) WS10(p##8) WS10(p##9)

struct CNPC_VWerewolfSlotsFB
{
	WS100(a) WS100(b) WS10(c)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual CNPC_VWerewolfVec3 *vfunc217();
};

extern CNPC_VWerewolfHint66b0 *g_10925450;

bool CNPC_VWerewolf::sub_103d0ec0()
{
	ScopeTrace trace("CNPC_VWerewolf::FindBreakHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_pHint66c4 != 0 && sub_103d8550(m_pHint66c4)) {
		CNPC_VWerewolfVec3 tmp;
		CNPC_VWerewolfVec3 *pGround = sub_103d6770(&tmp, m_pHint66c4);
		CNPC_VWerewolfVec3 *pOrigin = ((CNPC_VWerewolfSlotsFB *)this)->vfunc217();
		if ((char)sub_103d0db0(*pOrigin, *pGround))
			return true;
	}
	m_nTick66d4 = engine->vfunc120();
	m_fl66d8 = gpGlobals->curtime;
	CNPC_VWerewolfHint66b0 *pHint = g_10925450;
	if (!pHint)
		return false;
	if (!m_h628c.Get())
		return false;
	float flBest = 3.4028235e+38f;
	CNPC_VWerewolfVec3 vOrigin = *((CNPC_VWerewolfSlotsFB *)this)->vfunc217();
	CNPC_VWerewolfVec3 vTarget = sub_103d9c90();
	CNPC_VWerewolfHint66b0 *pBest = 0;
	for (; pHint && pHint != (CNPC_VWerewolfHint66b0 *)0; pHint = pHint->m_pNext) {
		if (sub_103d8550(pHint)) {
			CNPC_VWerewolfVec3 pt;
			sub_103d6770(&pt, pHint);
			float d = (*(Vector *)&vTarget - *(Vector *)&pt).Length();
			if (flBest > d && (char)sub_103d0db0(vOrigin, pt)) {
				flBest = d;
				pBest = pHint;
			}
		}
	}
	m_pHint66c4 = pBest;
	return m_pHint66c4 != 0;
}
// END FUNCTION

// FUNCTION: 0x103d1200 size=0x245
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
extern CNPC_VWerewolfHint66b0 *g_10925450;
extern CNPC_VWerewolfVec3 g_1070d1b0;

bool CNPC_VWerewolf::sub_103d1200()
{
	ScopeTrace trace("CNPC_VWerewolf::FindEgressHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_pHint66bc) {
		CBaseEntity *pTarget = vfunc167();
		if (pTarget) {
			bool bPath;
			{
				CNPC_VWerewolfVec3 tmp;
				bPath = (char)sub_103d0db0(*vfunc217(), *sub_103d6770(&tmp, m_pHint66bc));
			}
			if (bPath) {
				CNPC_VWerewolf *pT = (CNPC_VWerewolf *)vfunc167();
				if ((char)sub_103d0db0(sub_103d6650(m_pHint66bc), *pT->vfunc217()))
					return true;
			}
		}
		sub_103d4690();
	}
	for (CNPC_VWerewolfHint66b0 *pHint = g_10925450; pHint; pHint = pHint->m_pNext) {
		if (pHint->m_nType == 0x3aa8) {
			bool bPath;
			{
				CNPC_VWerewolfVec3 tmp;
				bPath = (char)sub_103d0db0(*vfunc217(), *sub_103d6770(&tmp, pHint));
			}
			if (bPath) {
				if (!vfunc617_slot(sub_103d6650(pHint), 0, 0, g_1070d1b0))
					break;
				sub_103d44e0(pHint, 0);
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103d14f0 size=0x612
#define sub_103d0db0(a, b) sub_103d0db0_int(a, b); bool sub_103d0db0(a, b)
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "utlvector.h"
#include "CAIHintSlots.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "Tier1.h"

#undef sub_103d0db0

extern Vector g_1070d1b0;

inline bool operator==(const CNPC_VWerewolfVec3 &a, const CNPC_VWerewolfVec3 &b) { return b.x == a.x && b.y == a.y && b.z == a.z; }

// TARGET: CNPC_VWerewolf::sub_103d14f0
bool CNPC_VWerewolf::sub_103d14f0()
{
	ScopeTrace trace("CNPC_VWerewolf::FindRandomMoveHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_nTick66d4 == engine->vfunc120())
		return false;
	if (m_fl66d8 + 0.25f > gpGlobals->curtime)
		return false;
	if (m_pHint66bc)
		return true;
	sub_103d1ca0();
	m_nTick66d4 = engine->vfunc120();
	m_fl66d8 = gpGlobals->curtime;
	if (!g_10925450)
		return false;
	if (!g_10566458->sub_100290c0((unsigned int *)((char *)this + 0x628c)))
		return false;

	CAI_Hint *pCur = m_n66b8 ? ((CAI_Hint *)m_n66b8)->m_pNext : 0;
	if (!pCur)
		pCur = g_10925450;

	CAI_Hint *pBest = 0;
	int nTried = 0;
	bool bSuccess = false;
	float flBest = 3.4028235e+38f;
	Vector vecOrigin = *(Vector *)vfunc217();
	CNPC_VWerewolfVec3 vecRef3 = sub_103d9c90();
	Vector &vecRef = *(Vector *)&vecRef3;
	bool bFound = false;
	Vector vecHint = g_1070d1b0;
	Vector vecEnd = g_1070d1b0;
	CUtlVector<CNPC_VWerewolfVec3> vecUnreachable;
	CUtlVector<CNPC_VWerewolfVec3> vecReachable;
	if ((m_nFlags66e8 & 2) == 2 && m_pHint66c4)
	{
		CNPC_VWerewolfVec3 tmp;
		vecRef3 = *sub_103d6770(&tmp, m_pHint66c4);
	}
	do
	{
		if (sub_103d2810(pCur))
		{
			pBest = pCur;
			break;
		}
		if (sub_103d7dc0(pCur))
		{
			if (nTried >= 5)
			{
				if (!pBest)
				{
					m_n66b8 = (int)pCur;
					return sub_103d1d60("FindRandomMoveHint", false);
				}
				break;
			}
			bFound = false;
			CNPC_VWerewolfVec3 t1;
			CNPC_VWerewolfVec3 t2;
			vecHint = *(Vector *)sub_103d6770(&t1, pCur);
			vecEnd = *(Vector *)sub_103d68d0(&t2, pCur);
			float dist = (vecEnd - vecRef).Length();
			if (dist < flBest && vecUnreachable.Find(*(CNPC_VWerewolfVec3 *)&vecEnd) == -1)
			{
				if (vecReachable.Find(*(CNPC_VWerewolfVec3 *)&vecEnd) != -1)
				{
					bFound = true;
				}
				else
				{
					nTried++;
					if (sub_103d0db0(*(CNPC_VWerewolfVec3 *)&vecOrigin, *(CNPC_VWerewolfVec3 *)&vecHint))
					{
						vecReachable.AddToTail(*(CNPC_VWerewolfVec3 *)&vecEnd);
						bFound = true;
					}
				}
				if (bFound)
				{
					pBest = pCur;
					flBest = dist;
				}
			}
		}
		if (!bFound)
			vecUnreachable.AddToTail(*(CNPC_VWerewolfVec3 *)&vecEnd);
		pCur = pCur->m_pNext;
		if (!pCur && m_n66b8)
		{
			void *pNode = sub_103d0ad0();
			if (pNode)
				m_n670c = *(int *)((char *)pNode + 0x94);
			g_109f3630("FindRandomMoveHint() looped through the entire list\n");
			pCur = g_10925450;
		}
	} while (pCur != (CAI_Hint *)m_n66b8);
	m_n66b8 = (int)pBest;
	if (pBest)
	{
		bSuccess = true;
		sub_103d44e0((CNPC_VWerewolfHint66b0 *)pBest, 1);
	}
	return sub_103d1d60("FindRandomMoveHint", bSuccess);
}
// END FUNCTION

// FUNCTION: 0x103d1ca0 size=0x81
#include "CNPC_VWerewolf.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106625b0[];
extern char g_105387dc[];
extern char g_106b8540[];
extern unsigned int g_1093d638[2];
void CNPC_VWerewolf::sub_103d1ca0()
{
    const char *name;
    if (this != 0) {
        name = *(const char **)((char *)this + 0x26c);
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    unsigned int *p = g_1093d638;
    g_109f3620[*g_109f3680].a = g_106625b0;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    __asm {
        mov ecx, p
        rdtsc
        mov [ecx], eax
        mov [ecx + 4], edx
    }
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103d1d60 size=0xbe
#include "CNPC_VWerewolf.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

#pragma pack(push, 4)
struct CCycleCount {
	__int64 m_Int64;
	CCycleCount() : m_Int64(0) {}
	void Sample() {
		__int64 *p = &m_Int64;
		__asm {
			mov ecx, p
			rdtsc
			mov dword ptr [ecx], eax
			mov dword ptr [ecx + 4], edx
		}
	}
};
#pragma pack(pop)

inline CCycleCount GetCycleCount()
{
	CCycleCount cc;
	cc.Sample();
	return cc;
}

extern __int64 g_1093d638;

bool CNPC_VWerewolf::sub_103d1d60(const char *pszName, bool bValue)
{
	ScopeTrace trace("CNPC_VWerewolf::ReportSearchTimer",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_1093d638 = GetCycleCount().m_Int64 - g_1093d638;
	return bValue;
}
// END FUNCTION

// FUNCTION: 0x103d1e50 size=0x1a1
#include "CNPC_VWerewolf.h"
#include "CEHandleGet.h"
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"
#include <math.h>

bool CNPC_VWerewolf::sub_103d1e50()
{
	if (m_nDoorState == 2)
		return true;
	if (m_nDoorState != 0 && EHandle_Get(m_hRotDoor1) && EHandle_Get(m_hRotDoor2)) {
		Vector d = ((CEntitySoundOriginView *)EHandle_Get(m_hRotDoor1))->WorldSpaceCenter() - ((CEntitySoundOriginView *)EHandle_Get(m_hRotDoor2))->WorldSpaceCenter();
		float dx = fabs(d.x);
		float dy = fabs(d.y);
		float dz = fabs(d.z);
		float r;
		if (dx > dy) {
			if (dx > dz)
				r = (dz + dy) * 0.25f + dx;
			else
				goto zmax;
		} else if (dy > dz) {
			r = (dz + dx) * 0.25f + dy;
		} else {
zmax:
			dz += (dx + dy) * 0.25f;
			r = dz;
		}
		if (r > 135.0f)
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103d2070 size=0x60b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "CAI_BaseNPC.h"
#include "CUnknown102d1220.h"
#include "ScopeTrace.h"
#include "string_t.h"
#include <string.h>
#pragma intrinsic(strlen)
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);

struct WWHint103d2070 {
	char m_pad0[0x26c];
	string_t m_iName;
	char m_pad1[0x5dc - 0x270];
	int m_type5dc;
	char m_pad2[0x5e8 - 0x5e0];
	int m_flag5e8;

	const char *GetName() const { const char *p = *(const char * volatile *)&m_iName.pszValue; return p ? p : g_106b8540; }
	bool NameMatches(const char *pszQuery)
	{
		if (m_iName.pszValue && m_iName.pszValue == pszQuery)
			return true;
		int len = strlen(pszQuery);
		if (!len)
			return *(const char * volatile *)&m_iName.pszValue == 0;
		char c = pszQuery[len - 1];
		if (c != '*')
			return !_strcmpi(GetName(), pszQuery);
		return !_strnicmp(GetName(), pszQuery, len - 1);
	}
};

#define HINT_IS(type, name) ((CUnknown102d1220 *)pH)->sub_102d1220(type, name)
#define ORIGIN ((float *)((CAI_BaseNPC *)this)->vfunc220())

// TARGET: CNPC_VWerewolf::sub_103d2070
bool CNPC_VWerewolf::sub_103d2070(void *pHint)
{
	ScopeTrace trace("CNPC_VWerewolf::IsImperativeMoveHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	WWHint103d2070 *pH = (WWHint103d2070 *)pHint;
	CNPC_VWerewolfVec3 tmp;
	CNPC_VWerewolfVec3 *pGround;
	float *pOrigin;

	if ((m_nFlags66e8 & 0x100) == 0x100 && (m_nFlags66e8 & 4) != 4) {
		if ((m_nFlags66e8 & 0x80) == 0x80 && sub_103d1e50()) {
			if (pH->m_type5dc == 0x3aaa)
				return true;
		} else if (pH->m_type5dc == 0x3aa6)
			goto RetTrue;
	}
	if ((m_nFlags66e8 & 0x200) == 0x200) {
		if (pH->m_flag5e8 != 0)
			goto RetFalse;
		if (HINT_IS(0x3a9b, "wall_b_1_breakthrough_r") || HINT_IS(0x3a99, "wall_b_1_breakthrough_f") || HINT_IS(0x3a9a, "wall_b_1_breakthrough_l")
			|| HINT_IS(0x3a9e, "wall_b_1_squeeze_right") || HINT_IS(0x3a9c, "wall_b_1_squeeze_front") || HINT_IS(0x3a9d, "wall_b_1_squeeze_left")
			|| HINT_IS(0x3a99, "door_b_5_breakthrough") || HINT_IS(0x3a9c, "door_b_5_squeeze_front")) {
			pGround = sub_103d6770(&tmp, pH);
			pOrigin = ORIGIN;
			if ((char)sub_103d0db0(*(CNPC_VWerewolfVec3 *)pOrigin, *pGround))
				goto RetTrue;
		}
	}
	if ((m_nFlags66e8 & 0x400) == 0x400) {
		if (pH->m_flag5e8 != 0)
			goto RetFalse;
		if (HINT_IS(0x3a99, "tramdoor_b_1_breakthrough_f") || HINT_IS(0x3a9c, "tramdoor_b_1_squeeze_front") || HINT_IS(0x3a9e, "tramdoor_a_1_squeeze_right")
			|| HINT_IS(0x3a9c, "tramdoor_a_1_squeeze_front") || HINT_IS(0x3a9d, "tramdoor_a_1_squeeze_left")) {
			pGround = sub_103d6770(&tmp, pH);
			pOrigin = ORIGIN;
			if ((char)sub_103d0db0(*(CNPC_VWerewolfVec3 *)pOrigin, *pGround))
				goto RetTrue;
		}
	}
	if ((m_nFlags66e8 & 4) != 4 || (m_nFlags66e8 & 0x100) == 0x100)
		goto RetFalse;
	if (pH->m_type5dc == 0x3aa7) {
		pGround = sub_103d6770(&tmp, pH);
		pOrigin = ORIGIN;
		goto HasPath;
	} else if (sub_103d1e50()) {
		if (pH->m_type5dc == 0x3aa5) {
			pGround = sub_103d6770(&tmp, pH);
			pOrigin = ORIGIN;
			if ((char)sub_103d0db0(*(CNPC_VWerewolfVec3 *)pOrigin, *pGround))
				goto RetTrue;
		}
		if (pH->m_type5dc != 0x3aa4)
			goto RetFalse;
		if (!(pH->NameMatches("jump_to_platform_hint_1") || pH->NameMatches("jump_to_platform_hint_2")))
			goto RetFalse;
	} else {
		if (pH->m_type5dc != 0x3a9c)
			goto RetFalse;
		if (!(pH->NameMatches("archway_a_5_squeeze_front") || pH->NameMatches("archway_b_6_squeeze_front")))
			goto RetFalse;
	}
	pGround = sub_103d6770(&tmp, pH);
	pOrigin = ORIGIN;
HasPath:
	if ((char)sub_103d0db0(*(CNPC_VWerewolfVec3 *)pOrigin, *pGround)) {
RetTrue:
		return true;
	}
RetFalse:
	return false;
}
// END FUNCTION

// FUNCTION: 0x103d2810 size=0x184
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

// The werewolf's vtable out to slot 617, to call slots 220 and 617.
struct CWerewolfSlots
{
	V100(a) V100(b) V10(c0) V10(c1)
	virtual float *slot220();
	V100(d) V100(e) V100(f) V10(g0) V10(g1) V10(g2) V10(g3) V10(g4) V10(g5) V10(g6) V10(g7) V10(g8)
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5();
	virtual bool slot617(CNPC_VWerewolfVec3 a, int b, int c, CNPC_VWerewolfVec3 d);
};

struct CWerewolfTimerGlobal
{
	virtual void v0();
	virtual bool v1();
	char pad[0x28 - 4];
	float m_f28;
};

extern CWerewolfTimerGlobal *g_1093d574;
extern float g_104454c4;
extern CNPC_VWerewolfVec3 g_1070d1b0;

bool CNPC_VWerewolf::sub_103d2810(void *pHint)
{
	ScopeTrace trace("CNPC_VWerewolf::IsImperativeRandomMoveHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (*(int *)((char *)pHint + 0x5dc) == 0x3aa8) {
		float t = g_1093d574->v1() ? g_104454c4 : g_1093d574->m_f28;
		if (t < *(float *)((char *)this + 0x6264)) {
			if (!((CWerewolfSlots *)this)->slot617(sub_103d6650(pHint), 1, 0, g_1070d1b0)) {
				CNPC_VWerewolfVec3 tmp;
				CNPC_VWerewolfVec3 *pGround = sub_103d6770(&tmp, pHint);
				CNPC_VWerewolfVec3 *pOrigin = (CNPC_VWerewolfVec3 *)((CWerewolfSlots *)this)->slot220();
				if ((char)sub_103d0db0(*pOrigin, *pGround))
					return true;
			}
		}
	}
	return sub_103d2070(pHint);
}
// END FUNCTION

// FUNCTION: 0x103d2a10 size=0x66b
#define sub_103d2a10() sub_103d2a10_void(); bool sub_103d2a10()
#define sub_103d0db0(a, b) sub_103d0db0_int(a, b); bool sub_103d0db0(a, b)
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "utlvector.h"
#include "CAIHintSlots.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "CAI_Node.h"
#include <stddef.h>

#undef sub_103d2a10
#undef sub_103d0db0

extern Vector g_1070d1b0;

// ai_node.h CAI_Node::GetZone() (m_zone at +0x94).
struct CAI_NodeV : CAI_Node { int GetZone() const { return m_n94; } };
// ai_hint.h CAI_Hint::HintType().
struct CAI_HintV : CAI_Hint { int HintType() const { return m_n5dc; } };

inline bool operator==(const CNPC_VWerewolfVec3 &a, const CNPC_VWerewolfVec3 &b) { return b.x == a.x && b.y == a.y && b.z == a.z; }

// TARGET: CNPC_VWerewolf::sub_103d2a10
bool CNPC_VWerewolf::sub_103d2a10()
{
	ScopeTrace trace("CNPC_VWerewolf::FindMoveHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_nTick66d4 == engine->vfunc120())
		return false;
	if (m_fl66d8 + 0.5f > gpGlobals->curtime)
		return false;
	if (m_pHint66bc)
		return true;
	if (!sub_103cf5f0())
		return false;
	sub_103d1ca0();
	m_nTick66d4 = engine->vfunc120();
	m_fl66d8 = gpGlobals->curtime;
	CAI_Hint *pHead = g_10925450;
	if (!pHead)
		return false;
	if (!g_10566458->sub_100290c0((unsigned int *)&m_h628c))
		return false;

	CAI_Hint *pCur = m_n66b8 ? ((CAI_Hint *)m_n66b8)->m_pNext : 0;
	if (!pCur)
		pCur = pHead;

	CAI_Hint *pBest = 0;
	int nTried = 0;
	bool bSuccess = false;
	float flBest = 2500.0f;
	Vector vecOrigin = *(Vector *)vfunc217();
	CNPC_VWerewolfVec3 vecRef3 = sub_103d9c90();
	Vector &vecRef = *(Vector *)&vecRef3;
	Vector vecHint = g_1070d1b0;
	Vector vecEnd = g_1070d1b0;
	CUtlVector<CNPC_VWerewolfVec3> vecUnreachable;
	CUtlVector<CNPC_VWerewolfVec3> vecReachable;
	if ((m_nFlags66e8 & 2) == 2 && m_pHint66c4)
	{
		CNPC_VWerewolfVec3 tmp;
		vecRef = *(Vector *)sub_103d6770(&tmp, m_pHint66c4);
	}
	do
	{
		if (sub_103d2070(pCur))
		{
			pBest = pCur;
			break;
		}
		if (sub_103d8060(pCur))
		{
			if (nTried >= 15)
			{
				if (pBest)
					break;
				m_n66b8 = (int)pCur;
				return sub_103d1d60("FindMoveHint", false);
			}
			int nType = ((CAI_HintV *)pCur)->HintType();
			sub_103d6390(pCur);
			CNPC_VWerewolfVec3 t1;
			CNPC_VWerewolfVec3 t2;
			vecHint = *(Vector *)sub_103d6770(&t1, pCur);
			*(CNPC_VWerewolfVec3 *)&vecEnd = *sub_103d68d0(&t2, pCur);
			Vector vd; VectorSubtract(vecOrigin, vecHint, vd); float dist = vd.Length();
			if (dist < flBest || nType == 0x3aa5)
			{
				if (vecUnreachable.Find(*(CNPC_VWerewolfVec3 *)&vecEnd) == vecUnreachable.InvalidIndex())
				{
					if (vecReachable.Find(*(CNPC_VWerewolfVec3 *)&vecEnd) == vecReachable.InvalidIndex())
					{
						nTried++;
						if (!sub_103d0db0(*(CNPC_VWerewolfVec3 *)&vecEnd, *(CNPC_VWerewolfVec3 *)&vecRef))
							goto add;
						nTried++;
						if (!sub_103d0db0(*(CNPC_VWerewolfVec3 *)&vecOrigin, *(CNPC_VWerewolfVec3 *)&vecHint))
							goto add;
						vecReachable.AddToTail(*(CNPC_VWerewolfVec3 *)&vecEnd);
					}
					flBest = dist;
					pBest = pCur;
					goto next;
				}
			}
add:
			vecUnreachable.AddToTail(*(CNPC_VWerewolfVec3 *)&vecEnd);
		}
next:
		pCur = pCur->m_pNext;
		if (!pCur && m_n66b8)
		{
			CAI_Node *pNode = (CAI_Node *)sub_103d0ad0();
			if (pNode != NULL)
				m_n6708 = ((CAI_NodeV *)pNode)->GetZone();
			pCur = g_10925450;
		}
	} while (pCur != (CAI_Hint *)m_n66b8);
	m_n66b8 = (int)pBest;
	if (pBest)
	{
		bSuccess = true;
		sub_103d44e0((CNPC_VWerewolfHint66b0 *)pBest, 0);
	}
	return sub_103d1d60("FindMoveHint", bSuccess);
}
// END FUNCTION

// FUNCTION: 0x103d3220 size=0xf6
#include "CNPC_VWerewolf.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

int CNPC_VWerewolf::sub_103d3220(void *pHint)
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CNPC_VWerewolf::GetHintTeleportPriority", ent, g_106b8540);
    int type = *(int *)((char *)pHint + 0x5dc);
    if (type == 0x3a99)
        return 2;
    if (type == 0x3a9a)
        return 3;
    if (type == 0x3a9b)
        return 3;
    if (type == 0x3a98)
        return 1;
    if (type == 0x3a9f)
        return 4;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103d3360 size=0x575
#include "CBaseEntity.h"
#include "CNPC_VWerewolf.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
extern CNPC_VWerewolfVec3 g_1070d1b0;

struct CWWHintView
{
	char m_pad0000[0x26c];
	const char *m_name26c;
	char m_pad0270[0x5dc - 0x270];
	int m_nType5dc;
};

__forceinline bool WWNameIs(CWWHintView *h, const char *s)
{
	if (h->m_name26c && h->m_name26c == s) return true;
	const char *const &rn = h->m_name26c;
	unsigned int len = strlen(s);
	int r;
	if (len == 0) {
		r = (int)rn;
	} else if (s[len - 1] != '*') {
		r = _strcmpi(rn ? rn : g_106b8540, s);
	} else {
		r = _strnicmp(rn ? rn : g_106b8540, s, len - 1);
	}
	return r == 0;
}

// TARGET: CNPC_VWerewolf::sub_103d3360
bool CNPC_VWerewolf::sub_103d3360(void *pHint)
{
	ScopeTrace trace("CNPC_VWerewolf::IsImperativeTeleportHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CWWHintView *h = (CWWHintView *)pHint;
	if ((m_nFlags66e8 & 0x200) == 0x200) {
		if (h->m_nType5dc == 0x3aa9 && WWNameIs(h, "cheater_outside_hint_2")) return true;
		if (h->m_nType5dc == 0x3a98 && WWNameIs(h, "shard_hint_3")) return true;
	}
	if ((m_nFlags66e8 & 0x400) == 0x400 && h->m_nType5dc == 0x3aa9 && WWNameIs(h, "cheater_outside_hint_3")) return true;
	if ((m_nFlags66e8 & 4) == 4) {
		if (m_nDoorState == 2 || m_nDoorState == 3) {
			if (h->m_nType5dc == 0x3aa9 && WWNameIs(h, "cheater_outside_hint_1")) return true;
			if (h->m_nType5dc == 0x3aa4) {
				if (WWNameIs(h, "jump_to_platform_hint_1") || WWNameIs(h, "jump_to_platform_hint_2")) {
					CNPC_VWerewolfVec3 *pPos = ((CNPC_VWerewolf *)pHint)->vfunc217();
					if (!vfunc617_slot(*pPos, 1, 0, g_1070d1b0)) return true;
				}
			}
		} else {
			if (h->m_nType5dc == 0x3a98 && WWNameIs(h, "skylight_2_teleports")) return true;
			if (h->m_nType5dc == 0x3a99 && ((CBaseEntity *)pHint)->sub_103d3a40("fulldoor_a_3_breakthrough_f")) return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103d3a40 size=0x87
#include "CBaseEntity.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
extern char g_106b8540[];

bool CBaseEntity::sub_103d3a40(const char *pszNameOrWildcard)
{
	if ((m_name26c ? m_name26c : g_106b8540) == pszNameOrWildcard)
		return true;
	unsigned int len = strlen(pszNameOrWildcard);
	if (len == 0)
		return *(const char *volatile *)&m_name26c == 0;
	if (pszNameOrWildcard[len - 1] != '*') {
		const char *name = *(const char *volatile *)&m_name26c;
		return _strcmpi(name ? name : g_106b8540, pszNameOrWildcard) == 0;
	}
	const char *name = *(const char *volatile *)&m_name26c;
	return _strnicmp(name ? name : g_106b8540, pszNameOrWildcard, len - 1) == 0;
}
// END FUNCTION

// FUNCTION: 0x103d3b00 size=0xa
#include "ConVar.h"
ConVar g_1093f780("werewolf_teleport_ignore_viewcone", "1", 0);
// END FUNCTION

// FUNCTION: 0x103d3b90 size=0xa
#include "ConVar.h"
ConVar g_1093fa38("werewolf_teleport_full_path_check", "1", 0);
// END FUNCTION

// FUNCTION: 0x103d3c20 size=0x6ff
#define vfunc617_slot(a, b, c, d) vfunc617_slot(a, bool, c, d)
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CVTraitEffect_t.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "utlvector.h"
#include "engineserver.h"
#include "globalvars.h"
#include "Vector.h"
#include "CAIHintSlots.h"
#include "Tier1.h"
#include "CGlobalEntityList.h"
#undef vfunc617_slot

struct CWWDevValue
{
	virtual void vfunc0();
	virtual bool vfunc1();
	int m_n04;
	int m_n08;
	int m_n0c;
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;
	int m_n20;
	int m_n24;
	float m_fl28;
	int m_n2c;
};

struct CWWCallView
{
	bool sub_103d0db0(CNPC_VWerewolfVec3 a, CNPC_VWerewolfVec3 b);
};

extern CWWDevValue *g_1093d45c;
extern CWWDevValue *g_1093f784;
extern CWWDevValue *g_1093fa3c;
extern Vector g_1070d1b0;
extern float g_104454c4;
#include "ConVar.h"
extern ConVar g_1093d458, g_1093fa38, g_1093f780;

#include "CUnknown100290c0.h"
#pragma auto_inline(off)
namespace block_103d3c20 {
struct CLookUnit : CUnknown100290c0 { unsigned int sub_100290c0(const unsigned int *pHandle); };
unsigned int CLookUnit::sub_100290c0(const unsigned int *pHandle)
{
    unsigned int h = *pHandle;
    if (h != 0xffffffff) {
        CUnknown100290c0Slot *pSlot = &m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (int)(h >> 13)) {
            return pSlot->m_Value;
        }
    }
    return 0;
}
}
#pragma auto_inline(on)
inline const char *WWEntName(CNPC_VWerewolf *p) { if (p) { if (p->m_name26c) return p->m_name26c; return g_106b8540; } return g_105387dc; }

inline bool operator==(const CNPC_VWerewolfVec3 &a, const CNPC_VWerewolfVec3 &b)
{
	return b.x == a.x && b.y == a.y && b.z == a.z;
}

// TARGET: CNPC_VWerewolf::sub_103d3c20
bool CNPC_VWerewolf::sub_103d3c20()
{
	ScopeTrace trace("CNPC_VWerewolf::FindTeleportHint", WWEntName(this));

	sub_103d1ca0();

	if (m_nTick66d4 == engine->vfunc120())
		return false;
	if (m_fl66d8 + 0.15f > gpGlobals->curtime)
		return false;
	if (m_pHint66b0)
		return true;

	m_nTick66d4 = engine->vfunc120();
	m_fl66d8 = gpGlobals->curtime;

	if (!g_10925450)
		return false;
	if (!((block_103d3c20::CLookUnit *)g_10566458)->sub_100290c0((const unsigned int *)&m_h628c))
		return false;

	CNPC_VWerewolfHint66b0 *pHint;
	if (!m_n66ac || !(pHint = ((CNPC_VWerewolfHint66b0 *)m_n66ac)->m_pNext))
		pHint = (CNPC_VWerewolfHint66b0 *)g_10925450;

	CNPC_VWerewolfHint66b0 *pBest = 0;
	int nBestPriority = 0;
	float flBestDist = 3.402823466e+38f;
	CNPC_VWerewolfVec3 vecStart3 = sub_103d9c90();
	Vector &vecStart = *(Vector *)&vecStart3;
	int nSearches = 0;
	char bFlag = false;
	Vector vecGround = g_1070d1b0;
	Vector vecTarget = g_1070d1b0;
	
	
	CUtlVector<CNPC_VWerewolfVec3> tried;
	CUtlVector<CNPC_VWerewolfVec3> good;

	if ((m_nFlags66e8 & 2) == 2 && m_pHint66c4)
	{
		CNPC_VWerewolfVec3 tmp;
		vecStart3 = *sub_103d6770(&tmp, m_pHint66c4);
	}

	do {
		if (sub_103d3360(pHint)) {
			pBest = pHint;
			break;
		}
		if (sub_103d8300((void *)pHint)) {
			if (nSearches >= 10) {
				if (pBest)
					break;
				m_n66ac = (int)pHint;
				g_109f364c("Werewolf giving up after %d teleport searches!\n", nSearches);
				bool bRet = sub_103d1d60("FindTeleportHint", false);
				return bRet;
			}
			CNPC_VWerewolfVec3 t1;
			CNPC_VWerewolfVec3 t2;
			vecGround = *(Vector *)sub_103d6770(&t1, pHint);
			sub_103d6390(pHint);
			vecTarget = *(Vector *)sub_103d68d0(&t2, pHint);
			float flDist = (vecTarget - vecStart).Length();
			bFlag = false;
			int nPriority = sub_103d3220(pHint);
			if (tried.Find(*(CNPC_VWerewolfVec3 *)&vecTarget) == -1 && flDist < flBestDist && nBestPriority < nPriority) {
				if (good.Find(*(CNPC_VWerewolfVec3 *)&vecTarget) != -1)
					bFlag = true;
				if (g_1093d458.GetFloat() + m_flTime66f0 < gpGlobals->curtime) {
					bFlag = true;
				} else if (!bFlag) {
					if (g_1093fa38.GetBool()) {
						nSearches++;
						bFlag = ((CWWCallView *)this)->sub_103d0db0(*(CNPC_VWerewolfVec3 *)&vecTarget, vecStart3);
					} else {
						bFlag = sub_103d0e70(pHint);
					}
					if (bFlag)
						good.AddToTail(*(CNPC_VWerewolfVec3 *)&vecTarget);
				}
				if (bFlag) {
					nSearches++;
					if (!vfunc617_slot(*(CNPC_VWerewolfVec3 *)&vecGround, g_1093f780.GetBool(), 0, *(CNPC_VWerewolfVec3 *)&g_1070d1b0)) {
						pBest = pHint;
						flBestDist = flDist;
						nBestPriority = nPriority;
					}
				}
			}
		}
		if (!bFlag)
			tried.AddToTail(*(CNPC_VWerewolfVec3 *)&vecTarget);
		pHint = pHint->m_pNext;
		if (!pHint && m_n66ac)
			pHint = (CNPC_VWerewolfHint66b0 *)g_10925450;
	} while (pHint != (CNPC_VWerewolfHint66b0 *)m_n66ac);

	m_n66ac = (int)pBest;
	bool bFound = false;
	if (pBest) {
		bFound = true;
		sub_103d45c0(pBest);
	}
	return sub_103d1d60("FindTeleportHint", bFound);
}
// END FUNCTION

// FUNCTION: 0x103d44e0 size=0xae
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"

struct CGlobal10924a6c
{
	virtual void vfunc0();
	virtual void vfunc1();
};
extern CGlobal10924a6c *g_10924a6c;

// TARGET: CNPC_VWerewolf::sub_103d44e0
void CNPC_VWerewolf::sub_103d44e0(CNPC_VWerewolfHint66b0 *pHint, char flag)
{
	ScopeTrace trace("CNPC_VWerewolf::SetMoveHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_pHint66bc)
		sub_103d4690();
	m_b66c8 = flag;
	m_pHint66bc = pHint;
	g_10924a6c->vfunc1();
	sub_10269a20(0x78);
}
// END FUNCTION

// FUNCTION: 0x103d45c0 size=0x97
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VWerewolf::sub_103d45c0(CNPC_VWerewolfHint66b0 *pHint)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::SetTeleportHint";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (m_pHint66b0)
		sub_103d4760();
	m_b66c8 = 0;
	m_pHint66b0 = pHint;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103d4690 size=0x97
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"

// TARGET: CNPC_VWerewolf::sub_103d4690
void CNPC_VWerewolf::sub_103d4690()
{
	ScopeTrace trace("CNPC_VWerewolf::ClearMoveHint", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_pHint66bc)
		m_pHint66bc->sub_102d1420(0);
	m_pHint66bc = 0;
	sub_10015839(0x78);
}
// END FUNCTION

// FUNCTION: 0x103d4760 size=0x8e
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void CNPC_VWerewolf::sub_103d4760()
{
	CScopeTrace trace("CNPC_VWerewolf::ClearTeleportHint", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (m_pHint66b0)
		m_pHint66b0->sub_102d1420(0);
	m_pHint66b0 = 0;
}
// END FUNCTION

// FUNCTION: 0x103d4820 size=0x18e
#include <math.h>
#include "CNPC_VWerewolf.h"
#include "Vector.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

const Vector *sub_102d6100(int hull);
const Vector *sub_102d6120(int hull);
void sub_10142aa0(const Vector &origin, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, float flDuration);
void sub_10144a30(const Vector &origin, const Vector &dir, float length, float flWidth, int r, int g, int b, int a, int c);

void CNPC_VWerewolf::sub_103d4820(Vector vecPoint, float flDuration)
{
	ScopeTrace trace("CNPC_VWerewolf::DrawDebugHullAtPoint", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	Vector vOrigin = vecPoint;
	Vector mins = *sub_102d6100(*(int *)((char *)this + 0x1568));
	Vector maxs = *sub_102d6120(*(int *)((char *)this + 0x1568));
	Vector vecExtent = maxs - (mins + maxs) * 0.5f;
	sub_10142aa0(vOrigin, mins, maxs, 255, 100, 0, 100, flDuration);
	Vector vDir(1.0f, 0.0f, 0.0f);
	sub_10144a30(vOrigin, vDir, (float)sqrt(vecExtent.x * vecExtent.x + vecExtent.y * vecExtent.y), 5.0f, 255, 255, 0, 20, 0);
}
// END FUNCTION

// FUNCTION: 0x103d4a20 size=0x2c
struct CWerewolfUnit103d4a20 {
    char pad66ec[0x66ec];
    int m_i66ec;
    void sub_10009ecb();
    void sub_103d4a20();
};

// TARGET: sub_103d4a20
void CWerewolfUnit103d4a20::sub_103d4a20()
{
    sub_10009ecb();
    m_i66ec = *(int *)&gpGlobals->curtime;
    *(int *)((char *)this + 0x66d8) = 0;
    *(int *)((char *)this + 0x66d4) = 0;
    *(int *)((char *)this + 0x66a4) = 0;
}
// END FUNCTION

// FUNCTION: 0x103d4a60 size=0x253
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "CCollisionProperty.h"
#include "COutputEvent.h"
#include "CSingleUserRecipientFilter.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "engineiface.h"

struct CUnk1093f73c
{
	virtual void v0();
	virtual bool v1();
	int m_pad[10];
	int m_2c;
};
extern CUnk1093f73c *g_1093f73c;
void sub_101ce620(int player, int type, const char *msg, int a, int b, int c, int d);

void CNPC_VWerewolf::sub_103d4a60()
{
	ScopeTrace t("CNPC_VWerewolf::TeleportOut", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_flTime66f0 = gpGlobals->curtime;
	vfunc66();
	m_nEffectFlags |= 0x20;
	{
		ScopeTrace t2("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	sub_100b3b00();
	m_n66ac = 0;
	sub_103d4760();
	m_nFlags66e8 = 0;
	((COutputEvent *)m_OnTeleportOut)->sub_100cd660(vfunc167(), this, 0);
	if (!g_1093f73c->v1() && g_1093f73c->m_2c) {
		CBaseEntity *pTarget = vfunc167();
		int nPlayer;
		if (!pTarget)
			nPlayer = 0;
		else
			nPlayer = *(int *)((char *)pTarget + 0xa8);
		CSingleUserRecipientFilter filter((void *)nPlayer);
		filter.MakeReliable();
		int nEdict = m_pEdict2e0;
		enginesound->vfunc2(&filter, engine->vfunc35(nEdict), 0, "dev/ww_tele_out.wav", 1.0f, 0, 0, 100, 0, 0, 1, 0);
		pTarget = vfunc167();
		nPlayer = (int)pTarget;
		if (pTarget)
			nPlayer = *(int *)((char *)pTarget + 0xa8);
		sub_101ce620(nPlayer, 3, "Werewolf teleported out", 0, 0, 0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103d4d60 size=0x246
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CSingleUserRecipientFilter.h"
#include "engineiface.h"
#include "engineserver.h"
#include "globalvars.h"
#include "COutputEvent.h"
#include "CCollisionProperty.h"
#include "CNPC_VWerewolf.h"

struct SWWDev { virtual void v0(); virtual char v1(); char m_pad[0x2c - 4]; int m_n2c; };
struct SWWTarget { char m_pad[0xa8]; void *m_p; };
extern SWWDev *g_1093f73c;
void sub_101ce620(void *pEnt, int a, const char *psz, int b, int c, int d, int e);

void CNPC_VWerewolf::sub_103d4d60()
{
	ScopeTrace trace("CNPC_VWerewolf::TeleportIn", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_103d6280(m_pHint66b0);
	vfunc67();
	m_nEffectFlags &= ~0x20;
	{
		ScopeTrace trace2("CBaseEntity::RemoveSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->RemoveSolidFlags(4);
	}
	sub_100b3b00();
	m_flTeleport66ec = gpGlobals->curtime;
	((COutputEvent *)m_OnTeleportIn)->sub_100cd660(vfunc167(), this, 0);
	if (!g_1093f73c->v1() && g_1093f73c->m_n2c) {
		SWWTarget *pTarget = (SWWTarget *)vfunc167();
		void *pPlayer;
		if (pTarget == 0)
			pPlayer = 0;
		else
			pPlayer = pTarget->m_p;
		CSingleUserRecipientFilter filter(pPlayer);
		filter.MakeReliable();
		int edict = m_pEdict2e0;
		enginesound->vfunc2(&filter, engine->vfunc35(edict), 0, "dev/ww_tele_in.wav", 1.0f, 0, 0, 100, 0, 0, 1, 0);
		pTarget = (SWWTarget *)vfunc167();
		void *pPlayer2 = pTarget;
		if (pTarget)
			pPlayer2 = pTarget->m_p;
		sub_101ce620(pPlayer2, 3, "Werewolf teleported in", 0, 0, 0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103d5050 size=0xa4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
void sub_10008f44(CNPC_VWerewolf *pEnt, int a, int b, int c, int d, int e);

void CNPC_VWerewolf::vfunc620()
{
	ScopeTrace trace("CNPC_VWerewolf::DrawBBoxOverlay", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!sub_103cf5f0()) {
		sub_10008f44(this, 0x32, 0xff, 0x32, 0, 0);
		return;
	}
	sub_1009f4e0();
}
// END FUNCTION

// FUNCTION: 0x103d5130 size=0x378
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "globalvars.h"

void sub_10119750(const char *fmt, ...);
int sub_101cd9e0(int);
CBaseEntity *sub_10172710(int);
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_10538764[];
extern char g_1060a514[];
extern float g_104454c4;

struct CWerewolfCfgView
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad[0x28];
	int m_n2c;
};
extern CWerewolfCfgView *g_1093f814;
extern CWerewolfCfgView *g_1093fa84;
extern CWerewolfCfgView *g_1093d4e4;

inline bool FlagSetB(unsigned int flags, unsigned char bit) { return (flags & bit) == bit; }
inline bool FlagSetI(unsigned int flags, unsigned int bit) { return (flags & bit) == bit; }

void CNPC_VWerewolf::vfunc76()
{
	ScopeTrace scope("CNPC_VWerewolf::DrawDebugStatOverlays", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float flNotSeen = gpGlobals->curtime - m_flTeleport66ec;
	flNotSeen = g_104454c4 > flNotSeen ? g_104454c4 : flNotSeen;
	sub_10119750("Not Seen Time  : %3.1f", (double)flNotSeen);
	sub_10119750("Player Distance: %3.1f", (double)m_f6264);
	sub_10366290();
	if (FlagSetB(m_nFlags66e8, 1))
		sub_10119750("ZONE_NO_TALL_ANIMS");
	if (FlagSetB(m_nFlags66e8, 2))
		sub_10119750("ZONE_PLAYER_ON_BREAKABLE");
	if (FlagSetB(m_nFlags66e8, 0x40))
		sub_10119750("ZONE_PLAYER_INSIDE");
	if (FlagSetB(m_nFlags66e8, 0x80))
		sub_10119750("ZONE_PLAYER_OUTSIDE");
	if (FlagSetB(m_nFlags66e8, 4))
		sub_10119750("ZONE_PLAYER_ON_PLATFORM");
	if (FlagSetI(m_nFlags66e8, 0x800))
		sub_10119750("ZONE_WOLF_INSIDE");
	if (FlagSetI(m_nFlags66e8, 0x1000))
		sub_10119750("ZONE_WOLF_OUTSIDE");
	if (FlagSetI(m_nFlags66e8, 0x100))
		sub_10119750("ZONE_WOLF_ON_PLATFORM");
	if (sub_10269aa0(0x77))
		sub_10119750("COND_VWEREWOLF_CAN_TELEPORT");
	if (sub_10269aa0(0x78))
		sub_10119750("COND_VWEREWOLF_CAN_SPECIAL_MOVE");
	if (sub_10269aa0(0x79))
		sub_10119750("COND_VWEREWOLF_ENEMY_REACHABLE");
	if (sub_10269aa0(0x7b))
		sub_10119750("COND_VWEREWOLF_SHOULD_BREAKHINT");
	if (sub_10269aa0(0x7a))
		sub_10119750("COND_VWEREWOLF_DEATH_TRIGGERED");
	if (m_nDoorState == 0)
		sub_10119750("door state: (%d)closed", m_nDoorState);
	else if (m_nDoorState == 1)
		sub_10119750("door state: (%d)closing", m_nDoorState);
	else if (m_nDoorState == 2)
		sub_10119750("door state: (%d)open", m_nDoorState);
	else if (m_nDoorState == 3)
		sub_10119750("door state: (%d)opening", m_nDoorState);
	if (!g_1093f814->vfunc1() && g_1093f814->m_n2c) {
		CBaseEntity *pEnt = sub_10172710(sub_101cd9e0(1));
		CAI_Hint *pHint = (CAI_Hint *)__RTDynamicCast(pEnt, 0, g_10538764, g_1060a514, 0);
		if (pHint)
			sub_103d5590(pHint);
	}
	if (m_pHint66bc)
		sub_103d5590(m_pHint66bc);
	else if (m_pHint66b0)
		sub_103d5590(m_pHint66b0);
	else if (!g_1093fa84->vfunc1() && g_1093fa84->m_n2c)
		sub_103d5590(m_pLastUsedTeleportHint);
	else if (!g_1093d4e4->vfunc1() && g_1093d4e4->m_n2c)
		sub_103d5590(m_pLastUsedMoveHint);
	int nStart = m_History.m_size - 5;
	nStart = nStart < 0 ? 0 : nStart;
	int nEnd = nStart + 5 < m_History.m_size ? nStart + 5 : m_History.m_size;
	for (int i = nStart; i < nEnd; i++) {
		CNPC_VWerewolfSchedule *pSched = ((CNPC_VWerewolfSchedule **)m_History.m_pMemory)[i];
		if (pSched && pSched->m_id40)
			sub_10119750((const char *)pSched->m_id40);
		else
			sub_10119750("INVALID SCHEDULE");
	}
}
// END FUNCTION

// FUNCTION: 0x103d5590 size=0x6b7
#include "CFlameCluster.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "CGlobalEntityList.h"
#include "Vector.h"
#include "QAngle.h"
#include "DebugOverlay.h"
#include "CAI_Hint.h"
#include <math.h>

extern CGlobalEntityList g_106eb5d8;
extern Vector g_1070d1b0;
extern QAngle g_1070d9d0;
extern float g_104454c4;
extern char g_10538764[];
extern char g_1060a514[];
extern "C" void *__cdecl __RTDynamicCast(void *inptr, long vfDelta, void *pSrcType, void *pDstType, int isReference);
Vector *sub_102d6100(int hull);
Vector *sub_102d6120(int hull);
void sub_10142aa0(const Vector *pOrigin, const Vector *pMins, const Vector *pMaxs, int r, int g, int b, int a, float flDuration);
void sub_101cee20(float flRadius, Vector vecPos, QAngle angles, int a);
void sub_10143d80(const Vector *pPos, float flRadius, int r, int g, int b, int a, float flDuration);

struct CNPC_VWerewolfHintView : CNPC_VWerewolf
{
	Vector sub_103d6770(void *pHint);
};

void CNPC_VWerewolf::sub_103d5590(void *pHint)
{
	ScopeTrace scope("CNPC_VWerewolf::DrawDebugHintInfo", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!pHint)
		return;

	const char *pszTarget = 0;
	const char *pszTarget2 = 0;
	QAngle angHint = g_1070d9d0;
	Vector vecHint = g_1070d1b0;
	Vector vecTarget = g_1070d1b0;
	Vector vecTarget2 = g_1070d1b0;
	Vector vecGround;
	Vector vecPos;

	vecHint = *((CEntityVSlots *)pHint)->slot217();
	angHint = *(QAngle *)((CEntityVSlots *)pHint)->slot219();
	const char *pszHint = ((CBaseEntity *)pHint)->sub_100ab4f0();
	vecGround = ((CNPC_VWerewolfHintView *)this)->sub_103d6770(pHint);

	bool bIsHint = false;
	CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, ((CAI_Hint *)pHint)->m_pszTarget468 ? ((CAI_Hint *)pHint)->m_pszTarget468 : g_106b8540, 0, 0);
	if (pTarget)
	{
		vecTarget = *((CEntityVSlots *)pTarget)->slot217();
		((CEntityVSlots *)pTarget)->slot219();
		pszTarget = pTarget->sub_100ab4f0();
		CAI_Hint *pTargetHint = (CAI_Hint *)__RTDynamicCast(pTarget, 0, g_10538764, g_1060a514, 0);
		if (pTargetHint)
		{
			bIsHint = true;
			((CNPC_VWerewolfHintView *)this)->sub_103d6770(pHint);
			CBaseEntity *pTarget2 = g_106eb5d8.sub_100f7770(0, pTargetHint->m_pszTarget468 ? pTargetHint->m_pszTarget468 : g_106b8540, 0, 0);
			if (pTarget2)
			{
				vecTarget2 = *((CEntityVSlots *)pTarget2)->slot217();
				((CEntityVSlots *)pTarget2)->slot219();
				pszTarget2 = pTarget2->sub_100ab4f0();
				sub_103d6650(pHint);
			}
		}
		else
		{
			sub_103d6650(pHint);
		}
	}

	Vector vecMins = *sub_102d6100(m_n1568);
	Vector vecMaxs = *sub_102d6120(m_n1568);
	vecMaxs.z = vecMins.z + 16.0f;
	int nRadius = vecMaxs.x * 0.5f;

	float flFrac = gpGlobals->curtime - (int)gpGlobals->curtime;
	double flPulse = (sin(gpGlobals->curtime) + 1.0) * 125.0;
	int r = flPulse;
	int g = (cos(gpGlobals->curtime) + 1.0) * 125.0;
	int b = 250.0 - flPulse;

	Vector vecBoxMins(-8, -8, -8);
	Vector vecBoxMaxs(8, 8, 8);

	if (vecHint.Length() != g_104454c4)
	{
		sub_10142aa0(&vecHint, &vecMins, &vecMaxs, 0, 200, 200, 100, 0);
		sub_10143710(&vecHint.x, pszHint, 0, 0);
		sub_101cee20(nRadius, vecGround, angHint, 0);
	}
	if (vecTarget.Length() != g_104454c4)
	{
		if (bIsHint)
			sub_10142aa0(&vecTarget, &vecMins, &vecMaxs, 0, 200, 200, 100, 0);
		else
			sub_10142aa0(&vecTarget, &vecBoxMins, &vecBoxMaxs, 0, 255, 0, 0, 0);
		sub_10143710(&vecTarget.x, pszTarget, 0, 0);
	}
	if (vecTarget2.Length() != g_104454c4)
	{
		sub_10142aa0(&vecTarget2, &vecBoxMins, &vecBoxMaxs, 0, 255, 0, 0, 0);
		sub_10143710(&vecTarget2.x, pszTarget2, 0, 0);
	}
	if ((vecHint * vecTarget).Length() != g_104454c4)
	{
		VectorLerp(vecHint, vecTarget, flFrac, vecPos);
		sub_10143d80(&vecPos, 16.0f, r, g, b, 1, 0);
		sub_10142e90(&vecHint, &vecTarget, 200, 200, 0, 1, 0);
	}
	if ((vecTarget * vecTarget2).Length() != g_104454c4)
	{
		VectorLerp(vecTarget, vecTarget2, flFrac, vecPos);
		sub_10143d80(&vecPos, 16.0f, r, g, b, 1, 0);
		sub_10142e90(&vecTarget, &vecTarget2, 200, 200, 0, 1, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103d5e00 size=0x102
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"

struct CWerewolfSchedFields
{
	char m_pad[0x1b30];
	const char *m_pszFile;
	int m_nLine;
};

int CNPC_VWerewolf::vfunc440(int schedule)
{
	ScopeTrace t("CNPC_VWerewolf::TranslateSchedule", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CWerewolfSchedFields *f = (CWerewolfSchedFields *)this;
	switch (schedule) {
	case 0x43:
		f->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VWerewolf.cpp";
		f->m_nLine = 0x1134;
		return 0x15c;
	case 0xb7:
		f->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VWerewolf.cpp";
		f->m_nLine = 0x112f;
		return 0x157;
	case 0xf0:
		f->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VWerewolf.cpp";
		f->m_nLine = 0x112a;
		return 0xb1;
	default:
		return sub_102b12f0(schedule);
	}
}
// END FUNCTION
