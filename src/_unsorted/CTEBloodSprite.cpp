// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005d8f0 size=0x39
CTEBloodSprite::CTEBloodSprite(const char *name) : CBaseTempEntityHead(name)
{
	m_c[0] = 0; m_c[1] = 0; m_c[2] = 0;
	m_24[0] = 0; m_24[1] = 0; m_24[2] = 0; m_24[3] = 0; m_24[4] = 0; m_24[5] = 0; m_24[6] = 0;
}
// END FUNCTION

// FUNCTION: 0x1005d940 size=0x1e
#include "CTEBloodSprite.h"

// TARGET: CTEBloodSprite::vfunc2
CTEBloodSprite *CTEBloodSprite::vfunc2(unsigned int flags)
{
	sub_1000d4b8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
