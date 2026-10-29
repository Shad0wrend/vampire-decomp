// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f1870 size=0x6
#include "CRotDoor.h"
namespace lifted {
extern char g_10564ae4;
}
datamap_t * CRotDoor::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10564ae4);
}
// END FUNCTION

// FUNCTION: 0x100f21d0 size=0x81
#include "CBaseEntity.h"
#include "CRotDoor.h"
#include "CBaseDoor.h"

#define V1(p) virtual void p();
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// the entity's vtable viewed as a flat list of slots (slot 64 takes a position)
struct CRotDoorSlots {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V1(b0) V1(b1) V1(b2) V1(b3)
    virtual void vfunc64(float *pPos);
};

struct CRotDoorFields {
    char pad0000[0x204];
    int m_nFlags;	// 0x204
    char pad0208[0x3fc - 0x208];
    float m_f3fc;	// 0x3fc
    char pad0400[0x4f8 - 0x400];
    int m_nState;	// 0x4f8
    char pad04fc[0x520 - 0x4fc];
    float m_vecClosed[3];	// 0x520
    float m_vecOpen[3];	// 0x52c
};

void CRotDoor::vfunc250()
{
    CRotDoorFields *p = (CRotDoorFields *)this;
    if (p->m_nFlags & 0x20)
        return;
    if (p->m_nFlags & 1) {
        ((CRotDoorSlots *)this)->vfunc64(p->m_vecOpen);
        p->m_nState = 0;
    } else {
        ((CRotDoorSlots *)this)->vfunc64(p->m_vecClosed);
        p->m_nState = 1;
    }
    p->m_f3fc = -1.0f;
    m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CRotDoor::sub_100efae0;
    switch (p->m_nState) {
    case 0:
        ((CBaseDoor *)this)->sub_100efbf0(1);
        break;
    case 1:
        ((CBaseDoor *)this)->sub_100efbf0(0);
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x100f2290 size=0x151
#include "Vector.h"
#include "CRotDoor.h"

void CRotDoor::vfunc104()
{
	sub_100efab0();
	sub_100f19b0(m_angRotation52c, &m_vecMins698, &m_vecMaxs6a4);
	sub_100f19b0(-1.0f * m_angRotation52c, &m_vecMins6bc, &m_vecMaxs6c8);
	m_vecCenter6b0 = 0.5f * (m_vecMins698 + m_vecMaxs6a4);
	m_vecCenter6d4 = (m_vecMins6bc + m_vecMaxs6c8) * 0.5f;
	sub_100f3f20();
	sub_100eecf0();
}
// END FUNCTION

// FUNCTION: 0x100f2450 size=0x92
#include "CRotDoor.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

bool CRotDoor::vfunc223()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::IsSolidFlagSet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	unsigned char bit = (*((unsigned char *)this + 0x2b4) >> 2) & 1;
	(*g_109f3680)--;
	if (!bit)
		sub_100a6150(0, 0, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x100f2520 size=0xdb
#include <math.h>
#include "CRotDoor.h"
#include "CEntityVSlots.h"
#pragma intrinsic(fabs)

static inline float FloatMakePositive(float f)
{
    return (float)fabs(f);
}

static inline bool VectorsAreEqual(const Vector &src1, const Vector &src2, float tolerance)
{
    if (FloatMakePositive(src1.x - src2.x) > tolerance)
        return false;
    if (FloatMakePositive(src1.y - src2.y) > tolerance)
        return false;
    return FloatMakePositive(src1.z - src2.z) <= tolerance;
}

// TARGET: CRotDoor::vfunc248
void CRotDoor::vfunc248()
{
    if (VectorsAreEqual(m_angRotation520, *((CEntityVSlots *)this)->slot221(), 0.001f)) {
        m_nState4f8 = 1;
        ((CEntityVSlots *)this)->slot249();
        return;
    }
    if (VectorsAreEqual(m_angRotation52c, *((CEntityVSlots *)this)->slot221(), 0.001f)) {
        m_nState4f8 = 0;
        ((CEntityVSlots *)this)->slot249();
    }
}
// END FUNCTION

// FUNCTION: 0x100f2640 size=0x43
#include "CRotDoor.h"
void CRotDoor::vfunc156(int bFirst)
{
	if (bFirst == 0)
		vfunc64(&m_angRotation52c.x);
	else
		vfunc64(&m_angRotation520.x);
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x100f2a00 size=0x16f
#include "CRotDoor.h"
#include "CEntityVSlots.h"

__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

struct SDoorBoundsView
{
	char m_pad0000[0x52c];
	Vector m_angRotation52c;	// 0x52c
	char m_pad0538[0x698 - 0x538];
	Vector m_vecA698;	// 0x698
	Vector m_vecB6a4;	// 0x6a4
	char m_pad06b0[0x6bc - 0x6b0];
	Vector m_vecA6bc;	// 0x6bc
	Vector m_vecB6c8;	// 0x6c8
};

struct CRotDoorUnit : CRotDoor
{
	void sub_100f2a00(Vector *pMins, Vector *pMaxs);	// "CRotDoor::ComputeCloseBounds"-like
	void sub_100f19b0(Vector vecAngles, Vector *pMins, Vector *pMaxs);	// stub 0x10011216
};

void CRotDoorUnit::sub_100f2a00(Vector *pMins, Vector *pMaxs)
{
	SDoorBoundsView *pView = (SDoorBoundsView *)this;
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	if (*pThis->slot221() == pView->m_angRotation52c) {
		*pMins = pView->m_vecA698;
		*pMaxs = pView->m_vecB6a4;
		return;
	}
	Vector vecScaled = pView->m_angRotation52c * -1.0f;
	if (*pThis->slot221() == vecScaled) {
		*pMins = pView->m_vecA6bc;
		*pMaxs = pView->m_vecB6c8;
		return;
	}
	DevMsg("ComputeCloseBounds() called when not fully open from either direction. Is that OK?\n");
	sub_100f19b0(*pThis->slot221(), pMins, pMaxs);
}
// END FUNCTION

// FUNCTION: 0x100f4080 size=0x8e
#include "CRotDoor.h"

void __cdecl sub_100aa7b0(void *p);

CRotDoor *CRotDoor::vfunc5(unsigned char flags)
{
	m_items564[7].sub_100cd2d0();
	m_items564[6].sub_100cd2d0();
	m_items564[5].sub_100cd2d0();
	m_items564[4].sub_100cd2d0();
	m_items564[3].sub_100cd2d0();
	m_items564[2].sub_100cd2d0();
	m_items564[1].sub_100cd2d0();
	m_items564[0].sub_100cd2d0();
	m_items4a4[1].sub_100cd2d0();
	m_items4a4[0].sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
