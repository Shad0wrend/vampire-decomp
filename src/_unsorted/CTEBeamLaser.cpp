// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005b980 size=0x1e
#include "CTEBeamLaser.h"

// TARGET: CTEBeamLaser::vfunc2
CTEBeamLaser *CTEBeamLaser::vfunc2(unsigned int flags)
{
	sub_100051c8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005b9d0 size=0xc9
#include "CTEBeamLaser.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;

void CTEBeamLaser::vfunc3(int a, int b)
{
	m_n44 = 1;
	m_n48 = 0;
	m_n0c = g_1088ae52;
	m_n14 = 0;
	m_n18 = 10;
	m_n1c = 0x40000000;
	m_f20 = 10.0f;
	m_f2c = 100.0f;
	m_n30 = 0x7f;
	m_n34 = 0x3f;
	m_n38 = 0;
	m_n3c = 0x96;
	m_n40 = 1;
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION
