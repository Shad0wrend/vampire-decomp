// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005d8f0 size=0x39
#include "CBaseTempEntity.h"
#include "CTEBloodSprite.h"
CTEBloodSprite::CTEBloodSprite(const char *name) : CBaseTempEntityHead(name)
{
	m_c[0] = 0; m_c[1] = 0; m_c[2] = 0;
	m_24[0] = 0; m_24[1] = 0; m_24[2] = 0; m_24[3] = 0; m_24[4] = 0; m_24[5] = 0; m_24[6] = 0;
}
// END FUNCTION

// FUNCTION: 0x1005d940 size=0x1e
#include "CTEBloodSprite.h"

// TARGET: CTEBloodSprite::vfunc2
CTEBloodSprite *CTEBloodSprite::vfunc2(unsigned int flags)
{
	sub_1000d4b8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005d990 size=0x113
#include "CTEBloodSprite.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae80;
extern short g_1088ae54;
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

// TARGET: CTEBloodSprite::vfunc3
void CTEBloodSprite::vfunc3(const Vector &origin, const QAngle &angles)
{
	m_24[2] = 255;
	m_24[3] = 255;
	m_24[4] = 63;
	m_24[5] = 255;
	m_24[6] = 16;
	Origin() = origin;
	m_24[0] = g_1088ae80;
	m_24[1] = g_1088ae54;
	Origin().z += 24.0f;
	Vector forward;
	sub_10139610(angles, &forward, 0, 0);
	forward.z = 0.0f;
	VectorNormalize(forward);
	sub_10139500(Origin(), 50.0f, forward, Origin());
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005db00 size=0x39
#include "CTEBloodSprite.h"
#include "IVEngineServerFull.h"


void CTEBloodSprite::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005dbc0 size=0x6
#include "CTEBloodSprite.h"
#include "ServerClass.h"
namespace lifted {
extern char g_106c0890;
}
ServerClass * CTEBloodSprite::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c0890);
}
// END FUNCTION

// FUNCTION: 0x1005dbe0 size=0x3
#include "CTEBloodSprite.h"
int CTEBloodSprite::vfunc1()
{
    return 0;
}
// END FUNCTION
