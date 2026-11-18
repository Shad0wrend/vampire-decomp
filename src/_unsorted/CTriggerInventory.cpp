// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10216bc0 size=0x6
#include "datamap.h"
#include "CTriggerInventory.h"
namespace lifted {
extern char g_105ac944;
}
datamap_t * CTriggerInventory::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ac944);
}
// END FUNCTION

// FUNCTION: 0x10216d40 size=0x10
#include "CTriggerInventory.h"

// TARGET: CTriggerInventory::vfunc103
void CTriggerInventory::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x10216d60 size=0x77
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CTriggerInventory.h"
#include "CBaseCombatCharacter.h"

struct CCharItemUnit : CBaseCombatCharacter {
	int sub_10178470(const char *name);
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CTriggerInventory::vfunc174(CBaseEntity *pOther)
{
	if (sub_101c5460(pOther))
		m_out568.sub_100cd660(pOther, this, 0);
	CCharItemUnit *pChar = (CCharItemUnit *)pOther->m_pA8;
	if (pChar) {
		if (pChar->sub_10335950(STRINGR(m_pszItem)))
			m_out59c.sub_100cd660(pOther, this, 0);
		else if (pChar->sub_10178470(STRINGR(m_pszItem)) >= 0)
			m_out59c.sub_100cd660(pOther, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10217000 size=0x57
#include "CTriggerInventory.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

CBaseEntity *CTriggerInventory::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x59c))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x580))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x568))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4bc))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4a4))->sub_100cd2d0();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION
