// CTriggerDisciplineContext: declared by pcdecomp transplant for 0x10210be0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CTriggerDisciplineContext : public CBaseEntity
{
public:
	CTriggerDisciplineContext *sub_10210ce0();
	void vfunc176(CBaseEntity *pEnt);	// slot 176 (EndTouch): drops this trigger's discipline bit (index at +0x598) from the flag word at +0xeac of the object at pEnt+0x9c, then CBaseTrigger::vfunc176
	void sub_101c55d0(CBaseEntity *pEnt);	// CBaseTrigger::vfunc176 (stub 0x1001346c), called directly
	void sub_101c5590(CBaseEntity *pEnt);	// CBaseTrigger::vfunc174 (stub 0x10008ef4), called directly
public:
    virtual datamap_t * vfunc82();
};
