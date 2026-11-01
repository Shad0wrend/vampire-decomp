// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10108130 size=0xd0
#include "CFilterInventory.h"
#include "CBaseCombatCharacter.h"

struct HandleEntry_t
{
	CBaseEntity *m_pEnt;
	unsigned int m_nSerial;
	int pad;
};
struct HandleTable_t
{
	int pad;
	HandleEntry_t m_Entries[1];
};

#define GLOBAL_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define GLOBAL_SLOTS100(p) GLOBAL_SLOTS10(p##0) GLOBAL_SLOTS10(p##1) GLOBAL_SLOTS10(p##2) GLOBAL_SLOTS10(p##3) GLOBAL_SLOTS10(p##4) \
	GLOBAL_SLOTS10(p##5) GLOBAL_SLOTS10(p##6) GLOBAL_SLOTS10(p##7) GLOBAL_SLOTS10(p##8) GLOBAL_SLOTS10(p##9)

struct GlobalObj_t
{
	GLOBAL_SLOTS100(a)	// slots 0..99
	GLOBAL_SLOTS10(b)	// slots 100..109
	GLOBAL_SLOTS10(c)	// slots 110..119
	virtual int vfunc120();
};

extern HandleTable_t *g_10566458;
extern GlobalObj_t *g_1070b22c;
extern char g_106b8540[];

static inline void SetHandle(unsigned int *pHandle, CBaseEntity *pEnt)
{
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
}

bool CFilterInventory::vfunc241(CBaseEntity *pEnt)
{
	if (g_1070b22c->vfunc120() == m_nLastFrame) {
		CBaseEntity *pLast;
		unsigned int h = m_hLastEnt;
		if (h != 0xffffffff) {
			HandleEntry_t *e = &g_10566458->m_Entries[h & 0x1fff];
			if (e->m_nSerial == (h >> 13))
				pLast = e->m_pEnt;
			else
				pLast = 0;
		} else
			pLast = 0;
		if (pEnt == pLast)
			return m_bPasses;
	}
	CBaseCombatCharacter *pInv;
	if (pEnt && (pInv = *(CBaseCombatCharacter **)((char *)pEnt + 0x9c)) != 0)
		m_bPasses = pInv->sub_10335950(m_pszItemName ? m_pszItemName : g_106b8540) != 0;
	else
		m_bPasses = false;
	m_nLastFrame = g_1070b22c->vfunc120();
	SetHandle(&m_hLastEnt, pEnt);
	return m_bPasses;
}
// END FUNCTION

// FUNCTION: 0x10108240 size=0x6
#include "CFilterInventory.h"
namespace lifted {
extern char g_1056c580;
}
datamap_t *CFilterInventory::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c580;
}
// END FUNCTION

// FUNCTION: 0x101086c0 size=0x36
#include "CFilterInventory.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFilterInventory *CFilterInventory::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
