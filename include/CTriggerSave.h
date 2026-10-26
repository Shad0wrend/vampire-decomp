// CTriggerSave (RTTI .?AVCTriggerSave@@): trigger_save, only the members that recovered code needs.
#pragma once

#include "CBaseTrigger.h"

class CTriggerSave : public CBaseTrigger
{
public:
	void vfunc103();	// slot 103 (0x101c97d0): when the global object at 0x1070ba0c answers slot 22 with true, sub_10014614(this); else the member 0x1000dfd0 on this
	void vfunc175(CBaseEntity *pOther);	// slot 175 (0x10006735): own, not decoded yet
};
