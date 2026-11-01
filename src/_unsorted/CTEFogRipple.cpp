// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10062540 size=0x1e
#include "CTEFogRipple.h"

// TARGET: CTEFogRipple::vfunc2
CTEFogRipple *CTEFogRipple::vfunc2(unsigned int flags)
{
	sub_1000a08d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10062590 size=0xf7
#include "CTEFogRipple.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const Vector *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector *pStart, float flScale, const Vector *pDir, Vector *pDest);

// TARGET: CTEFogRipple::vfunc3
void CTEFogRipple::vfunc3(const Vector *pOrigin, const Vector *pAngles)
{
	m_vecOrigin = *pOrigin;
	m_vecOrigin.z += 24.0f;
	Vector vecForward, vecRight;
	sub_10139610(pAngles, &vecForward, &vecRight, 0);
	vecForward.z = 0.0f;
	VectorNormalize(vecForward);
	sub_10139500(&m_vecOrigin, 50.0f, &vecForward, &m_vecOrigin);
	sub_10139500(&m_vecOrigin, 25.0f, &vecRight, &m_vecOrigin);
	CBroadcastRecipientFilter filter;
	vfunc4(&filter, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x100626d0 size=0x39
#include "CTEFogRipple.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEFogRipple::vfunc4(CRecipientFilter *pFilter, float flDelay)
{
	engine->vfunc103((int)pFilter, *(int *)&flDelay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10062790 size=0x6
#include "CTEFogRipple.h"
namespace lifted {
extern char g_106c2dc4;
}
int CTEFogRipple::vfunc0()
{
    return (int)&lifted::g_106c2dc4;
}
// END FUNCTION

// FUNCTION: 0x100627b0 size=0x3
#include "CTEFogRipple.h"
int CTEFogRipple::vfunc1()
{
    return 0;
}
// END FUNCTION
