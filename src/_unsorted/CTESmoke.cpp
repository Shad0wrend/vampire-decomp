// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
