// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005e660 size=0x45
#include "CTEBreakModel.h"
// TARGET: CTEBreakModel::CTEBreakModel
CTEBreakModel::CTEBreakModel(const char *name) : CBaseTempEntity(name)
{
	m_vecOrigin[0] = 0;
	m_vecOrigin[1] = 0;
	m_vecOrigin[2] = 0;
	m_angRotation[0] = 0;
	m_angRotation[1] = 0;
	m_angRotation[2] = 0;
	m_vecSize[0] = 0;
	m_vecSize[1] = 0;
	m_vecSize[2] = 0;
	m_nField34 = 0;
	m_nField30 = 0;
	m_nField38 = 0;
	m_nField3c = 0;
	m_nField40 = 0;
}
// END FUNCTION

// FUNCTION: 0x1005e6d0 size=0x1e
#include "CTEBreakModel.h"

// TARGET: CTEBreakModel::vfunc2
CBaseTempEntity *CTEBreakModel::vfunc2(unsigned int flags)
{
	sub_1000f53d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005e720 size=0x13
#include "CTEBreakModel.h"

void CTEBreakModel::vfunc5()
{
	engine->vfunc13("models/gibs/hgibs.mdl", 0);
}
// END FUNCTION

// FUNCTION: 0x1005e750 size=0x17b
#include "CTEBreakModel.h"
#include "CUnknown1070b244.h"
#include "CBroadcastRecipientFilter.h"

extern CUnknown1070b244 *g_1070b244;
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10005ab5(const Vector &start, float scale, const Vector &dir, Vector &dest);

// TARGET: CTEBreakModel::vfunc3
void CTEBreakModel::vfunc3(const Vector &origin, const QAngle &angles)
{
	Vector forward, right;
	m_nField34 = engine->vfunc13("models/gibs/hgibs.mdl", 0);
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
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005e930 size=0x39
#include "CTEBreakModel.h"
#include "IVEngineServerFull.h"

void CTEBreakModel::vfunc4(void *pFilter, int delay)
{
	engine->vfunc103((int)pFilter, delay, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005e9f0 size=0x6
#include "CTEBreakModel.h"
namespace lifted {
extern char g_106c1144;
}
ServerClass * CTEBreakModel::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c1144);
}
// END FUNCTION

// FUNCTION: 0x1005ea10 size=0x3
#include "CTEBreakModel.h"
int CTEBreakModel::vfunc1()
{
    return 0;
}
// END FUNCTION
