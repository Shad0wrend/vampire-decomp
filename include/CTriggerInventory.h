// CTriggerInventory: a trigger that fires its outputs for entities that hold (or can be given) a named item.
// Only what matched code needs.
#pragma once

#include "CBaseTrigger.h"

class CTriggerInventory : public CBaseTrigger
{
public:
	void vfunc174(CBaseEntity *pOther);	// slot 174 (StartTouch): fires the output at +0x568 when the entity passes the trigger filters, then, for an entity with a character object (+0xa8) that already holds the item named at +0x598 (or can take it, sub_10178470 >= 0), fires the output at +0x59c

	const char *m_pszItem;	// 0x598: classname of the item
	COutputEvent m_out59c;	// 0x59c
	virtual CBaseEntity *vfunc5(unsigned int flags);	// slot 5: scalar deleting destructor (output events at +0x4a4 / +0x4bc / +0x568 / +0x580 / +0x59c, then 0x1009df20)
public:
    virtual datamap_t * vfunc82();
    void sub_101c5080();	// as in CTriggerPlayerActivityLevel (transplant)
    void vfunc103();	// as in CTriggerPlayerActivityLevel (transplant)
};
