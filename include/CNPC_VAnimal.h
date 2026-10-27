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
	virtual void vfunc259(int *pEvent);	// slot 259: the base event handler (0x1035f5a0), called by CNPC_VDog::vfunc259 for every event but 0xbb9
	virtual void vfunc432(int a);	// slot 432 implementation (stub 0x10014f92), called by the CNPC_VDog override
	int vfunc438();	// slot 438 "SelectSchedule" (plain member): stamps +0x1b2c = 5; bit 1 of the flags at +0x14b8 -> clear it, schedule 0x15d; state 1 (+0x5cc0): the schedule of the object at +0x6590, else for the byte +0x63d9 schedule 0x156 / 0x157 by the navigation type; state 3: the Troika schedule picks; else CAI_BaseNPCTroika::vfunc438
	void sub_1035f940(int *pTask);	// slot 444 implementation (stub 0x10015235): the task handler of the animal NPCs, called directly by the zombie
	void sub_1035f650(int *pTask);	// slot 442 implementation (stub 0x10009b06): the task start handler of the animal NPCs, called directly by the dog
	int vfunc440(int activity);	// slot 440 (the base implementation, stub 0x10012283, 0x1035fe60): tail called by CNPC_VDog::vfunc440
	void vfunc103();	// slot 103 (stub 0x100117ca): the base implementation, called by CNPC_VScurrying::vfunc103
	int vfunc482(char bDisregardState, int interruptLevel);	// slot 482 (CanPlaySequence-like), same as CNPC_VHuman::vfunc482
};
