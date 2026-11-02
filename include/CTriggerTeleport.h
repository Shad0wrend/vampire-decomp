// CTriggerTeleport: declared by pcdecomp transplant for 0x101c90e0 from CKeepUpright (0x10029200);
// CBaseTrigger -> CBaseToggle -> CBaseEntity (RTTI), only what matched code needs, as plain members.
#pragma once
#include "CBaseTrigger.h"

class CTriggerTeleport : public CBaseTrigger
{
public:
	CTriggerTeleport();	// 0x101c91e0: same shape as CTriggerDisciplineContext's constructor (CBaseTrigger inlined, the vftable, no members of its own)
	CTriggerTeleport *sub_101c91e0();
public:
    virtual datamap_t * vfunc82();
    void *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};
