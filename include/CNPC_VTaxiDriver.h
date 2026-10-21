// CNPC_VTaxiDriver: declared by pcdecomp transplant for 0x103b3970 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VTaxiDriver
{
public:
	CNPC_VTaxiDriver *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc442(const int *pTask);	// StartTask: switch on the task id: the listed ids complete the task (sub_1000ac68(0)), 0xb9 asks sub_100125bc and completes or sets the activity 0x114e (slot 310), others go to CNPC_VHuman::vfunc442
	void sub_1000ac68(int a);	// task completion (stub 0x1000ac68), called directly
	int sub_100125bc();	// stub 0x100125bc: returns an index or -1
};
