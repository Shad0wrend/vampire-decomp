// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 8 blocks
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

// FUNCTION: 0x10061fe0 size=0xb
namespace lifted {
extern char g_1044de6c;
int sub_100021d0();
}
struct CUnknown10061fe0 { int sub_10061fe0(); };
int CUnknown10061fe0::sub_10061fe0()
{
    *(int *)this = (int)&lifted::g_1044de6c;
    return lifted::sub_100021d0();
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
#include "CRecipientFilter.h"
#include "CTEFizz.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEFizz::vfunc4(CRecipientFilter &filter, float delay)
{
	engine->vfunc103((int)&filter, *(int *)&delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10062160 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c2d00;
extern char g_10543018[];
ServerClassReg g_106c2b40("CTEFizz", &g_106c2d00, g_10543018);
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
