// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f5bf0 size=0x28
#include "CEffectsServer.h"

extern char vt_1044db7c[];
extern char vt_10455e18[];
extern void *g_10939fdc;

// TARGET: CEffectsServer::CEffectsServer
CEffectsServer::CEffectsServer()
{
    *(void **)this = vt_1044db7c;
    m_pNext = g_10939fdc;
    g_10939fdc = this;
    m_b08 = 0;
    m_pSuppressHost = 0;
    m_nSuppressCount = 0;
    *(void **)this = vt_10455e18;
}
// END FUNCTION

// FUNCTION: 0x100f5c30 size=0x1e
#include "CEffectsServer.h"

// TARGET: CEffectsServer::vfunc0
CEffectsServer *CEffectsServer::vfunc0(unsigned int flags)
{
	sub_1000168b();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100f5c80 size=0x185
#include "CEffectsServer.h"
#include "CUnknown1019d130.h"
#include "CBroadcastRecipientFilter.h"

struct TempEntsView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7();
	virtual void vfunc8(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, float j, int k, float l, int m, int n, int o, int p, int q);	// slot 8
};
extern TempEntsView *g_10540528;

// TARGET: CEffectsServer::vfunc1
void CEffectsServer::vfunc1(int a, int b, int c, int d, unsigned char e, unsigned char f, int g, unsigned char h, unsigned char i, unsigned char j, unsigned char k, unsigned char l, unsigned char m, unsigned char n, unsigned char o, unsigned char p)
{
	CBroadcastRecipientFilter filter;
	CUnknown1019d130 *pFilter = (CUnknown1019d130 *)&filter;
	if (m_nSuppressCount <= 0 && m_pSuppressHost != 0) {
		if (!pFilter->sub_1000aa60())
			pFilter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (pFilter->vfunc2() == 0)
			goto done;
	}
	g_10540528->vfunc8(pFilter, 0, a, b, c, d, e, f, g, (float)h, (float)i, j, (float)k, l, m, n, o, p);
done:;
}
// END FUNCTION

// FUNCTION: 0x100f5e80 size=0xf2
#include "CEffectsServer.h"
#include "CPVSFilter.h"
#include "CUnknown1019d130.h"

struct CTempEntsView
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
	virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
	virtual void slot34(CRecipientFilter *pFilter, int a, const float *pOrigin, int b, float flScaled, int c);
};

extern CTempEntsView *g_10540528;

void CEffectsServer::vfunc2(const float *pOrigin, int a, float b, float c)
{
	CPVSFilter filter(pOrigin);
	CUnknown1019d130 *pFilter = (CUnknown1019d130 *)&filter;
	if (m_nSuppressCount > 0 || m_pSuppressHost == 0
		|| (pFilter->sub_1000aa60() || (pFilter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost), 0), pFilter->vfunc2() != 0))
		g_10540528->slot34(&filter, 0, pOrigin, a, b * 0.1f, (int)c);
}
// END FUNCTION

// FUNCTION: 0x100f6050 size=0xe0
#include "CEffectsServer.h"
#include "CPVSFilter.h"
#include "CUnknown1019d130.h"

struct CTEView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(CRecipientFilter *filter, int a, const float *pOrigin, int b, int c, int d);
};
extern CTEView *g_10540528;

// TARGET: CEffectsServer::vfunc3
void CEffectsServer::vfunc3(const float *pOrigin, int a, int b, int c)
{
	CPVSFilter filter(pOrigin);
	if (m_nSuppressCount > 0 || !m_pSuppressHost) {
	} else {
	}
	CUnknown1019d130 *f = (CUnknown1019d130 *)&filter;
	if (m_nSuppressCount > 0 || !m_pSuppressHost
		|| (!f->sub_1000aa60() && (f->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost), 0))
		|| f->vfunc2()) {
		g_10540528->v35(&filter, 0, pOrigin, a, b, c);
	}
}
// END FUNCTION

// FUNCTION: 0x100f6170 size=0xe0
#include "CEffectsServer.h"
#include "CPVSFilter.h"
#include "CUnknown1019d130.h"

struct CTEView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42();
	virtual void v43(CRecipientFilter *filter, int a, const float *pOrigin, int b, int c, int d);
};
extern CTEView *g_10540528;

void CEffectsServer::vfunc4(const float *pOrigin, int a, int b, int c)
{
	CPVSFilter filter(pOrigin);
	if (m_nSuppressCount > 0 || !m_pSuppressHost) {
	} else {
	}
	CUnknown1019d130 *f = (CUnknown1019d130 *)&filter;
	if (m_nSuppressCount > 0 || !m_pSuppressHost
		|| (!f->sub_1000aa60() && (f->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost), 0))
		|| f->vfunc2()) {
		g_10540528->v43(&filter, 0, pOrigin, a, b, c);
	}
}
// END FUNCTION

// FUNCTION: 0x100f6290 size=0xe0
#include "CEffectsServer.h"
#include "CPVSFilter.h"
#include "CUnknown1019d130.h"

struct CTEView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41();
	virtual void v42(CRecipientFilter *filter, int a, const float *pOrigin, int b, int c, int d);
};
extern CTEView *g_10540528;

// TARGET: CEffectsServer::vfunc5
void CEffectsServer::vfunc5(const float *pOrigin, int a, int b, int c)
{
	CPVSFilter filter(pOrigin);
	if (m_nSuppressCount > 0 || !m_pSuppressHost) {
	} else {
	}
	CUnknown1019d130 *f = (CUnknown1019d130 *)&filter;
	if (m_nSuppressCount > 0 || !m_pSuppressHost
		|| (!f->sub_1000aa60() && (f->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost), 0))
		|| f->vfunc2()) {
		g_10540528->v42(&filter, 0, pOrigin, a, b, c);
	}
}
// END FUNCTION

// FUNCTION: 0x100f63b0 size=0xd3
#include "CEffectsServer.h"
#include "CPVSFilter.h"
#include "CUnknown1019d130.h"

#define TEV(n) virtual void v##n();
#define TEV10(p) TEV(p##0) TEV(p##1) TEV(p##2) TEV(p##3) TEV(p##4) TEV(p##5) TEV(p##6) TEV(p##7) TEV(p##8) TEV(p##9)
struct CEffectsTempEnts
{
	TEV10(0) TEV10(1) TEV10(2)
	virtual void v30(CUnknown1019d130 *pFilter, int a, const float *pOrigin, int b);
};
extern CEffectsTempEnts *g_10540528;

// TARGET: CEffectsServer::vfunc6
void CEffectsServer::vfunc6(const float *pOrigin, int a)
{
	CPVSFilter filter(pOrigin);
	CUnknown1019d130 *pFilter = (CUnknown1019d130 *)&filter;
	if (m_nSuppressCount > 0 || !m_pSuppressHost) {
		g_10540528->v30(pFilter, 0, pOrigin, a);
	} else {
		if (!pFilter->sub_1000aa60())
			pFilter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (pFilter->vfunc2())
			g_10540528->v30(pFilter, 0, pOrigin, a);
	}
}
// END FUNCTION

// FUNCTION: 0x100f64d0 size=0xd8
#include "CBaseEntity.h"
#include "CEffectsServer.h"
#include "CPVSFilter.h"
#include "CUnknown1019d130.h"

#define TE10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CTempEntsView
{
	TE10(a) TE10(b) TE10(c)
	virtual void d0();
	virtual void slot31(CUnknown1019d130 *pFilter, int a, const float *pOrigin, int b, int c);
};

extern CTempEntsView *g_10540528;

struct CEffectsServerUnit : CEffectsServer
{
	CBaseEntity *GetSuppressHost() { return m_nSuppressCount > 0 ? 0 : m_pSuppressHost; }
};

void CEffectsServer::vfunc7(const float *pOrigin, int a, int b)
{
	CPVSFilter filter(pOrigin);
	CUnknown1019d130 *pFilter = (CUnknown1019d130 *)&filter;
	CEffectsServerUnit *self = (CEffectsServerUnit *)this;
	if (self->m_nSuppressCount <= 0 && self->m_pSuppressHost)
	{
		if (!pFilter->sub_1000aa60())
			pFilter->sub_1019d130(self->GetSuppressHost());
		if (pFilter->vfunc2())
			g_10540528->slot31(pFilter, 0, pOrigin, a, b);
	}
	else
		g_10540528->slot31(pFilter, 0, pOrigin, a, b);
}
// END FUNCTION

// FUNCTION: 0x100f65f0 size=0xd3
#include "CEffectsServer.h"
#include "CPVSFilter.h"
#include "CUnknown1019d130.h"

#define TEV(n) virtual void v##n();
struct CEffectsTempEnts
{
	TEV(0) TEV(1) TEV(2) TEV(3) TEV(4)
	virtual void v5(CUnknown1019d130 *pFilter, int a, const float *pOrigin, int b);
};
extern CEffectsTempEnts *g_10540528;

// TARGET: CEffectsServer::vfunc8
void CEffectsServer::vfunc8(const float *pOrigin, int a)
{
	CPVSFilter filter(pOrigin);
	CUnknown1019d130 *pFilter = (CUnknown1019d130 *)&filter;
	if (m_nSuppressCount > 0 || !m_pSuppressHost) {
		g_10540528->v5(pFilter, 0, pOrigin, a);
	} else {
		if (!pFilter->sub_1000aa60())
			pFilter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (pFilter->vfunc2())
			g_10540528->v5(pFilter, 0, pOrigin, a);
	}
}
// END FUNCTION

// FUNCTION: 0x100f6710 size=0x9
#include "CEffectsServer.h"
float CEffectsServer::vfunc9() { return gpGlobals->curtime; }
// END FUNCTION

// FUNCTION: 0x100f6730 size=0x3
#include "CEffectsServer.h"
bool CEffectsServer::vfunc10()
{
    return 1;
}
// END FUNCTION
