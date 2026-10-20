// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// TARGET: CBaseToggle::vfunc103
void CBaseToggle::vfunc103()
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
