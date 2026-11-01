// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10068490 size=0x1e
#include "CTESpriteSpray.h"

// TARGET: CTESpriteSpray::vfunc2
CTESpriteSpray *CTESpriteSpray::vfunc2(unsigned int flags)
{
	sub_1000bc7b();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100684e0 size=0x164
#include "Vector.h"
#include "CBroadcastRecipientFilter.h"
#include "CTESpriteSpray.h"

extern short g_1088ae52;
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);

#define RV1(n) virtual void n();

class CRandomStreamView
{
public:
	RV1(r0) RV1(r1)
	virtual int RandomInt(int iMin, int iMax);
};
extern CRandomStreamView *g_1070b244;

struct SpraySlotsView
{
	char pad0[0xc];
	Vector m_vecOrigin;
	Vector m_vecDirection;
	int m_nModelIndex;
	int m_nCount;
	float m_fNoise;
	int m_nSpeed;
};

void CTESpriteSpray::vfunc3(const Vector *pOrigin, const Vector *pAngles)
{
	SpraySlotsView *pView = (SpraySlotsView *)this;
	pView->m_nModelIndex = g_1088ae52;
	pView->m_fNoise = 0.8f;
	pView->m_nSpeed = 5;
	pView->m_nCount = 30;
	pView->m_vecOrigin = *pOrigin;
	pView->m_vecOrigin.z += 24.0f;
	Vector forward, right;
	sub_10139610(pAngles, &forward, &right, 0);
	forward.z = 0.0f;
	VectorNormalize(forward);
	sub_10139500(pView->m_vecOrigin, 50.0f, forward, pView->m_vecOrigin);
	sub_10139500(pView->m_vecOrigin, -25.0f, right, pView->m_vecOrigin);
	pView->m_vecDirection.x = g_1070b244->RandomInt(-100, 100);
	pView->m_vecDirection.y = g_1070b244->RandomInt(-100, 100);
	pView->m_vecDirection.z = g_1070b244->RandomInt(0, 100);
	CBroadcastRecipientFilter filter;
	vfunc4(&filter, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x100686b0 size=0x39
#include "CTESpriteSpray.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTESpriteSpray::vfunc4(CRecipientFilter *pFilter, float flDelay)
{
	engine->vfunc103((int)pFilter, *(int *)&flDelay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10068770 size=0x6
#include "CTESpriteSpray.h"
namespace lifted {
extern char g_106c5ad0;
}
int CTESpriteSpray::vfunc0()
{
    return (int)&lifted::g_106c5ad0;
}
// END FUNCTION

// FUNCTION: 0x10068790 size=0x3
#include "CTESpriteSpray.h"
int CTESpriteSpray::vfunc1()
{
    return 0;
}
// END FUNCTION
