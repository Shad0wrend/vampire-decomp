// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10069470 size=0x1e
#include "CTETParticle.h"

// TARGET: CTETParticle::vfunc2
CTETParticle *CTETParticle::vfunc2(unsigned int flags)
{
	sub_1001267a();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100694c0 size=0x1d
#include "CTETParticle.h"
#include "engineserver.h"

// TARGET: CTETParticle::vfunc5
void CTETParticle::vfunc5()
{
	engine->vfunc0();
	engine->vfunc17("impact_test", 0);
}
// END FUNCTION

// FUNCTION: 0x100694f0 size=0xbe
#include "CTETParticle.h"
#include "CBroadcastRecipientFilter.h"

#define EV1(n) virtual void ev##n();
#define EV10(p) EV1(p##0) EV1(p##1) EV1(p##2) EV1(p##3) EV1(p##4) EV1(p##5) EV1(p##6) EV1(p##7) EV1(p##8) EV1(p##9)

struct IEngineResourceView	// the engine interface at 0x1070b22c, slot 17
{
	EV10(a) EV1(b0) EV1(b1) EV1(b2) EV1(b3) EV1(b4) EV1(b5) EV1(b6)
	virtual char slot17(const char *pszName, int a);
};

extern IEngineResourceView *g_1070b22c;

void CTETParticle::vfunc3(const float *pOrigin, const float *pAngles)
{
	m_vOrigin[0] = pOrigin[0];
	m_vOrigin[1] = pOrigin[1];
	m_vOrigin[2] = pOrigin[2];
	m_vDirection[0] = pAngles[0];
	m_vDirection[1] = pAngles[1];
	m_vDirection[2] = pAngles[2];
	m_bEntIndexFlag = g_1070b22c->slot17("impact_test", 0);
	CBroadcastRecipientFilter filter;
	vfunc4((int)&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x100695e0 size=0x39
#include "CTETParticle.h"
#include "IVEngineServerFull.h"


void CTETParticle::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x100696a0 size=0x6
#include "CTETParticle.h"
namespace lifted {
extern char g_106c6db4;
}
ServerClass * CTETParticle::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c6db4);
}
// END FUNCTION

// FUNCTION: 0x100696c0 size=0x3
#include "CTETParticle.h"
int CTETParticle::vfunc1()
{
    return 0;
}
// END FUNCTION
