// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061290 size=0x1e
#include "CTEEnergySplash.h"

// TARGET: CTEEnergySplash::vfunc2
CTEEnergySplash *CTEEnergySplash::vfunc2(unsigned int flags)
{
	sub_10001c7b();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100612e0 size=0xf1
#include "CTEEnergySplash.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const Vector *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector *pStart, float flScale, const Vector *pDir, Vector *pDest);

// TARGET: CTEEnergySplash::vfunc3
void CTEEnergySplash::vfunc3(const Vector *pOrigin, const Vector *pAngles)
{
	m_vecPos = *pOrigin;
	Vector *pDir = &m_vecDir;
	sub_10139610(pAngles, pDir, 0, 0);
	m_vecPos.z += 24.0f;
	Vector vecForward;
	vecForward.z = 0.0f;
	vecForward.x = pDir->x;
	vecForward.y = pDir->y;
	VectorNormalize(vecForward);
	sub_10139500(&m_vecPos, 100.0f, &vecForward, &m_vecPos);
	CBroadcastRecipientFilter filter;
	vfunc4(&filter, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10061420 size=0x39
#include "CRecipientFilter.h"
#include "CTEEnergySplash.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEEnergySplash::vfunc4(CRecipientFilter *pFilter, float flDelay)
{
	engine->vfunc103((int)pFilter, *(int *)&flDelay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x100614e0 size=0x6
#include "CTEEnergySplash.h"
namespace lifted {
extern char g_106c2494;
}
int CTEEnergySplash::vfunc0()
{
    return (int)&lifted::g_106c2494;
}
// END FUNCTION

// FUNCTION: 0x10061500 size=0x3
#include "CTEEnergySplash.h"
int CTEEnergySplash::vfunc1()
{
    return 0;
}
// END FUNCTION
