// CNPC_VPedestrian: declared by pcdecomp transplant for 0x103a1e40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VPedestrian : public CBaseEntity
{
public:
	CNPC_VPedestrian *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VPedestrian *sub_103a1d90();	// as in CKeepUpright (transplant)
};
