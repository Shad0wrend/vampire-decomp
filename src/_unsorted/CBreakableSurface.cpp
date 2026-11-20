// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010fa80 size=0x6
#include "datamap.h"
#include "CBreakableSurface.h"
namespace lifted {
extern char g_1056f0fc;
}
datamap_t * CBreakableSurface::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056f0fc);
}
// END FUNCTION

// FUNCTION: 0x1010fb80 size=0x6
#include "CBreakableSurface.h"
namespace lifted {
extern char g_1070998c;
}
int CBreakableSurface::vfunc80()
{
    return (int)&lifted::g_1070998c;
}
// END FUNCTION

// FUNCTION: 0x1010fba0 size=0x3
#include "CBreakableSurface.h"
int CBreakableSurface::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010fec0 size=0x18
#include "CBreakableSurface.h"
#include "CBreakable.h"

void sub_101d0ec0(const char *psz);

void CBreakableSurface::vfunc104()
{
    sub_101d0ec0("window_pane");
    CBreakable::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1010fef0 size=0x3a
#include "CBreakableSurface.h"

extern int *g_1070b228;
void sub_100154ec();

// TARGET: ?vfunc130@CBreakableSurface@@UAEXH@Z
void CBreakableSurface::vfunc130(int a)
{
    CBaseEntity::vfunc130(a);
    if (m_b4c4) {
        sub_100ac4e0((int)sub_100154ec, 0, 0);
        *(int *)((char *)this + 0x17c) = g_1070b228[3];
    }
}
// END FUNCTION

// FUNCTION: 0x10110b20 size=0x1fd
#include "CBreakableSurface.h"
#include "CTakeDamageInfo.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"

void __cdecl sub_10146570(Vector*,Vector*,int,int,int,int,int);

int CBreakableSurface::vfunc142(CTakeDamageInfo *pInfo)
{
	int nFlags = pInfo->m_pVDmg00 ? (pInfo->m_nFlags38 | *(int *)((char *)pInfo->m_pVDmg00 + 0x10)) : pInfo->m_nFlags38;
	if (!(nFlags & 0x40))
		return 0;
	CBaseEntity *pInflictor = (CBaseEntity *)pInfo->m_pInflictor;
	if (!pInflictor)
		return 0;
	Vector vecDir = *((CEntityVSlots *)pInflictor)->slot217() - ((CEntityVSlots *)this)->slot192();
	vecDir.NormalizeInPlace();
	CGameTrace trace;
	UTIL_TraceLine(*((CEntityVSlots *)pInflictor)->slot217(), ((CEntityVSlots *)this)->slot192(), 0, pInflictor, 0, &trace);
	CTakeDamageInfo info = *pInfo;
	((CEntityVSlots *)this)->slot141(&info, vecDir, &trace);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10110da0 size=0xb29
#include "CVDmg_t.h"
#include "CTakeDamageInfo.h"
#include "CBreakableSurface.h"
#include "CEntityMessageFilter.h"
#include "engineserver.h"
#include "engineiface.h"
#include <stdlib.h>

#define VD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CBSurfSlots {
	VD10(a0) VD10(a1) VD10(a2) VD10(a3) VD10(a4) VD10(a5) VD10(a6)
	VD10(a7) VD10(a8) VD10(a9) VD10(b0) VD10(b1) VD10(b2) VD10(b3)
	virtual bool Slot140(CBaseEntity *pAttacker);
	VD10(c0) VD10(c1) VD10(c2) VD10(c3) VD10(c4) VD10(c5) VD10(c6)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
	virtual const Vector &Slot217();
};

struct SDmgView {
	CVDmg_t *m_pVDmg;
	char m_pad04[0x2c - 4];
	CBaseEntity *m_pEnt2c;
	float m_fl30;
	float m_fl34;
	unsigned int m_nFlags38;

	CBaseEntity *GetAttacker() const { return m_pEnt2c; }
	float GetDamage() { return m_pVDmg ? (float)m_pVDmg->sub_101faa70() : m_fl30; }
	unsigned int GetDamageType() const { unsigned int b = m_nFlags38; if (m_pVDmg) b |= m_pVDmg->m_field10; return b; }
};
struct STraceView {
	Vector startpos;
	Vector endpos;
};
void sub_10139970(const Vector &vecIn, Vector &vecAngles);
void sub_10139610(const Vector &angles, Vector *pForward, Vector *pRight, Vector *pUp);

// the entity's edict, read through an inline accessor (CBaseEntity::edict())
template <class T> __forceinline T EdictOf(T e) { return e; }

inline const Vector *VP(const Vector &v) { return &v; }
inline void SetOutInt(COutputEvent &o, int value, CBaseEntity *pActivator, CBaseEntity *pCaller)
{
	((CVariantCopy *)&o)->sub_1000b320(4, &value);
	o.sub_100cd300(*(CVariantCopy *)&o, pActivator, pCaller, 0);
}

// TARGET: CBreakableSurface::vfunc141
void CBreakableSurface::vfunc141(CTakeDamageInfo *pInfoIn, const Vector *pVecDir, CGameTrace *pTrace)
{
	SDmgView *pInfo = (SDmgView *)pInfoIn;
	const STraceView *ptr = (const STraceView *)pTrace;

	if (!((CBSurfSlots *)this)->Slot140(pInfo->GetAttacker()))
		return;

	unsigned int bits;
	if (pInfo->m_pVDmg) {
		int idx = engine->vfunc35(EdictOf(m_pEdict2e0));
		pInfo->m_pVDmg->sub_101fb200(idx, pInfoIn->sub_101c29b0());
		int f = pInfo->m_pVDmg->m_field10;
		bits = pInfo->GetDamageType() | f;
	} else {
		bits = pInfo->GetDamageType();
	}

	m_iHealth -= pInfo->GetDamage();
	SetOutInt(m_OnHealthChanged, m_iHealth, pInfo->GetAttacker(), this);

	if (m_iHealth > 0)
		return;

	if (!m_b4c4) {
		sub_10111ba0((int)pInfo->GetAttacker(), VP(ptr->endpos - ptr->startpos));
	} else {
		m_OnBreak.sub_100cd660(pInfo->GetAttacker(), this, 0);
	}

	if (bits & 0x4000086) {
		float flWidth, flHeight;
		sub_101128d0(ptr->endpos, &flWidth, &flHeight);
		int nWidth = flWidth;
		int nHeight = flHeight;

		sub_101132a0(nWidth, nHeight, VP(*pVecDir * 500.0f), &ptr->endpos);
		if (m_nSurfaceType4c8 == 0) {
			float flWRem = flWidth - nWidth;
			float flHRem = flHeight - nHeight;

			if (flWRem > 0.8 && nWidth != m_nCols49c - 1)
				sub_101132a0(nWidth + 1, nHeight, VP(*pVecDir * 500.0f), &ptr->endpos);
			else if (flWRem < 0.2 && nWidth != 0)
				sub_101132a0(nWidth - 1, nHeight, VP(*pVecDir * 500.0f), &ptr->endpos);
			if (flHRem > 0.8 && nHeight != m_nRows4a0 - 1)
				sub_101132a0(nWidth, nHeight + 1, VP(*pVecDir * 500.0f), &ptr->endpos);
			else if (flHRem < 0.2 && nHeight != 0)
				sub_101132a0(nWidth, nHeight - 1, VP(*pVecDir * 500.0f), &ptr->endpos);

			if (enginerandom->vfunc2(0, 1) == 0) {
				sub_101132a0(nWidth, nHeight + 1, VP(*pVecDir * 1000.0f), &ptr->endpos);
				if (enginerandom->vfunc2(0, 1) == 0)
					sub_101132a0(nWidth, nHeight + 2, VP(*pVecDir * 1000.0f), &ptr->endpos);
			}
		}
	} else if (bits & 0x40) {
		if (m_nSurfaceType4c8 == 1) {
			float flWidth, flHeight;
			if (pInfo->GetAttacker())
				sub_101128d0(((CBSurfSlots *)pInfo->GetAttacker())->Slot217(), &flWidth, &flHeight);
			else
				sub_101128d0(ptr->endpos, &flWidth, &flHeight);
			int nWidth = flWidth;
			int nHeight = flHeight;

			for (int width = nWidth - 4; width < nWidth + 4; width++) {
				for (int height = nHeight - 4; height < nHeight + 4; height++) {
					if (abs(nWidth - width) + abs(nHeight - height) < enginerandom->vfunc2(2, 5))
						sub_101132a0(width, height, VP(*pVecDir * 500.0f), &ptr->endpos);
				}
			}
		} else {
			Vector vForceDir;
			if (DotProduct(m_vecAxis, *pVecDir) > 0)
				vForceDir = m_vecAxis * 3000.0f;
			else
				vForceDir = m_vecAxis * -3000.0f;

			int nTotal = m_nCols49c * m_nRows4a0;
			int nBroken = m_nPanes4cc;
			if (nBroken >= nTotal)
				return;

			if (nBroken < nTotal * 0.1) {
				Vector vAngles;
				sub_10139970(m_vecAxis * -1, vAngles);
				sub_10113050(&m_vecCorner, &vAngles.x, &vForceDir, &ptr->endpos, m_nCols49c * m_flWidth, m_nRows4a0 * m_flHeight, 7);
			} else {
				Vector vAngles;
				sub_10139970(m_vecAxis * -1, vAngles);
				Vector vWidthDir, vHeightDir;
				sub_10139610(vAngles, 0, &vWidthDir, &vHeightDir);

				for (int width = 0; width < m_nCols49c; width++) {
					int nHCount = 0;
					for (int height = 0; height < m_nRows4a0; height++) {
						if (!sub_101123b0(width, height)) {
							nHCount++;
						} else if (nHCount > 0) {
							Vector vBreakPos = m_vecCorner + (width * vWidthDir * m_flWidth) + ((height - nHCount) * vHeightDir * m_flHeight);
							sub_10113050(&vBreakPos, &vAngles.x, &vForceDir, &ptr->endpos, m_flWidth, nHCount * m_flHeight, 7);
							nHCount = 0;
						}
					}
					if (nHCount) {
						Vector vBreakPos = m_vecCorner + (width * vWidthDir * m_flWidth) + ((height - nHCount) * vHeightDir * m_flHeight);
						sub_10113050(&vBreakPos, &vAngles.x, &vForceDir, &ptr->endpos, m_flWidth, nHCount * m_flHeight, 7);
					}
				}
			}
			sub_10112a10();
		}
	}

	CEntityMessageFilter filter;
	filter.sub_1019d2f0(engine->vfunc35(EdictOf(m_pEdict2e0)));
	filter.MakeReliable();
	engine->vfunc65(&filter, 0);
	engine->vfunc67(3);
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x101134f0 size=0x72
#include "CBreakableSurface.h"

extern void (*g_109f362c)(const char *fmt, ...);
void sub_101cd940(CBaseEntity *pEntity);

void CBreakableSurface::vfunc103()
{
	CBreakable::vfunc103();
	if (m_nFaceCheck == 1) {
		g_109f362c("Rejecting func_breakablesurf.  Has multiple faces that aren't NODRAW.\n");
		sub_101cd940(this);
	} else if (m_nFaceCheck == 2) {
		g_109f362c("Rejecting func_breakablesurf.  Drawn face isn't a quad.\n");
		sub_101cd940(this);
	} else {
		sub_100aaa40(4);
		m_b4c4 = 0;
		m_nMaterial = 0;
	}
	sub_100b3580(0x20000000);
	sub_100a9470(1);
}
// END FUNCTION

// FUNCTION: 0x101135c0 size=0x36
#include "CBreakableSurface.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CBreakableSurface::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
