// CNPC_VRat: declared by pcdecomp transplant for 0x103ad930 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VRat
{
public:
	CNPC_VRat *vfunc5(unsigned int flags);
	void vfunc103();	// slot 103: the scurry base implementation after picking the global's address
	char m_pad0000[0x10e4];
	void *m_p10e4;	// 0x10e4
	void sub_100123af();
public:
	int vfunc138();
	bool vfunc294(int);
	bool vfunc295(int);
	void vfunc316(int, int, int);
	bool vfunc317(int);
	bool vfunc318(int, int, int);
	bool vfunc319(int, int, int);
	bool vfunc320(int, int);
	void vfunc330(int, int);
	void vfunc333(int);
	bool vfunc590();
	bool vfunc615();
	int vfunc370(int a);	// as in CNPCMaker (transplant)
	int vfunc371(int a);	// as in CNPCMaker (transplant)
};
