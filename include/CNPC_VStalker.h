// CNPC_VStalker: declared by pcdecomp transplant for 0x103b28f0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VStalker : public CBaseEntity
{
public:
	CNPC_VStalker *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VStalker *sub_103b2870();	// as in CKeepUpright (transplant)
};
