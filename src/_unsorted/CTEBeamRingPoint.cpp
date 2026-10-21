// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005cc00 size=0x1e
#include "CTEBeamRingPoint.h"

// TARGET: CTEBeamRingPoint::vfunc2
CTEBeamRingPoint *CTEBeamRingPoint::vfunc2(unsigned int flags)
{
	sub_10008404();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005cc50 size=0xdf
#include "CTEBeamRingPoint.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;

void CTEBeamRingPoint::vfunc3(const float *pCenter, int unused)
{
	m_vecCenter[0] = pCenter[0];
	*(1 + m_vecCenter) = pCenter[1];
	m_vecCenter[2] = *(pCenter + 2);
	m_flEndRadius = 256.0f;
	m_flStartRadius = 16.0f;
	m_n0c = g_1088ae52;
	m_f1c = 10.0f;
	m_f2c = 10.0f;
	m_n14 = 0;
	m_n18 = 2;
	m_f20 = 20.0f;
	m_n30 = 0xff;
	m_n34 = 0xff;
	m_n38 = 0;
	m_n3c = 0x7f;
	m_n40 = 5;
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION
