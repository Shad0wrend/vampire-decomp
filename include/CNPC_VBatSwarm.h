// CNPC_VBatSwarm: declared by pcdecomp transplant for 0x10366cb0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VBatSwarm : public CBaseEntity
{
public:
	CNPC_VBatSwarm *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg); // as in CNPC_Crow (transplant)
	int vfunc609(int arg); // slot 609: when the state at +0x5cc0 is 4 or 12 it tail-calls CAI_BaseNPCTroika::vfunc609 (stub 0x100075ae) with the same argument; else clears +0x6444 and answers 0
	CNPC_VBatSwarm *sub_10366c30(); // as in CKeepUpright (transplant)
};
