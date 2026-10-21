// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005b3a0 size=0x1e
#include "CTEBeamEnts.h"

// TARGET: CTEBeamEnts::vfunc2
CTEBeamEnts *CTEBeamEnts::vfunc2(unsigned int flags)
{
	sub_1000dcfb();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005b3f0 size=0xc6
#include "CTEBeamEnts.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;

void CTEBeamEnts::vfunc3(const float *pOrigin, const float *pAngles)
{
    m_n44 = 1;
    m_n48 = 0;
    m_nModelIndex = g_1088ae52;
    m_n14 = 0;
    m_n18 = 10;
    m_f1c = 2.0f;
    m_f20 = 1.0f;
    m_f2c = 1.0f;
    m_n30 = 127;
    m_n34 = 63;
    m_n38 = 0;
    m_n40 = 1;
    m_n3c = 150;
    CBroadcastRecipientFilter filter;
    vfunc4(&filter, 0);
}
// END FUNCTION
