// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061fb0 size=0x1e
#include "CTEFizz.h"

// TARGET: CTEFizz::vfunc2
CTEFizz *CTEFizz::vfunc2(unsigned int flags)
{
	sub_100142b8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10062000 size=0xa2
#include "CTEFizz.h"
#include "CBroadcastRecipientFilter.h"

extern char g_10543094[];	// "sprites/bubble.vmt"

void CTEFizz::vfunc3(const float *pOrigin, const float *pAngles)
{
	m_nModelIndex = engine->vfunc13(g_10543094, 0);
	m_nDensity = 200;
	m_nCurrent = 1;
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x100620e0 size=0x13
#include "CTEFizz.h"

void CTEFizz::vfunc5()
{
	engine->vfunc13("sprites/bubble.vmt", 0);
}
// END FUNCTION

// FUNCTION: 0x10062110 size=0x39
#include "CTEFizz.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEFizz::vfunc4(CRecipientFilter &filter, float delay)
{
	engine->vfunc103((int)&filter, *(int *)&delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x100621d0 size=0x6
#include "CTEFizz.h"
namespace lifted {
extern char g_106c2b40;
}
int CTEFizz::vfunc0()
{
    return (int)&lifted::g_106c2b40;
}
// END FUNCTION

// FUNCTION: 0x100621f0 size=0x3
#include "CTEFizz.h"
int CTEFizz::vfunc1()
{
    return 0;
}
// END FUNCTION
