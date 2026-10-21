// CTriggerCheckVolume: a trigger that fires m_OnTrigger for every entity passing the trigger filters inside its volume.
#pragma once

#include "CBaseTrigger.h"

class CTriggerCheckVolume : public CBaseTrigger
{
public:
	virtual void vfunc251();	// slot 251: unless disabled, collects the entities inside the world-space bounds of the collision property and fires the output at +0x598 (activator = the entity, caller = this) for each one that passes sub_101c5460

	COutputEvent m_out598;
};
