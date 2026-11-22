// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
#include "vampire.h"

// FUNCTION: 0x10067050 size=0x1e
#include "CTESmoke.h"

// TARGET: CTESmoke::vfunc2
CTESmoke *CTESmoke::vfunc2(unsigned int flags)
{
	sub_10002fa4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10067080 size=0xb
namespace lifted {
extern char g_1044e040;
int sub_100021d0();
}
struct CUnknown10067080 { int sub_10067080(); };
int CUnknown10067080::sub_10067080()
{
    *(int *)this = (int)&lifted::g_1044e040;
    return lifted::sub_100021d0();
}
// END FUNCTION

// FUNCTION: 0x100670a0 size=0x10f
#include "CTESmoke.h"
#include "CBroadcastRecipientFilter.h"
extern short g_1088ae52;
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector *start, float scale, const Vector *dir, Vector *dest);
void CTESmoke::vfunc3(const Vector *pOrigin, const Vector *pAngles)
{
	m_nModelIndex = g_1088ae52;
	m_fScale = 5.0f;
	m_nFrameRate = 12;
	m_vecOrigin = *pOrigin;
	m_vecOrigin.z += 24.0f;
	Vector forward, right;
	sub_10139610(pAngles, &forward, &right, 0);
	forward.z = 0;
	VectorNormalize(forward);
	sub_10139500(&m_vecOrigin, 50.0f, &forward, &m_vecOrigin);
	sub_10139500(&m_vecOrigin, 25.0f, &right, &m_vecOrigin);
	CBroadcastRecipientFilter filter;
	vfunc4(&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x10067200 size=0x39
#include "CTESmoke.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTESmoke::vfunc4(void *pFilter, int delay)
{
	engine->vfunc103((int)pFilter, delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10067250 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c5388;
extern char g_10544a40[];
ServerClassReg g_106c53a4("CTESmoke", &g_106c5388, g_10544a40);
// END FUNCTION

// FUNCTION: 0x100672c0 size=0x6
#include "CTESmoke.h"
namespace lifted {
extern char g_106c53a4;
}
int CTESmoke::vfunc0()
{
    return (int)&lifted::g_106c53a4;
}
// END FUNCTION

// FUNCTION: 0x100672e0 size=0x3
#include "CTESmoke.h"
int CTESmoke::vfunc1()
{
    return 0;
}
// END FUNCTION
