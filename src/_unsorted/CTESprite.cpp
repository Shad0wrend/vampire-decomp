// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067c30 size=0x3c
#include "CTESprite.h"

// TARGET: CTESprite::CTESprite
CTESprite::CTESprite(const char *name) : CBaseTempEntity(name)
{
    m_c[0] = 0;
    m_c[1] = 0;
    m_c[2] = 0;
    *(int *)((char *)this + 0x28) = 0;
    *(int *)((char *)this + 0x2c) = 0;
    *(int *)((char *)this + 0x30) = 0;
    m_nModelIndex = 0;
    m_fScale = 0.0f;
    m_nBrightness = 0;
    *(int *)((char *)this + 0x24) = 0;
    *(unsigned char *)((char *)this + 0x34) = 0;
}
// END FUNCTION

// FUNCTION: 0x10067c80 size=0x1e
#include "CTESprite.h"

// TARGET: CTESprite::vfunc2
CBaseTempEntity *CTESprite::vfunc2(unsigned int flags)
{
	sub_10013ee4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10067cd0 size=0xc7
#include "CTESprite.h"
#include "IVEngineServerFull.h"

// TARGET: CTESprite::vfunc5
void CTESprite::vfunc5()
{
    engine->vfunc13("sprites/gunsmoke.vmt", 0);
    engine->vfunc13("sprites/floaters/number0.vmt", 0);
    engine->vfunc13("sprites/floaters/number1.vmt", 0);
    engine->vfunc13("sprites/floaters/number2.vmt", 0);
    engine->vfunc13("sprites/floaters/number3.vmt", 0);
    engine->vfunc13("sprites/floaters/number4.vmt", 0);
    engine->vfunc13("sprites/floaters/number5.vmt", 0);
    engine->vfunc13("sprites/floaters/number6.vmt", 0);
    engine->vfunc13("sprites/floaters/number7.vmt", 0);
    engine->vfunc13("sprites/floaters/number8.vmt", 0);
    engine->vfunc13("sprites/floaters/number9.vmt", 0);
}
// END FUNCTION

// FUNCTION: 0x10067de0 size=0x11a
#include "CTESprite.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

// TARGET: CTESprite::vfunc3
void CTESprite::vfunc3(const Vector &origin, const QAngle &angles)
{
	m_nModelIndex = engine->vfunc13("sprites/gunsmoke.vmt", 0);
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
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x10067f50 size=0x39
#include "CTESprite.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"


void CTESprite::vfunc4(CRecipientFilter &a, float b)
{
#define a ((int)&a)
#define b (*(int *)&b)
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
#undef b
#undef a
}
// END FUNCTION

// FUNCTION: 0x10068010 size=0x6
#include "CTESprite.h"
#include "ServerClass.h"
namespace lifted {
extern char g_106c59cc;
}
ServerClass * CTESprite::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c59cc);
}
// END FUNCTION

// FUNCTION: 0x10068030 size=0x3
#include "CTESprite.h"
int CTESprite::vfunc1()
{
    return 0;
}
// END FUNCTION
