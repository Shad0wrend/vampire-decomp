// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018e860 size=0xe
struct CView { char pad[0x390]; int m390[1]; int sub_1018e860(int); };
// TARGET: ?sub_1018e860@CView@@QAEHH@Z
int CView::sub_1018e860(int i) { return m390[i]; }
// END FUNCTION

// FUNCTION: 0x1018e870 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc20()
{
    return *(int *)((char *)this + 0x3b0);
}
// END FUNCTION

// FUNCTION: 0x1018e880 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc21()
{
    return *(int *)((char *)this + 0x3b4);
}
// END FUNCTION

// FUNCTION: 0x1018e890 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc22()
{
    return *(int *)((char *)this + 0x3b8);
}
// END FUNCTION

// FUNCTION: 0x1018e8a0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc23()
{
    return *(int *)((char *)this + 0x3bc);
}
// END FUNCTION

// FUNCTION: 0x1018e8b0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc24()
{
    return *(int *)((char *)this + 0x3c0);
}
// END FUNCTION

// FUNCTION: 0x1018e8c0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc25()
{
    return *(int *)((char *)this + 0x3c4);
}
// END FUNCTION

// FUNCTION: 0x1018e8d0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc26()
{
    return *(int *)((char *)this + 0x3c8);
}
// END FUNCTION

// FUNCTION: 0x1018e8e0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc27()
{
    return *(int *)((char *)this + 0x3cc);
}
// END FUNCTION

// FUNCTION: 0x1018e8f0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc28()
{
    return *(int *)((char *)this + 0x3d0);
}
// END FUNCTION

// FUNCTION: 0x1018e900 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc29()
{
    return *(int *)((char *)this + 0x3d4);
}
// END FUNCTION

// FUNCTION: 0x1018e910 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc30()
{
    return *(int *)((char *)this + 0x3d8);
}
// END FUNCTION

// FUNCTION: 0x1018e920 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc31()
{
    return *(int *)((char *)this + 0x3d8);
}
// END FUNCTION

// FUNCTION: 0x1018e930 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc32()
{
    return *(int *)((char *)this + 0x3e0);
}
// END FUNCTION

// FUNCTION: 0x1018e940 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc33()
{
    return *(int *)((char *)this + 0x3e4);
}
// END FUNCTION

// FUNCTION: 0x1018e950 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc34()
{
    return *(int *)((char *)this + 0x3e8);
}
// END FUNCTION

// FUNCTION: 0x1018e960 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc35()
{
    return *(int *)((char *)this + 0x3ec);
}
// END FUNCTION

// FUNCTION: 0x1018e970 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc36()
{
    return *(int *)((char *)this + 0x438);
}
// END FUNCTION

// FUNCTION: 0x1018e980 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc37()
{
    return *(int *)((char *)this + 0x43c);
}
// END FUNCTION

// FUNCTION: 0x1018e990 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc38()
{
    return *(int *)((char *)this + 0x444);
}
// END FUNCTION

// FUNCTION: 0x1018e9a0 size=0x7
#include "CViewRender.h"
bool CViewRender::vfunc43()
{
    return *(bool *)((char *)this + 0x49c);
}
// END FUNCTION

// FUNCTION: 0x1018f9b0 size=0x7e
#include "CViewRender.h"
#include "ScopeTrace.h"

struct IViewEffects_1018f9b0
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
};

struct IClientShadowMgr_1018f9b0
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
};

extern IViewEffects_1018f9b0 *g_102d5050;
extern IClientShadowMgr_1018f9b0 *g_1028073c;

// TARGET: CViewRender::vfunc1
void CViewRender::vfunc1()
{
	ScopeTrace trace("CViewRender::LevelInit", g_102de300);

	g_102d5050->v2();
	g_1028073c->v3();

	*(int *)((char *)this + 0x374) = 0;
	*(int *)((char *)this + 0x378) = 0;
}
// END FUNCTION

// FUNCTION: 0x10190360 size=0x2c
#include "CViewRender.h"
struct XEng39 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual double v39(int); };
extern XEng39 *g_104a57d4;
struct XVR { char u0[0x2a0]; int m_i2a0; char m_b2a4; char u1[0xb]; double m_d2b0; };
// TARGET: CViewRender::vfunc9
void CViewRender::vfunc9()
{
	XVR *p = (XVR *)this;
	p->m_d2b0 = g_104a57d4->v39(0);
	p->m_b2a4 = 1;
	p->m_i2a0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10191700 size=0x8
#include "CViewRender.h"
void CViewRender::vfunc16()
{
    *(char *)((char *)this + 0xa4) = 1;
}
// END FUNCTION

// FUNCTION: 0x10192850 size=0x1e
struct V2850 { char pad[0x450]; float m; int sub_10192850(); };
int V2850::sub_10192850() { return m > 0.0f; }
// END FUNCTION

// FUNCTION: 0x10192870 size=0x7
#include "CViewRender.h"
float CViewRender::vfunc45()
{
    return *(float *)((char *)this + 0x450);
}
// END FUNCTION

// FUNCTION: 0x10199590 size=0x7
#include "CViewRender.h"
char * CViewRender::vfunc11()
{
    return (char *)this + 0x22c;
}
// END FUNCTION

// FUNCTION: 0x101995a0 size=0x7
#include "CViewRender.h"
char * CViewRender::vfunc12()
{
    return (char *)this + 0x310;
}
// END FUNCTION

// FUNCTION: 0x101995b0 size=0x29
struct CInner_q { virtual int v0(); virtual char v1(); char pad[0x2c - 4]; int m_n2c; };
struct COuter_p { int m_n0; CInner_q *m_pq; };
struct VView384 {
	char pad[0x384];
	COuter_p *m_p384;
	char sub_101995b0();
};
char VView384::sub_101995b0()
{
	COuter_p *p = m_p384;
	if (p && (p->m_pq->v1() || !p->m_pq->m_n2c))
		return 0;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1019e1f0 size=0x22
#include "CViewRender.h"
struct E1019e1f0 { int d[11]; };
void *CViewRender::vfunc6(int i)
{
	if (i >= 0 && i < 2)
		return &((E1019e1f0 *)((char *)this + 0x2b8))[i];
	return 0;
}
// END FUNCTION
