// CTriggerSave (RTTI .?AVCTriggerSave@@): trigger_save, only the members that recovered code needs.
#pragma once

#include "CBaseTrigger.h"

class CTriggerSave : public CBaseTrigger
{
public:
	void vfunc103();	// slot 103 (0x101c97d0): when the global object at 0x1070ba0c answers slot 22 with true, sub_10014614(this); else the member 0x1000dfd0 on this
	virtual void vfunc175(CBaseEntity *pOther);	// slot 175 (0x101c9810): when pOther has a player object (+0xa8), sub_10014614(this) and the "autosave" server command
	void sub_1000dfd0();	// the member 0x1000dfd0 (a jump stub), called at the end of vfunc103
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};
