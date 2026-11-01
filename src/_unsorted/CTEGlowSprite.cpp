// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100639f0 size=0x1e
#include "CTEGlowSprite.h"

// TARGET: CTEGlowSprite::vfunc2
CTEGlowSprite *CTEGlowSprite::vfunc2(unsigned int flags)
{
	sub_10004fb1();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10063a40 size=0x116
#include "CTEGlowSprite.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;
void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector &start, float scale, const Vector &dir, Vector &dest);

void CTEGlowSprite::vfunc3(const Vector &origin, const QAngle &angles)
{
	m_nModelIndex = g_1088ae52;
	m_fScale = 0.8f;
	m_nBrightness = 200;
	m_fLife = 2.0f;
	m_vecOrigin = origin;
	m_vecOrigin.z += 24.0f;
	Vector forward, right;
	sub_10139610(angles, &forward, &right, 0);
	forward.z = 0;
	VectorNormalize(forward);
	sub_10139500(m_vecOrigin, 50.0f, forward, m_vecOrigin);
	sub_10139500(m_vecOrigin, -25.0f, right, m_vecOrigin);
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x10063bb0 size=0x39
#include "CTEGlowSprite.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEGlowSprite::vfunc4(CRecipientFilter &filter, float delay)
{
	engine->vfunc103((int)&filter, *(int *)&delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10063c70 size=0x6
#include "CTEGlowSprite.h"
namespace lifted {
extern char g_106c3c8c;
}
int CTEGlowSprite::vfunc0()
{
    return (int)&lifted::g_106c3c8c;
}
// END FUNCTION

// FUNCTION: 0x10063c90 size=0x3
#include "CTEGlowSprite.h"
int CTEGlowSprite::vfunc1()
{
    return 0;
}
// END FUNCTION
