// CAI_NetworkManager: declared by pcdecomp transplant for 0x102f5060 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CAI_NetworkManager : public CBaseEntity
{
public:
	CAI_NetworkManager *vfunc5(unsigned int flags);
	void sub_100107a3();
	CAI_NetworkManager *sub_102f4fe0();	// as in CKeepUpright (transplant)
	virtual void vfunc103();	// slot 103: scope traced SetSolid(0) inlined, then slot 93(0, 0)
	void sub_102f5bd0();	// stub 0x1000fede: loads the node graph of the current map (called by InitializeAINetworks when the map has one)
};
