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
};
