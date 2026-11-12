// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002c300 size=0x6
#include "datamap.h"
#include "CPhysPulley.h"
namespace lifted {
extern char g_10538f44;
}
datamap_t *CPhysPulley::vfunc82()
{
    return (datamap_t *)&lifted::g_10538f44;
}
// END FUNCTION

// FUNCTION: 0x1002c400 size=0x118
#include "CPhysPulley.h"
#include "matrix3x4_t.h"
void sub_10137fe0(const float *, const float *, float *);
void sub_10142e90(const float *, const float *, int, int, int, int, int);
// TARGET: CPhysPulley::vfunc123
void CPhysPulley::vfunc123()
{
	if (m_debugOverlays224 & 0x2c)
	{
		Vector p1 = ((CPhysConstraint *)this)->vfunc217();
		Vector p0 = p1, p2 = p1;
		matrix3x4_t m;
		PhysObjView *pObj = m_pConstraint450->vfunc5();
		if (pObj)
		{
			pObj->GetPositionMatrix(&m);
			sub_10137fe0(&m_vecObj1494.x, &m.m_flMatVal[0][0], &p0.x);
		}
		pObj = m_pConstraint450->vfunc6();
		if (pObj)
		{
			pObj->GetPositionMatrix(&m);
			sub_10137fe0(&m_vecObj24a0.x, &m.m_flMatVal[0][0], &p2.x);
		}
		sub_10142e90(&p0.x, &p1.x, 0, 255, 0, 0, 0);
		sub_10142e90(&p1.x, &m_vecPos488.x, 0, 255, 0, 0, 0);
		sub_10142e90(&m_vecPos488.x, &p2.x, 0, 255, 0, 0, 0);
	}
	sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x1002c570 size=0x2ca
// TARGET: CPhysPulley::vfunc241
#include "CPhysPulley.h"
#include "CRopeEndVec.h"
struct matrix3x4_t { float m[3][4]; };
struct ITracerView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
	virtual void Draw(PhysObjView *a, PhysObjView *b, int flags, void *rec);
};
extern ITracerView *g_10723940;
void sub_10137fe0(const Vector *in, const matrix3x4_t *m, Vector *out);
struct CUnkElem { int pad; };
struct CUnknown1002c900 { void *sub_1002c900(); };
void __stdcall sub_10025e50(char *base, unsigned stride, int count, void (CUnkElem::*fn)());

struct PulleyFrame {
	float m_f0; float m_f1; float m_f2; unsigned char m_b;
	Vector m_a; Vector m_bv; Vector m_c[2]; float m_len; float m_scale; unsigned char m_flag;
	PulleyFrame() {
		sub_10025e50((char *)m_c, 12, 2, (void (CUnkElem::*)())&CUnknown1002c900::sub_1002c900);
		m_f1 = 0; m_f2 = 0; m_f0 = 1.0f; m_b = 1;
		m_len = 1.0f; m_scale = 1.0f;
		((CRopeEndVec *)&m_a)->sub_1002c920(0, 0, 0);
		((CRopeEndVec *)&m_bv)->sub_1002c920(0, 0, 0);
		((CRopeEndVec *)&m_c[0])->sub_1002c920(0, 0, 0);
		((CRopeEndVec *)&m_c[1])->sub_1002c920(0, 0, 0);
		m_flag = 0;
	}
};

#define lbs2kg(x) ((x)*(1.0f/(2.2f)))
void CPhysPulley::vfunc241(int nFlags, CPhysPulleyDebugInfo *pInfo)
{
	PulleyFrame s;
	Vector out1;
	Vector out2;
	matrix3x4_t mat;
	s.m_a = ((CPhysConstraint *)this)->vfunc217();
	s.m_bv = m_vecPos488;
	pInfo->m_pObj[0]->GetPositionMatrix(&mat);
	sub_10137fe0(&pInfo->m_vecLocal0, &mat, &out1);
	pInfo->m_pObj[1]->GetPositionMatrix(&mat);
	sub_10137fe0(&pInfo->m_vecLocal1, &mat, &out2);
	for (int i = 0; i < 2; i++) {
		s.m_c[i] = (&pInfo->m_vecLocal0)[i];
		(&m_vecObj1494)[i] = (&pInfo->m_vecLocal0)[i];
	}
	s.m_len = (out1 - s.m_a).Length() + (out2 - s.m_bv).Length() * m_flRopeScale4b0 + m_flRopeLen4ac;
	if (m_flRopeScale4b0 != 0.0f)
		s.m_scale = m_flRopeScale4b0;
	s.m_f1 = lbs2kg(m_flScale464);
	s.m_f2 = lbs2kg(m_flScale468);
	s.m_b = (m_flags204 & 4) ? false : true;
	s.m_f0 = 1.0;
	if (m_flags204 & 2)
		s.m_flag = 1;
	g_10723940->Draw(pInfo->m_pObj[0], pInfo->m_pObj[1], nFlags, &s);
}
// END FUNCTION

// FUNCTION: 0x1002cba0 size=0x1e
#include "CPhysPulley.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysPulley::vfunc5
CPhysPulley *CPhysPulley::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
