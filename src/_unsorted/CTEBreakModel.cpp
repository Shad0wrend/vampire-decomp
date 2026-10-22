// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005e6d0 size=0x1e
#include "CTEBreakModel.h"

// TARGET: CTEBreakModel::vfunc2
CTEBreakModel *CTEBreakModel::vfunc2(unsigned int flags)
{
	sub_1000f53d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005e720 size=0x13
#include "CTEBreakModel.h"
struct IEnginePrecache {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual int PrecacheModel(const char *name, int preload);
};
extern IEnginePrecache *g_1070b22c;

void CTEBreakModel::vfunc5()
{
	g_1070b22c->PrecacheModel("models/gibs/hgibs.mdl", 0);
}
// END FUNCTION

// FUNCTION: 0x1005e750 size=0x17b
#include "CTEBreakModel.h"
#include "CUnknown1070b22c.h"
#include "CUnknown1070b244.h"
#include "CBroadcastRecipientFilter.h"

extern CUnknown1070b22c *g_1070b22c;
extern CUnknown1070b244 *g_1070b244;
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10005ab5(const Vector &start, float scale, const Vector &dir, Vector &dest);

// TARGET: CTEBreakModel::vfunc3
void CTEBreakModel::vfunc3(const Vector &origin, const QAngle &angles)
{
	Vector forward, right;
	m_nField34 = g_1070b22c->vfunc13("models/gibs/hgibs.mdl", 0);
	Origin() = origin;
	m_angRotation[0] = 16.0f;
	m_angRotation[1] = 16.0f;
	m_angRotation[2] = 16.0f;
	m_vecSize[0] = g_1070b244->vfunc1(-10.0f, 10.0f);
	m_vecSize[1] = g_1070b244->vfunc1(-10.0f, 10.0f);
	m_vecSize[2] = g_1070b244->vfunc1(0.0f, 20.0f);
	m_nField30 = 100;
	m_nField38 = 10;
	*(float *)&m_nField3c = 5.0f;
	m_nField40 = 0;
	Origin().z += 24.0f;
	sub_10139610(angles, &forward, &right, 0);
	forward.z = 0;
	VectorNormalize(forward);
	sub_10005ab5(Origin(), 50.0f, forward, Origin());
	sub_10005ab5(Origin(), 25.0f, right, Origin());
	CBroadcastRecipientFilter filter;
	slot4(&filter, 0);
}
// END FUNCTION
