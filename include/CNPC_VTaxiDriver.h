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
	void vfunc420();	// slot 420 (reset): the base version, clears the byte at +0x6660, stamps the source file / line 0xa6 at +0x1b3c / +0x1b40, state +0x5cc4 = 1, sub_10002554(1), then raises the flag byte at +0x80 of the object at +0x5cdc
	void sub_1000c531();	// CAI_BaseNPC::vfunc420 (stub 0x1000c531), called directly
	void sub_10002554(int a);	// CAI_BaseNPC::sub_1026e340 (stub 0x10002554), called directly

	char m_pad0004[0x1b3c - 4];
	const char *m_pszFile1b3c;	// 0x1b3c
	int m_nLine1b40;	// 0x1b40
	char m_pad1b44[0x5cc4 - 0x1b44];
	int m_n5cc4;	// 0x5cc4
	char m_pad5cc8[0x5cdc - 0x5cc8];
	char *m_p5cdc;	// 0x5cdc: an object with a flag byte at +0x80
	char m_pad5ce0[0x6660 - 0x5ce0];
	char m_b6660;	// 0x6660
};
