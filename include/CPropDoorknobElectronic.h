// CPropDoorknobElectronic: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CPropDoorknobElectronic
{
public:
	char pad0[0x670];
	int m_unk670;
	char pad674[0x815 - 0x674];
	char m_b815;

	void vfunc103();	// slot 103 (plain member): CPropDoorknob::vfunc103 (the Spawn), then the byte at +0x815 is set and the state at +0x670 is 0 when sub_10224100 holds, else the value of edx (1) is stored there
	char sub_10224100();	// stub 0x10001d2f, called directly by vfunc103
	void vfunc274();
	void vfunc275();	// slot 275: calls CItemContainerLock::vfunc275 (stub 0x1001469b), then clears +0x670
	CPropDoorknobElectronic *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
};
