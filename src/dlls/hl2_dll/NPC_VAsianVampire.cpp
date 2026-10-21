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

// FUNCTION: 0x10361a70 size=0x11c
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
