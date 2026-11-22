// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
#include "vampire.h"

// FUNCTION: 0x10066ab0 size=0x1e
#include "CTEShowLine.h"

// TARGET: CTEShowLine::vfunc2
CTEShowLine *CTEShowLine::vfunc2(unsigned int flags)
{
	sub_1001527b();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10066ae0 size=0xb
namespace lifted {
extern char g_1044e01c;
int sub_100021d0();
}
struct CUnknown10066ae0 { int sub_10066ae0(); };
int CUnknown10066ae0::sub_10066ae0()
{
    *(int *)this = (int)&lifted::g_1044e01c;
    return lifted::sub_100021d0();
}
// END FUNCTION

// FUNCTION: 0x10066b00 size=0x10d
#include "CTEShowLine.h"
#include "CBroadcastRecipientFilter.h"
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector *start, float scale, const Vector *dir, Vector *dest);
void CTEShowLine::vfunc3(const Vector *pOrigin, const Vector *pAngles)
{
	m_vecStart = *pOrigin;
	m_vecStart.z += 24.0f;
	Vector forward, right;
	sub_10139610(pAngles, &forward, &right, 0);
	forward.z = 0;
	VectorNormalize(forward);
	sub_10139500(&m_vecStart, 100.0f, &forward, &m_vecEnd);
	sub_10139500(&m_vecEnd, -128.0f, &right, &m_vecStart);
	sub_10139500(&m_vecEnd, 128.0f, &right, &m_vecEnd);
	CBroadcastRecipientFilter filter;
	vfunc4(&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x10066c60 size=0x39
#include "CTEShowLine.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEShowLine::vfunc4(void *pFilter, int delay)
{
	engine->vfunc103((int)pFilter, delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10066cb0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c4fc4;
extern char g_10544848[];
ServerClassReg g_106c5100("CTEShowLine", &g_106c4fc4, g_10544848);
// END FUNCTION

// FUNCTION: 0x10066d20 size=0x6
#include "CTEShowLine.h"
namespace lifted {
extern char g_106c5100;
}
int CTEShowLine::vfunc0()
{
    return (int)&lifted::g_106c5100;
}
// END FUNCTION

// FUNCTION: 0x10066d40 size=0x3
#include "CTEShowLine.h"
int CTEShowLine::vfunc1()
{
    return 0;
}
// END FUNCTION
