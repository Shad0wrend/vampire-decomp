// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10065460 size=0x24
#include "CTEInspectionFX.h"

CTEInspectionFX::CTEInspectionFX(const char *name) : CTEParticleSystem(name)
{
}
// END FUNCTION

// FUNCTION: 0x100654a0 size=0x1e
#include "CTEInspectionFX.h"

// TARGET: CTEInspectionFX::vfunc2
CBaseTempEntity *CTEInspectionFX::vfunc2(unsigned int flags)
{
	sub_100043d6();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100654f0 size=0xe3
#include "CTEInspectionFX.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const float *pAngles, float *pForward, float *pRight, float *pUp);
void sub_10139500(const float *pStart, float flScale, const float *pDirection, float *pDest);

void CTEInspectionFX::vfunc3(const Vector &pOrigin, const QAngle &pAngles)
{
#define pOrigin ((const float *)&pOrigin)
#define pAngles ((const float *)&pAngles)
	m_vecOrigin = *(const Vector *)pOrigin;
	m_vecOrigin.z += 24.0f;
	Vector vecForward;
	sub_10139610(pAngles, &vecForward.x, 0, 0);
	vecForward.z = 0;
	VectorNormalize(vecForward);
	sub_10139500(&m_vecOrigin.x, 100.0f, &vecForward.x, &m_vecOrigin.x);
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0);
#undef pAngles
#undef pOrigin
}
// END FUNCTION

// FUNCTION: 0x10065620 size=0x39
#include "CRecipientFilter.h"
#include "CTEInspectionFX.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEInspectionFX::vfunc4(CRecipientFilter &pFilter, float flDelay)
{
#define pFilter ((CRecipientFilter *)&pFilter)
	engine->vfunc103((int)pFilter, *(int *)&flDelay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
#undef pFilter
}
// END FUNCTION

// FUNCTION: 0x100656e0 size=0x6
#include "CTEInspectionFX.h"
namespace lifted {
extern char g_106c4744;
}
ServerClass *CTEInspectionFX::vfunc0()
{
    return (ServerClass *)&lifted::g_106c4744;
}
// END FUNCTION

// FUNCTION: 0x10065700 size=0x3
#include "CTEInspectionFX.h"
int CTEInspectionFX::vfunc1()
{
    return 0;
}
// END FUNCTION
