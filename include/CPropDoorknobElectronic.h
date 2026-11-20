// CPropDoorknobElectronic : CPropDoorknob (the game's RTTI; vtable 0x1048cdd4, 277 slots; prop_doorknob_electronic
// allocates 0x824: no data of its own). Its own slots: 5, 103, 117, 274, 275, 276. The state it keeps at +0x670
// lies in CBaseAnimating's region (read through a cast).
#pragma once

#include "CBaseEntity.h"
#include "CPropDoorknob.h"

class CPropDoorknobElectronic : public CPropDoorknob
{
public:
	CPropDoorknobElectronic();	// 0x10226200: CPropDoorknob's constructor body (sub_102258a0), then the vftable and the three dwords at +0x818 / +0x81c / +0x820
	virtual void vfunc103();	// slot 103: CPropDoorknob::vfunc103 (the Spawn), then the byte at +0x815 is set and the state at +0x670 is 0 when sub_10224100 holds, else the value of edx (1) is stored there
	char sub_10224100();	// stub 0x10001d2f, called directly by vfunc103
	virtual void vfunc274();	// slot 274 (0x10226340): +0x670 = 1
	virtual void vfunc275();	// slot 275: calls CItemContainerLock::vfunc275 (stub 0x1001469b), then clears +0x670
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	CPropDoorknobElectronic *sub_10226200();	// as in CSecCamera (transplant)
	virtual void vfunc276();	// slot 276 (0x10226380): sub_102241b0, then +0x670 = 1
	virtual int vfunc117();	// slot 117 (0x10226240): CItemContainerLock::vfunc117 & ~2
	void sub_102241b0();	// as in CAI_Hint (transplant)
};
