// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x100f6710 size=0x9
struct CGlobalVars1070b228 { int pad[3]; float curtime; };
extern CGlobalVars1070b228 *g_1070b228;
float CEffectsServer::vfunc9() { return g_1070b228->curtime; }
// END FUNCTION
