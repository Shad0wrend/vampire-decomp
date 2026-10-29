// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10210c50 size=0x6
#include "CTriggerDisciplineContext.h"
namespace lifted {
extern char g_105ab72c;
}
datamap_t * CTriggerDisciplineContext::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab72c);
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
