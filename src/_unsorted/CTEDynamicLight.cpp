// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10060bb0 size=0x1e
#include "CTEDynamicLight.h"

// TARGET: CTEDynamicLight::vfunc2
CTEDynamicLight *CTEDynamicLight::vfunc2(unsigned int flags)
{
	sub_10005f51();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10060c00 size=0x10a
#include "CTEDynamicLight.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

void CTEDynamicLight::vfunc3(const Vector &origin, const QAngle &angles)
{
	Vector forward;
	r = 255;
	g = 255;
	b = 63;
	m_vecOrigin = origin;
	m_fRadius = 200.0f;
	m_fTime = 2.0f;
	m_fDecay = 0;
	m_vecOrigin[2] += 24.0f;
	sub_10139610(angles, &forward, 0, 0);
	forward.z = 0;
	VectorNormalize(forward);
	sub_10139500(m_vecOrigin, 50.0f, forward, m_vecOrigin);
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x10060d60 size=0x39
#include "CRecipientFilter.h"
#include "CTEDynamicLight.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEDynamicLight::vfunc4(CRecipientFilter &filter, float delay)
{
	engine->vfunc103((int)&filter, *(int *)&delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10060e20 size=0x6
#include "CTEDynamicLight.h"
namespace lifted {
extern char g_106c23b4;
}
int CTEDynamicLight::vfunc0()
{
    return (int)&lifted::g_106c23b4;
}
// END FUNCTION

// FUNCTION: 0x10060e40 size=0x3
#include "CTEDynamicLight.h"
int CTEDynamicLight::vfunc1()
{
    return 0;
}
// END FUNCTION
