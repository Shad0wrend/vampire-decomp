// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061820 size=0x43
#include "CTEExplosion.h"

// TARGET: CTEExplosion::CTEExplosion
CTEExplosion::CTEExplosion(const char *pName) : CTEParticleSystem(pName)
{
	m_nField18 = 0;
	m_nField1c = 0;
	m_nField20 = 0;
	m_nField24 = 0;
	m_vecNormal.Init();
	m_nField38 = 0;
	m_nField3c = 0;
	m_bField34 = 0x43;
}
// END FUNCTION

// FUNCTION: 0x10061890 size=0x1e
#include "CTEExplosion.h"

// TARGET: CTEExplosion::vfunc2
CBaseTempEntity *CTEExplosion::vfunc2(unsigned int flags)
{
	sub_1000e90d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100618e0 size=0x102
#include "CTEExplosion.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const Vector *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector *pStart, float flScale, const Vector *pDir, Vector *pDest);
extern short g_1088ae7c;

struct CTEExplosionSlots
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4(CRecipientFilter *pFilter, float flDelay);
};

// TARGET: CTEExplosion::vfunc3
void CTEExplosion::vfunc3(const Vector &pOrigin, const QAngle &pAngles)
{
#define pOrigin ((const Vector *)&pOrigin)
#define pAngles ((const Vector *)&pAngles)
	m_nField18 = g_1088ae7c;
	m_nField1c = 0x3f000000;
	m_nField20 = 0xf;
	m_nField24 = 0;
	m_vecOrigin = *pOrigin;
	m_vecOrigin.z += 24.0f;
	Vector vecForward;
	sub_10139610(pAngles, &vecForward, 0, 0);
	vecForward.z = 0.0f;
	VectorNormalize(vecForward);
	sub_10139500(&m_vecOrigin, 50.0f, &vecForward, &m_vecOrigin);
	CBroadcastRecipientFilter filter;
	((CTEExplosionSlots *)this)->v4(&filter, 0.0f);
#undef pAngles
#undef pOrigin
}
// END FUNCTION

// FUNCTION: 0x10061a40 size=0x39
#include "CTEExplosion.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEExplosion::vfunc4(void *pFilter, int delay)
{
	engine->vfunc103((int)pFilter, delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10061b00 size=0x6
#include "CTEExplosion.h"
namespace lifted {
extern char g_106c2a40;
}
ServerClass * CTEExplosion::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c2a40);
}
// END FUNCTION

// FUNCTION: 0x10061b20 size=0x3
#include "CTEExplosion.h"
int CTEExplosion::vfunc1()
{
    return 0;
}
// END FUNCTION
