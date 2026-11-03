// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10210c50 size=0x6
#include "datamap.h"
#include "CTriggerDisciplineContext.h"
namespace lifted {
extern char g_105ab72c;
}
datamap_t * CTriggerDisciplineContext::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab72c);
}
// END FUNCTION

// FUNCTION: 0x10210ce0 size=0x3c
#include "CTriggerDisciplineContext.h"
// TARGET: CTriggerDisciplineContext::CTriggerDisciplineContext
CTriggerDisciplineContext::CTriggerDisciplineContext()
{
	m_nDiscipline598 = 0;
}
// END FUNCTION

// FUNCTION: 0x10210d30 size=0x4c
#include "CTriggerDisciplineContext.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerDisciplineContext::vfunc5
void *CTriggerDisciplineContext::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10210da0 size=0x10
#include "CTriggerDisciplineContext.h"

// TARGET: CTriggerDisciplineContext::vfunc103
void CTriggerDisciplineContext::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x10210dc0 size=0x4c
#include "CTriggerDisciplineContext.h"
struct CDisciplineChar { char pad[0xeac]; unsigned int m_nDisciplineFlags; };
void CTriggerDisciplineContext::vfunc174(CBaseEntity *pEnt)
{
    if (!m_bDisabled55c && m_nDiscipline598 >= 0 && pEnt) {
        CDisciplineChar *pChar = (CDisciplineChar *)pEnt->m_p9c;
        if (pChar)
            pChar->m_nDisciplineFlags |= 1 << m_nDiscipline598;
    }
    sub_101c5590(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10210e30 size=0x3
// TARGET: sub_10210e30
void __stdcall sub_10210e30(int a) {
}
// END FUNCTION

// FUNCTION: 0x10210e50 size=0x44
#include "CTriggerDisciplineContext.h"
struct SDiscView598 { char pad[0x598]; int m598; };
struct SDiscChar { char pad[0xeac]; unsigned int m_flagsEac; };
void CTriggerDisciplineContext::vfunc176(CBaseEntity *pEnt)
{
	int bit = ((SDiscView598 *)this)->m598;
	if (bit >= 0 && pEnt) {
		SDiscChar *p = (SDiscChar *)pEnt->m_p9c;
		if (p)
			p->m_flagsEac &= ~(1 << bit);
	}
	sub_101c55d0(pEnt);
}
// END FUNCTION
