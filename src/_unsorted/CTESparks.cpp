// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067660 size=0x1e
#include "CTESparks.h"

// TARGET: CTESparks::vfunc2
CTESparks *CTESparks::vfunc2(unsigned int flags)
{
	sub_1000dc10();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100676b0 size=0xe3
#include "CTESparks.h"
#include "CBroadcastRecipientFilter.h"

void sub_10139610(const float *pAngles, float *pForward, float *pRight, float *pUp);
void sub_10139500(const float *pStart, float flScale, const float *pDirection, float *pDest);

void CTESparks::vfunc3(const float *pOrigin, const float *pAngles)
{
	m_vecOrigin = *(const Vector *)pOrigin;
	m_vecOrigin.z += 24.0f;
	Vector vecForward;
	sub_10139610(pAngles, &vecForward.x, 0, 0);
	vecForward.z = 0;
	VectorNormalize(vecForward);
	sub_10139500(&m_vecOrigin.x, 100.0f, &vecForward.x, &m_vecOrigin.x);
	CBroadcastRecipientFilter filter;
	vfunc4(&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x100677e0 size=0x39
#include "CRecipientFilter.h"
#include "CTESparks.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTESparks::vfunc4(CRecipientFilter *pFilter, float flDelay)
{
	engine->vfunc103((int)pFilter, *(int *)&flDelay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x100678a0 size=0x6
#include "CTESparks.h"
namespace lifted {
extern char g_106c55fc;
}
ServerClass *CTESparks::vfunc0()
{
    return (ServerClass *)&lifted::g_106c55fc;
}
// END FUNCTION

// FUNCTION: 0x100678c0 size=0x3
#include "CTESparks.h"
int CTESparks::vfunc1()
{
    return 0;
}
// END FUNCTION
