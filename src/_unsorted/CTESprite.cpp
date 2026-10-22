// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067c80 size=0x1e
#include "CTESprite.h"

// TARGET: CTESprite::vfunc2
CTESprite *CTESprite::vfunc2(unsigned int flags)
{
	sub_10013ee4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10067cd0 size=0xc7
#include "IVEngineServerFull.h"
extern IVEngineServerFull *g_1070b22c;

// TARGET: CTESprite::vfunc5
void CTESprite::vfunc5()
{
    g_1070b22c->PrecacheModel("sprites/gunsmoke.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number0.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number1.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number2.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number3.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number4.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number5.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number6.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number7.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number8.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number9.vmt", 0);
}
// END FUNCTION

// FUNCTION: 0x10067de0 size=0x11a
#include "CTESprite.h"
#include "CBroadcastRecipientFilter.h"
#include "IVEngineServer.h"

extern IVEngineServer *g_1070b22c;
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

// TARGET: CTESprite::vfunc3
void CTESprite::vfunc3(const Vector &origin, const QAngle &angles)
{
	m_nModelIndex = g_1070b22c->vfunc13("sprites/gunsmoke.vmt", 0);
	m_fScale = 0.8f;
	m_nBrightness = 200;
	Origin() = origin;
	Origin().z += 24.0f;
	Vector forward, right;
	sub_10139610(angles, &forward, &right, 0);
	forward.z = 0.0f;
	VectorNormalize(forward);
	sub_10139500(Origin(), 50.0f, forward, Origin());
	sub_10139500(Origin(), -25.0f, right, Origin());
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION
