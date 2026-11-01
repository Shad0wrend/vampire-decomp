// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004fbf0 size=0xd
// TARGET: CBaseToggle::vfunc109
#include "CBaseToggle.h"

bool CBaseToggle::vfunc109(const char *a, float b)
{
    return ((CBaseEntity *)this)->CBaseEntity::vfunc109(a, b);
}
// END FUNCTION

// FUNCTION: 0x101c0c60 size=0x6
#include "CBaseToggle.h"
namespace lifted {
extern char g_1059b6f0;
}
datamap_t * CBaseToggle::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059b6f0);
}
// END FUNCTION

// FUNCTION: 0x101c0e70 size=0x36
#include "CBaseToggle.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseToggle *CBaseToggle::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c0ec0 size=0x193
#include "CBaseToggle.h"

struct CBaseToggleDumpView {
	char m_pad0000[0x4f8];
	int m_toggleState;	// 0x4f8
	int m_flMoveDistance;	// 0x4fc
	int m_flWait;	// 0x500
	int m_flLip;	// 0x504
	Vector m_vecPosition1;	// 0x508
	Vector m_vecPosition2;	// 0x514
	Vector m_vecAngle1;	// 0x520
	Vector m_vecAngle2;	// 0x52c
	int m_flHeight;	// 0x538
	EHANDLE m_hActivator;	// 0x53c
	Vector m_vecFinalDest;	// 0x540
	Vector m_vecFinalAngle;	// 0x54c
	int m_movementType;	// 0x558
};

void CBaseToggle::vfunc31(int pDump)
{
	CBaseToggleDumpView *pView = (CBaseToggleDumpView *)this;
	sub_1009b980(pDump, "m_toggle_state", pView->m_toggleState);
	sub_1009ba60(pDump, "m_flMoveDistance", pView->m_flMoveDistance);
	sub_1009ba60(pDump, "m_flWait", pView->m_flWait);
	sub_1009ba60(pDump, "m_flLip", pView->m_flLip);
	sub_1009be00(pDump, "m_vecPosition1", pView->m_vecPosition1);
	sub_1009be00(pDump, "m_vecPosition2", pView->m_vecPosition2);
	sub_1009bd10(pDump, "m_vecAngle1", pView->m_vecAngle1);
	sub_1009bd10(pDump, "m_vecAngle2", pView->m_vecAngle2);
	sub_1009ba60(pDump, "m_flHeight", pView->m_flHeight);
	sub_1009c000(pDump, "m_hActivator", pView->m_hActivator);
	sub_1009be00(pDump, "m_vecFinalDest", pView->m_vecFinalDest);
	sub_1009bd10(pDump, "m_vecFinalAngle", pView->m_vecFinalAngle);
	sub_1009b980(pDump, "m_movementType", pView->m_movementType);
	CBaseEntity::vfunc31(pDump);
}
// END FUNCTION

// FUNCTION: 0x101c1480 size=0x72
#include "CBaseToggle.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);

bool CBaseToggle::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "lip")) {
		*(float *)((char *)this + 0x504) = (float)atof(szValue);
		return true;
	}
	if (!_strcmpi(szKeyName, "distance")) {
		*(float *)((char *)this + 0x4fc) = (float)atof(szValue);
		return true;
	}
	return sub_1000fc86(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x101c1720 size=0x44
#include "CBaseToggle.h"
struct CToggleView558 : CBaseToggle
{
	char m_pad04a4[0x558 - 0x4a4];
	int m_nMove558;
	void sub_101c1790();	// stub 0x10007cc0
	void sub_101c19e0();	// stub 0x10007725
};
void CBaseToggle::vfunc133()
{
	CToggleView558 *t = (CToggleView558 *)this;
	m_i498 = m_nToggleState;
	switch (t->m_nMove558) {
	case 1:
		t->sub_101c1790();
		break;
	case 2:
		t->sub_101c19e0();
		break;
	}
	t->m_nMove558 = 0;
	if (m_pfn0114)
		(this->*m_pfn0114)();
}
// END FUNCTION

// FUNCTION: 0x101c1cb0 size=0xc9
#include "CBaseToggle.h"

#define SL1(n) virtual void s##n();
#define SL10(p) SL1(p##0) SL1(p##1) SL1(p##2) SL1(p##3) SL1(p##4) SL1(p##5) SL1(p##6) SL1(p##7) SL1(p##8) SL1(p##9)
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

class CToggleSlots221
{
public:
	SL100(0) SL100(1) SL10(20) SL10(21)
	virtual Vector *slot220();
	virtual Vector *slot221();
};

static inline void AssignVector(Vector &dst, const Vector &src)
{
	dst.x = src.x;
	dst.y = src.y;
	dst.z = src.z;
}

// TARGET: CBaseToggle::sub_101c1cb0
void CBaseToggle::sub_101c1cb0()
{
	vfunc93(8, 0);
	sub_100b3b00();
	CBaseEntity::vfunc103();
	AssignVector(m_vecPosition1, *((CToggleSlots221 *)this)->slot220());
	AssignVector(m_vecAngle1, *((CToggleSlots221 *)this)->slot221());
	AssignVector(m_vecAngle2, m_vecAngle1);
	((float *)&m_vecAngle2)[m_nMoveAxis] += m_flMoveAmount;
	m_i49c = m_i4a0;
	if (m_i4a0 == 1)
		m_i498 = 0;
	else if (m_i4a0 == 2)
		m_i498 = m_i4a0;
}
// END FUNCTION
