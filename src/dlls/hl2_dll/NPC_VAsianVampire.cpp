// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
