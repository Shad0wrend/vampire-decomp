// CNPC_Crow: crow NPC (base chain not modelled). Only what decompiled code needs.
#pragma once

class CNPC_Crow
{
public:
	// Slot 546.
	int vfunc546(int arg);
	CNPC_Crow *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_1000c9cd();	// as in CPhysForce (transplant)
	void sub_103580d0(int mode);	// "CNPC_Crow::SetFlightMode": mode 1 flies (removes flag 1, adds 0x400), any other mode lands (removes 0x400); then the movement helpers, move type 4 and sub_100b3b00()
	void sub_1027d9b0(int a);	// stub 0x10011e14 (0x1027d9b0 forwards to sub_102eeba0 of the object at +0x5d34), called directly
	void sub_1026dc30(int a);	// stub 0x1001005f, called directly
	void sub_1026dc00(int a);	// stub 0x10012855, called directly
};
