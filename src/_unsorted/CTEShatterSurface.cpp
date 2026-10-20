// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062fd0 size=0x65
#include "CTEShatterSurface.h"

CTEShatterSurface::CTEShatterSurface(const char *name) : CBaseTempEntityHead(name)
{
    m_f0c[0] = 0;
    m_f0c[1] = 0;
    m_f0c[2] = 0;
    m_f0c[3] = 0;
    m_f0c[4] = 0;
    m_f0c[5] = 0;
    m_f0c[6] = 0;
    m_f0c[7] = 0;
    m_f0c[8] = 0;
    m_f0c[9] = 0;
    m_f0c[10] = 0;
    m_f0c[11] = 0;
    m_f3c = 16.0f;
    m_f40 = 16.0f;
    m_f44 = 3.0f;
    m_rgba[0] = 255;
    m_rgba[1] = 255;
    m_rgba[2] = 255;
    m_rgba[3] = 255;
    m_rgba[4] = 255;
    m_rgba[5] = 255;
}
// END FUNCTION

// FUNCTION: 0x10063060 size=0x1e
#include "CTEShatterSurface.h"

// TARGET: CTEShatterSurface::vfunc2
CTEShatterSurface *CTEShatterSurface::vfunc2(unsigned int flags)
{
	sub_100021d0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
