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
};
