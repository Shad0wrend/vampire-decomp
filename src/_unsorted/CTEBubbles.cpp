// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005f5c0 size=0x39
#include "CTEBubbles.h"

extern int vt_1044dd90[];

struct CBaseTempEntityHeadPlaceholder {
    void sub_100507e0(const char *name);
};

// TARGET: CTEBubbles::sub_1005f5c0
CTEBubbles *CTEBubbles::sub_1005f5c0(const char *name)
{
	((CBaseTempEntityHeadPlaceholder *)this)->sub_100507e0(name);
	*(int **)this = vt_1044dd90;
	*(int *)((char *)this + 0x0c) = 0;
	*(int *)((char *)this + 0x10) = 0;
	*(int *)((char *)this + 0x14) = 0;
	*(int *)((char *)this + 0x18) = 0;
	*(int *)((char *)this + 0x1c) = 0;
	*(int *)((char *)this + 0x20) = 0;
	*(int *)((char *)this + 0x24) = 0;
	*(int *)((char *)this + 0x28) = 0;
	*(int *)((char *)this + 0x2c) = 0;
	*(int *)((char *)this + 0x30) = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005f610 size=0x1e
#include "CTEBubbles.h"

// TARGET: CTEBubbles::vfunc2
CTEBubbles *CTEBubbles::vfunc2(unsigned int flags)
{
	sub_1000e2c8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005f660 size=0x125
#include "CTEBubbles.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae84;

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector &start, float flScale, const Vector &direction, Vector &dest);

struct CTEBubblesView
{
	char m_pad0000[0xc];
	Vector m_vecMins;
	Vector m_vecMaxs;
	float m_fHeight;
	int m_nModelIndex;
	int m_nCount;
	float m_fSpeed;
};

void CTEBubbles::vfunc3(const Vector &origin, const QAngle &angles)
{
	CTEBubblesView *p = (CTEBubblesView *)this;
	p->m_vecMins = origin;
	p->m_vecMins.z += 24.0f;
	Vector forward;
	sub_10139610(angles, &forward, 0, 0);
	forward.z = 0.0f;
	VectorNormalize(forward);
	sub_10139500(p->m_vecMins, 100.0f, forward, p->m_vecMins);
	p->m_fSpeed = 2.0f;
	p->m_nCount = 50;
	p->m_fHeight = 256.0f;
	p->m_vecMaxs.x = p->m_vecMins.x + 256.0f;
	p->m_vecMaxs.y = p->m_vecMins.y + 256.0f;
	p->m_vecMaxs.z = p->m_vecMins.z + 256.0f;
	p->m_nModelIndex = g_1088ae84;
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005f7e0 size=0x39
#include "CTEBubbles.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEBubbles::vfunc4(CRecipientFilter &filter, float delay)
{
	engine->vfunc103((int)&filter, *(int *)&delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005f8a0 size=0x6
#include "CTEBubbles.h"
namespace lifted {
extern char g_106c17cc;
}
int CTEBubbles::vfunc0()
{
    return (int)&lifted::g_106c17cc;
}
// END FUNCTION

// FUNCTION: 0x1005f8c0 size=0x3
#include "CTEBubbles.h"
int CTEBubbles::vfunc1()
{
    return 0;
}
// END FUNCTION
