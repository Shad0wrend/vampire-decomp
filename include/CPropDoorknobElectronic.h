// CPropDoorknobElectronic: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CPropDoorknobElectronic
{
public:
	char pad0[0x670];
	int m_unk670;

	void vfunc274();
	void vfunc275();	// slot 275: calls CItemContainerLock::vfunc275 (stub 0x1001469b), then clears +0x670
	CPropDoorknobElectronic *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
};
