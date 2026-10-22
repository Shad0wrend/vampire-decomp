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
