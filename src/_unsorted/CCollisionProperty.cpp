// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100dbe00 size=0x6
namespace lifted {
extern char g_10560c20;
}
int CCollisionProperty::vfunc18()
{
    return (int)&lifted::g_10560c20;
}
// END FUNCTION

// FUNCTION: 0x100dc190 size=0x1a
// TARGET: CCollisionProperty::CCollisionProperty
#include "CCollisionProperty.h"
struct CUnk100dc300 {
    void sub_100dc300(int a);
};
CCollisionProperty::CCollisionProperty()
{
    m_hPartition = 0xffff;
    ((CUnk100dc300 *)this)->sub_100dc300(0);
}
// END FUNCTION

// FUNCTION: 0x100dc1c0 size=0x1
void CCollisionProperty::vfunc17()
{
}
// END FUNCTION

// FUNCTION: 0x100dc1e0 size=0x7
// TARGET: sub_100dc1e0
unsigned int __fastcall sub_100dc1e0(void *pThis)
{
    return *(unsigned short *)((char *)pThis + 0x44);
}
// END FUNCTION

// FUNCTION: 0x100dc3a0 size=0x4
int CCollisionProperty::vfunc0()
{
    return *(int *)((char *)this + 0x3c);
}
// END FUNCTION

// FUNCTION: 0x100dc3c0 size=0xa
#include "CCollisionProperty.h"
// TARGET: CCollisionProperty::vfunc14
int CCollisionProperty::vfunc14() { return m_pOuter->m_field368; }
// END FUNCTION

// FUNCTION: 0x100dc3e0 size=0x1a
#include "CCollisionProperty.h"
#include "TestBit.h"

// TARGET: CCollisionProperty::vfunc16
bool CCollisionProperty::vfunc16()
{
	if (TestBit(m_usSolidFlags, 3) || vfunc14() == 1)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x100dc410 size=0x3
int CCollisionProperty::vfunc13()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100dc560 size=0x4
int CCollisionProperty::vfunc11()
{
    return *(int *)((char *)this + 0x40);
}
// END FUNCTION

// FUNCTION: 0x100dc610 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CEntSlots
{
	H(a) H(b) T(c0) virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual void target();
};

// TARGET: CCollisionProperty::vfunc8
void CCollisionProperty::vfunc8()
{
	((CEntSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x100dc630 size=0x31
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
extern float g_1070d9d0[3];
float *CCollisionProperty::vfunc9(bool bOuter)
{
	if (!bOuter && ((m_usSolidFlags & 0x80) || m_nSolidType == 2 || m_nSolidType == 0))
		return g_1070d9d0;
	return (float *)((CEntityVSlots *)m_pOuter)->slot219();
}
// END FUNCTION

// FUNCTION: 0x100dc680 size=0x96
#include "CCollisionProperty.h"

struct matrix3x4_t {
    float m[12];
    ~matrix3x4_t() {}
};

void sub_10139a90(float *pMat);
void sub_10138760(const float *pVec, int col, float *pMat);
typedef float *(__fastcall *PFN_GetVec)(void *);
extern int g_106e853c;

float *CCollisionProperty::vfunc10()
{
    static matrix3x4_t s_Matrix[4];
    float *pMat = s_Matrix[g_106e853c].m;
    g_106e853c = (g_106e853c + 1) & 3;
    if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0) {
        CBaseEntity *pOuter = m_pOuter;
        unsigned char nBits = (unsigned char)(*(unsigned int *)((char *)pOuter + 0x268) >> 11);
        if (nBits & 1)
            pOuter->vfunc98();
        return (float *)((char *)pOuter + 0x130);
    }
    sub_10139a90(pMat);
    sub_10138760(((PFN_GetVec)(*(void ***)this)[8])(this), 3, pMat);
    return pMat;
}
// END FUNCTION

// FUNCTION: 0x100dc810 size=0x4
float * CCollisionProperty::vfunc1()
{
    return (float *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x100dc830 size=0x4
float * CCollisionProperty::vfunc2()
{
    return (float *)((char *)this + 0x10);
}
// END FUNCTION

// FUNCTION: 0x100dc850 size=0x5f
#include "CCollisionProperty.h"
void CCollisionProperty::vfunc3(Vector *pMins, Vector *pMaxs)
{
	sub_100dcd90(&m_vecMins.x, &m_vecMaxs.x, &pMins->x, &pMaxs->x);
	unsigned short flags = vfunc12();
	if (flags & 0x100) {
		pMins->x = pMins->x - m_flTriggerBloat;
		pMins->y = pMins->y - m_flTriggerBloat;
		pMaxs->x = m_flTriggerBloat + pMaxs->x;
		pMaxs->y = pMaxs->y + m_flTriggerBloat;
		pMaxs->z = m_flTriggerBloat * 0.5f + pMaxs->z;
	}
}
// END FUNCTION

// FUNCTION: 0x100dc920 size=0x8
// TARGET: CCollisionProperty::vfunc6
int CCollisionProperty::vfunc6()
{
	return m_pOuter->vfunc8();
}
// END FUNCTION

// FUNCTION: 0x100dc940 size=0x8
namespace lifted {
struct C100016a4 { int sub_100016a4(); };
}
void CCollisionProperty::vfunc7()
{
    ((lifted::C100016a4 *)(*(int *)((char *)this + 0x3c)))->sub_100016a4();
}
// END FUNCTION

// FUNCTION: 0x100dc960 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CEntSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7) T(a8)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8();
	virtual void target();
};

// TARGET: CCollisionProperty::vfunc4
void CCollisionProperty::vfunc4()
{
	((CEntSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x100dc980 size=0xb
void CCollisionProperty::vfunc5()
{
	m_pOuter->vfunc100();
}
// END FUNCTION

// FUNCTION: 0x100ddae0 size=0xb7
#include "CCollisionProperty.h"

#define CV(n) virtual void s##n();
struct CollView {
	CV(0) CV(1) CV(2) CV(3) CV(4) CV(5) CV(6) CV(7)
	virtual Vector *s8();
};

inline bool IsDirtySurround(const CBaseEntity *pEnt)
{
	return (pEnt->m_flags268 >> 14) & 1;
}

inline void ClearDirtySurround(CBaseEntity *pEnt)
{
	pEnt->m_flags268 &= ~0x4000;
}

void CCollisionProperty::vfunc15(Vector *pMins, Vector *pMaxs)
{
	const Vector &origin = *((CollView *)this)->s8();
	if (IsDirtySurround(m_pOuter)) {
		ClearDirtySurround(m_pOuter);
		sub_100dd780(pMins, pMaxs);
		VectorSubtract(*pMins, origin, m_vecSurroundingMins);
		VectorSubtract(*pMaxs, origin, m_vecSurroundingMaxs);
		return;
	}
	VectorAdd(origin, m_vecSurroundingMins, *pMins);
	pMaxs->x = m_vecSurroundingMaxs.x + origin.x;
	pMaxs->y = m_vecSurroundingMaxs.y + origin.y;
	pMaxs->z = m_vecSurroundingMaxs.z + origin.z;
}
// END FUNCTION
