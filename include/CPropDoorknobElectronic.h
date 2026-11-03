// CPropDoorknobElectronic: only the members that decompiled code needs are declared.
// The base is CPropDoorknob (whose declared part ends where the padding starts).
#pragma once

#include "CBaseEntity.h"
#include "CPropDoorknob.h"

class CPropDoorknobElectronic : public CPropDoorknob
{
public:
	char pad0[0x670 - sizeof(CPropDoorknob)];
	int m_unk670;
	char pad674[0x815 - 0x674];
	char m_b815;
	char pad816[0x818 - 0x816];
	int m_n818;
	int m_n81c;
	int m_n820;

	CPropDoorknobElectronic();	// 0x10226200: CPropDoorknob's constructor body (sub_102258a0), then the vftable and the three dwords at +0x818 / +0x81c / +0x820
	void vfunc103();	// slot 103: CPropDoorknob::vfunc103 (the Spawn), then the byte at +0x815 is set and the state at +0x670 is 0 when sub_10224100 holds, else the value of edx (1) is stored there
	char sub_10224100();	// stub 0x10001d2f, called directly by vfunc103
	void vfunc274();
	void vfunc275();	// slot 275: calls CItemContainerLock::vfunc275 (stub 0x1001469b), then clears +0x670
	CPropDoorknobElectronic *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	CPropDoorknobElectronic *sub_10226200();	// as in CSecCamera (transplant)
	void vfunc276();	// as in CAI_Hint (transplant)
	unsigned char sub_10226240();	// slot 117 body: CItemContainerLock::vfunc117 & 0xfd
	void sub_102241b0();	// as in CAI_Hint (transplant)
};
