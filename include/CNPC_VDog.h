// CNPC_VDog: declared by pcdecomp transplant for 0x10373570 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CNPC_VAnimal.h"

class CNPC_VDog : public CNPC_VAnimal
{
public:
	CNPC_VDog *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VDog *sub_103734f0();	// as in CKeepUpright (transplant)
	void vfunc432(int a);	// slot 432: for a few activities (+0xfec) asks slot 310 for state 1 or 3 (sometimes at random), then CNPC_VAnimal::vfunc432(a)
};
