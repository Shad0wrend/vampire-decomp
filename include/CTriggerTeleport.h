// CTriggerTeleport: declared by pcdecomp transplant for 0x101c90e0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CTriggerTeleport : public CBaseEntity
{
public:
	CTriggerTeleport *sub_101c91e0();
public:
    virtual datamap_t * vfunc82();
    void *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};
