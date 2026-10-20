// CNPC_VAnimal: declared by pcdecomp transplant for 0x1035ec50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VAnimal : public CBaseEntity
{
public:
	CNPC_VAnimal *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VAnimal *sub_1035eba0();	// as in CKeepUpright (transplant)
	void vfunc432(int a);	// slot 432 implementation (stub 0x10014f92), called by the CNPC_VDog override
};
