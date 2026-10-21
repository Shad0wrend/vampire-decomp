// CNPC_VTest: declared by pcdecomp transplant for 0x103b3b60 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VTest : public CBaseEntity
{
public:
	CNPC_VTest *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc104();	// slot 104 "CNPC_VTest::Precache": precaches the test NPC sounds, then CNPC_VHuman::vfunc104
	CNPC_VTest *sub_103b3ae0();	// as in CKeepUpright (transplant)
	int vfunc461();	// slot 461 "SelectIdealState" (plain member): state 2 without a slot 167 object warns "***Combat state with no enemy!" and goes to state 3, a pending condition 0x47 clears it and goes to state 0xb; state 0xb goes back to state 2 on condition 0x54 or 0x46, to state 1 when slot 462 holds; otherwise CNPC_VHuman::vfunc461
};
