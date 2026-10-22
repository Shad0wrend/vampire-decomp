// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
