// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005d270 size=0x1e
#include "CTEBeamSpline.h"

// TARGET: CTEBeamSpline::vfunc2
CTEBeamSpline *CTEBeamSpline::vfunc2(unsigned int flags)
{
	sub_10007f81();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005d2c0 size=0x19d
#include "CTEBeamSpline.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const Vector &angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

// TARGET: CTEBeamSpline::vfunc3
void CTEBeamSpline::vfunc3(const Vector &current_origin, const Vector &current_angles)
{
	m_nPoints = 6;

	Vector forward, right;
	Vector start = current_origin;
	start.z += 24.0f;
	sub_10139610(current_angles, &forward, &right, 0);
	forward.z = 0;
	VectorNormalize(forward);

	sub_10139500(start, 100.0f, forward, start);
	sub_10139500(start, -128.0f, right, start);

	for (int i = 0; i < m_nPoints; i++)
	{
		m_vecPoints[i] = start;
		sub_10139500(start, (float)(128 / m_nPoints), right, start);
		sub_10139500(start, (float)(30.0 / m_nPoints), forward, start);
	}

	CBroadcastRecipientFilter filter;
	vfunc4(&filter, 0.0f);
}
// END FUNCTION
