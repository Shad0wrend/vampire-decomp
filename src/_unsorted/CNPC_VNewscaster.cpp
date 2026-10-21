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
