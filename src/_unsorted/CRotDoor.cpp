// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
