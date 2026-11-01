// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10108360 size=0xfa
#include "CFilterFeat.h"
#include "CUnknown101e56e0.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);

inline const char *OrEmpty(const char *p)
{
	return p ? p : g_106b8540;
}

inline int FindFeatId(const char *pszName)
{
	for (int i = 0; i < g_10739d20; i++) {
		if (_strcmpi(Records()[i]->Get(), pszName) == 0)
			return Records()[i]->m_id;
	}
	return -1;
}

bool CFilterFeat::vfunc241(CBaseEntity *pEntity)
{
	CBaseCombatCharacter *pChar = pEntity ? *(CBaseCombatCharacter **)((char *)pEntity + 0x9c) : 0;
	if (!pChar)
		return false;
	int id = FindFeatId(OrEmpty(m_pszFeat));
	if (id == -1)
		return false;
	return CUnknown101e56e0Table::Find(id)->sub_101e56e0(pChar) >= m_nMinCost;
}
// END FUNCTION

// FUNCTION: 0x101084a0 size=0x6
#include "CFilterFeat.h"
namespace lifted {
extern char g_1056c5f0;
}
datamap_t *CFilterFeat::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c5f0;
}
// END FUNCTION

// FUNCTION: 0x10108710 size=0x36
#include "CFilterFeat.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFilterFeat *CFilterFeat::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
