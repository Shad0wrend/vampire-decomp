// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101079a0 size=0x6
#include "CFilterMultiple.h"
namespace lifted {
extern char g_1056c2dc;
}
CFilterMultiple::Datamap82 CFilterMultiple::vfunc82()
{
    return (CFilterMultiple::Datamap82)&lifted::g_1056c2dc;
}
// END FUNCTION

// FUNCTION: 0x10107a30 size=0x45
#include "CFilterMultiple.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;

void CFilterMultiple::vfunc113()
{
	for (int i = 0; i < 5; i++) {
		if (m_pszFilterName[i]) {
			CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszFilterName[i], 0, 0);
			if (pEnt)
				m_hFilter[i] = *pEnt->vfunc1();
			else
				m_hFilter[i] = (unsigned int)-1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10107aa0 size=0xbf
#include "CFilterMultiple.h"

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct FilterSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8) SL10(b9)
	SL10(c0) SL10(c1) SL10(c2) SL10(c3)
	virtual void d0();
	virtual bool PassesFilterImpl(CBaseEntity *pEntity);
};

struct FilterHandle
{
	unsigned int m_Index;
	FilterSlots *Get() const
	{
		if (m_Index != 0xffffffff) {
			HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
			if (e->serial == (m_Index >> 13))
				return (FilterSlots *)e->ent;
		}
		return 0;
	}
};

bool CFilterMultiple::sub_10107aa0(CBaseEntity *pEntity)
{
	if (m_nFilterType == 0) {
		for (int i = 0; i < 5; i++) {
			if (((FilterHandle *)&m_hFilter[i])->Get() != 0) {
				if (!((FilterHandle *)&m_hFilter[i])->Get()->PassesFilterImpl(pEntity))
					return false;
			}
		}
		return true;
	} else {
		for (int i = 0; i < 5; i++) {
			if (((FilterHandle *)&m_hFilter[i])->Get() != 0) {
				if (((FilterHandle *)&m_hFilter[i])->Get()->PassesFilterImpl(pEntity))
					return true;
			}
		}
		return false;
	}
}
// END FUNCTION

// FUNCTION: 0x10108580 size=0x36
#include "CFilterMultiple.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFilterMultiple *CFilterMultiple::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
