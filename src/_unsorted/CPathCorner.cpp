// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10147b10 size=0x7
#include "CPathCorner.h"
float CPathCorner::vfunc152()
{
    return *(float *)((char *)this + 0x450);
}
// END FUNCTION

// FUNCTION: 0x10147bb0 size=0x6
#include "CPathCorner.h"
namespace lifted {
extern char g_1057b410;
}
datamap_t *CPathCorner::vfunc82()
{
    return (datamap_t *)&lifted::g_1057b410;
}
// END FUNCTION

// FUNCTION: 0x10147cf0 size=0x1
#include "CPathCorner.h"
void CPathCorner::vfunc103()
{
}
// END FUNCTION

// FUNCTION: 0x10147e60 size=0xc3
#include "CPathCorner.h"

struct CEntityOriginView	// the entity's virtual table up to slot 220
{
	CBP_V100(a) CBP_V100(b) CBP_V10(c0)
	CBP_V1(d0) CBP_V1(d1) CBP_V1(d2) CBP_V1(d3) CBP_V1(d4) CBP_V1(d5) CBP_V1(d6)
	virtual float *vfunc217();
	virtual void vfunc218();
	virtual void vfunc219();
	virtual float *vfunc220();
};

extern CGlobalEntityList g_106eb5d8;
void sub_10142aa0(const float *pOrigin, const Vector &vecMins, const Vector &vecMaxs, int r, int g, int b, int a, float flDuration);
void sub_10142e90(const float *pStart, const float *pEnd, int r, int g, int b, bool bNoDepthTest, float flDuration);

// TARGET: CPathCorner::vfunc123
void CPathCorner::vfunc123()
{
	if (m_fTextOverlayFlags & 0x24) {
		sub_10142aa0(((CEntityOriginView *)this)->vfunc217(), Vector(-10, -10, -10), Vector(10, 10, 10), 0xff, 100, 100, 0, 0);
		if (m_pszTarget) {
			CEntityOriginView *pTarget = (CEntityOriginView *)g_106eb5d8.sub_100f7770(0, m_pszTarget, 0, 0);
			if (pTarget)
				sub_10142e90(((CEntityOriginView *)this)->vfunc220(), pTarget->vfunc220(), 0xff, 100, 100, 1, 0);
		}
	}
	sub_100a0130();
}
// END FUNCTION
