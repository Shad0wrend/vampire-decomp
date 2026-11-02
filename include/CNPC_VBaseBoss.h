// CNPC_VBaseBoss: base of the boss NPCs. Only the slots that decompiled code needs are declared
// (standalone: the slot position of the virtual below is not its real slot, 420).
#pragma once

class CNPC_VBaseBoss
{
public:
	virtual void vfunc420();

	CNPC_VBaseBoss *vfunc5(unsigned int flags);	// slot 5 (scalar deleting destructor, plain member): the record vector at +0x665c goes, then the Troika base's destructor body (stub 0x100123af), then the delete when bit 0 of flags is set
	void sub_1028d610();	// CAI_BaseNPCTroika destructor body (stub 0x100123af), called directly
	virtual bool vfunc587(int a);	// slot 587
};
