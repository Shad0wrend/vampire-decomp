// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005fcf0 size=0x1e
#include "CTEBubbleTrail.h"

// TARGET: CTEBubbleTrail::vfunc2
CTEBubbleTrail *CTEBubbleTrail::vfunc2(unsigned int flags)
{
	sub_100157ee();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005fd40 size=0x125
#include "CTEBubbleTrail.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae84;

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector &start, float flScale, const Vector &direction, Vector &dest);

struct CTEBubbleTrailView
{
	char m_pad0000[0xc];
	Vector m_vecMins;
	Vector m_vecMaxs;
	float m_fHeight;
	int m_nModelIndex;
	int m_nCount;
	float m_fSpeed;
};

void CTEBubbleTrail::vfunc3(const Vector &origin, const QAngle &angles)
{
	CTEBubbleTrailView *p = (CTEBubbleTrailView *)this;
	p->m_vecMins = origin;
	p->m_vecMins.z += 24.0f;
	Vector forward;
	sub_10139610(angles, &forward, 0, 0);
	forward.z = 0.0f;
	VectorNormalize(forward);
	sub_10139500(p->m_vecMins, 100.0f, forward, p->m_vecMins);
	p->m_fSpeed = 8.0f;
	p->m_nCount = 20;
	p->m_fHeight = 128.0f;
	p->m_vecMaxs.x = p->m_vecMins.x + 256.0f;
	p->m_vecMaxs.y = p->m_vecMins.y + 256.0f;
	p->m_vecMaxs.z = p->m_vecMins.z + 256.0f;
	p->m_nModelIndex = g_1088ae84;
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005fec0 size=0x39
#include "CRecipientFilter.h"
#include "CTEBubbleTrail.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEBubbleTrail::vfunc4(CRecipientFilter &filter, float delay)
{
	engine->vfunc103((int)&filter, *(int *)&delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005ff80 size=0x6
#include "CTEBubbleTrail.h"
namespace lifted {
extern char g_106c1ba0;
}
int CTEBubbleTrail::vfunc0()
{
    return (int)&lifted::g_106c1ba0;
}
// END FUNCTION

// FUNCTION: 0x1005ffa0 size=0x3
#include "CTEBubbleTrail.h"
int CTEBubbleTrail::vfunc1()
{
    return 0;
}
// END FUNCTION
