// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006a440 size=0x1e
#include "CTETracer.h"

// TARGET: CTETracer::vfunc2
CTETracer *CTETracer::vfunc2(unsigned int flags)
{
	sub_1000f236();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1006a490 size=0x10d
#include "CTETracer.h"
#include "CBroadcastRecipientFilter.h"
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector *start, float scale, const Vector *dir, Vector *dest);
void CTETracer::vfunc3(const Vector *pOrigin, const Vector *pAngles)
{
	m_vecStart = *pOrigin;
	m_vecStart.z += 24.0f;
	Vector forward, right;
	sub_10139610(pAngles, &forward, &right, 0);
	forward.z = 0;
	VectorNormalize(forward);
	sub_10139500(&m_vecStart, 100.0f, &forward, &m_vecEnd);
	sub_10139500(&m_vecEnd, -128.0f, &right, &m_vecStart);
	sub_10139500(&m_vecEnd, 128.0f, &right, &m_vecEnd);
	CBroadcastRecipientFilter filter;
	vfunc4(&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1006a5f0 size=0x39
#include "CTETracer.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTETracer::vfunc4(void *pFilter, int delay)
{
	engine->vfunc103((int)pFilter, delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1006a6b0 size=0x6
#include "CTETracer.h"
namespace lifted {
extern char g_106c7138;
}
int CTETracer::vfunc0()
{
    return (int)&lifted::g_106c7138;
}
// END FUNCTION

// FUNCTION: 0x1006a6d0 size=0x3
#include "CTETracer.h"
int CTETracer::vfunc1()
{
    return 0;
}
// END FUNCTION
