// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10113fe0 size=0x38
#include "CTEDust.h"

// TARGET: CTEDust::CTEDust
CTEDust::CTEDust(const char *name) : CBaseTempEntityHead(name), m_n000c(0), m_n0010(0), m_n0014(0)
{
	m_fl0018 = 1.0f;
	m_fl001c = 1.0f;
	m_vec0020.Init(0.0f, 0.0f, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10114050 size=0x1e
#include "CTEDust.h"

// TARGET: CTEDust::vfunc2
CTEDust *CTEDust::vfunc2(unsigned int flags)
{
	sub_100058d5();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
