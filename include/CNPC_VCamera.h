// CNPC_VCamera: camera NPC. Declared standalone: only the members the decompiled code needs
// are named, and the vtable slots are not modelled (the position of the virtual below is not its real slot, 461).
#pragma once

class CNPC_VCamera
{
public:
	virtual int vfunc461();

	char pad0004[0x17c - 4];
	float m_flNextThink;	// 0x17c
	char pad0180[0x14bc - 0x180];
	unsigned int m_flags14bc;
	char pad14c0[0x1568 - 0x14c0];
	int m_n1568;	// 0x1568
	char pad156c[0x1b2c - 0x156c];
	int m_n1b2c;
	char pad1b30[0x1b38 - 0x1b30];
	int m_n1b38;
	const char *m_p1b3c;
	int m_n1b40;
	char pad1b44[0x5b55 - 0x1b44];
	char m_b5b55;	// 0x5b55: one-shot flag (cleared by the think)
	char pad5b56[0x5bb0 - 0x5b56];
	int m_n5bb0;
	char pad5bb4[0x5cc4 - 0x5bb4];
	int m_n5cc4;
	char pad5cc8[0x5da4 - 0x5cc8];
	void *m_p5da4;
	void *m_p5da8;
	char pad5dac[0x6244 - 0x5dac];
	float m_flCur6244[4];	// 0x6244: four timestamps
	float m_flPrev6254[4];	// 0x6254: the previous four
	char pad6264[0x62dc - 0x6264];
	int m_n62dc;	// 0x62dc

	int sub_10368f20();
	CNPC_VCamera *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc438();	// as in CNPC_VCamera (transplant)
	int vfunc545();	// slot 545 (0x884)
	int vfunc460();	// slot 460 "SelectIdealState": with no pending count (+0x5bb0) and a squad (+0x5da4) that has condition 0x54 or the flag 0x2000, clears flag bits 0x80002000 and tells the squad about the enemy (slot 167); records the source line and returns the ideal state 3
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
	void vfunc431();	// slot 431 "NPCThink" (plain member): clears the one-shot byte (+0x5b55, sub_1027efb0), and unless sub_1029f2e0() holds runs sub_1026a0f0(); when sub_1026c3d0() holds it runs slot 432(0), keeps the four timestamps at +0x6244 as the previous ones and stamps them and the next think with curtime + 0.2, else (without the global flag 0x1093408c) schedules the next think 0.1 seconds ahead
	void sub_1027efb0();	// stub 0x10007829, called directly
	char sub_1029f2e0();	// stub 0x1000347c, called directly
	void sub_1026a0f0();	// CAI_BaseNPCUnit::sub_1026a0f0 (stub 0x100056fa), called directly
	char sub_1026c3d0();	// stub 0x100155d7, called directly
	void vfunc104();	// slot 104 "CNPC_VCamera::Spawn"-like (plain member): an empty model name becomes models/null.mdl, the model is precached and its index set, the NPC is removed again (Msg) when slot 452 refuses it; else, with the node graph ready, checks that the hull bits (slot 337) the NPC uses were initialized (DevMsg block otherwise), or registers them when it is not
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd), called directly
public:
	virtual void vfunc488();
public:
	virtual void vfunc434();
	virtual void vfunc489();
	virtual void vfunc490();
	virtual void vfunc491();
	virtual void vfunc492();
	virtual void vfunc493();
	virtual void vfunc494();
	virtual void vfunc495();
	virtual void vfunc496();
	virtual void vfunc497();
	virtual void vfunc498();
	virtual void vfunc499();
	virtual void vfunc500();
	virtual void vfunc501();
	virtual void vfunc502();
	virtual void vfunc503();
	virtual void vfunc504();
	virtual void vfunc505();
	virtual void vfunc506();
	virtual void vfunc507();
public:
	virtual int vfunc138();
	virtual void vfunc259(int);
	virtual void vfunc463(int, int);
	virtual int vfunc473();
	virtual void vfunc508(int);
	virtual bool vfunc509();
	virtual bool vfunc510();
	virtual void vfunc563(int, int, int, int);
	virtual bool vfunc564();
};
