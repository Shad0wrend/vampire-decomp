// CStealthModifier: the stealth modifier trigger (through CBaseTrigger). Its own field at 0x598 is the end of the object.
#pragma once

#include "CBaseTrigger.h"

class CStealthModifier : public CBaseTrigger
{
public:
	void vfunc176(CBaseEntity *pOther);	// slot 176: CBaseTrigger::vfunc176, then the pOther's object at +0x9c gets this->m_i598
	int m_i598;	// 0x598
public:
    virtual datamap_t * vfunc82();
};
