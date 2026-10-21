// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a01b0 size=0x8
#include "CNPC_VNewscaster.h"

int CNPC_VNewscaster::vfunc404(int)
{
	return 4;
}
// END FUNCTION

// FUNCTION: 0x103a0270 size=0xe1
#include "CNPC_VNewscaster.h"

void sub_100aa7b0(void *p);

CNPC_VNewscaster *CNPC_VNewscaster::vfunc5(unsigned int flags)
{
	m_listB.Destruct();
	m_listA.Destruct();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a05b0 size=0x88
#include "CNPC_VNewscaster.h"

struct CGlobalVarsView {
	char m_pad[0xc];
	float m_flCurTime;
};
extern CGlobalVarsView *g_1070b228;

struct CDevFlagObj {
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x2c - 4];
	int m_n2c;
};
extern CDevFlagObj *g_1093be8c;

void CNPC_VNewscaster::vfunc431()
{
	m_f624c = g_1070b228->m_flCurTime + 1.0f;
	m_f6250 = g_1070b228->m_flCurTime + 1.0f;
	m_f625c = g_1070b228->m_flCurTime;
	m_f6260 = g_1070b228->m_flCurTime;
	sub_10292de0();
	sub_103a0670();
	if (!g_1093be8c->vfunc1() && g_1093be8c->m_n2c && !(m_bFlags224 & 1))
		sub_103a0ff0(0);
}
// END FUNCTION

// FUNCTION: 0x103a1250 size=0x97
#include "CNPC_VNewscaster.h"
#include "ScopeTrace.h"

// TARGET: CNPC_VNewscaster::vfunc124
int CNPC_VNewscaster::vfunc124()
{
	ScopeTrace trace("CNPC_VNewscaster::DrawDebugTextOverlays", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int nLines = sub_1029d4e0();
	if (m_bFlags224 & 1)
		nLines += sub_103a0ff0(nLines);
	return nLines;
}
// END FUNCTION
