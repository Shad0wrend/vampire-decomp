// CNPC_VGuard1: declared by pcdecomp transplant for 0x1037c6a0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CEntityVSlots;

class CNPC_VGuard1 : public CBaseEntity
{
public:
	CNPC_VGuard1 *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VGuard1 *sub_1037c620();	// as in CKeepUpright (transplant)
	void vfunc463(int a, int b);	// slot 463 override: slot 167()'s object at +0xa8 set -> sub_1037e2d0(); on b == 1 calls slot 66 of sub_1032e7b0()'s object, on b == 2, 3 or 11 slot 67; then CNPC_VHuman::vfunc463(a, b)
	void sub_1037e2d0();	// stub 0x1000b73f, called directly
	CEntityVSlots *sub_1032e7b0();	// stub 0x10007e19, called directly: an entity (0 when none)
	void sub_10384720(int a, int b);	// CNPC_VHuman::vfunc463 (stub 0x10011234), called directly
	int vfunc438();	// slot 438 "SelectSchedule": clears the flag 2 at +0x14b8 (schedule 0xf1); in state 0xc with condition 0x1e and the entity of the handle at +0x628c it runs that entity's sub_1017e6f0(0) and answers schedule 0x6d, else it resets the state to 1; then CNPC_VHuman::vfunc438
	int sub_10015ad2();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called
	char sub_1001482b(int condition);	// CAI_BaseNPCTroika::sub_10269d30 (stub 0x1001482b), called directly
	void sub_1026e340(int newState);	// CAI_BaseNPC::SetState (stub 0x10002554), called directly

	char m_pad03e0[0x14b8 - 0x3e0];
	unsigned int m_flags14b8;	// +0x14b8
	char m_pad14bc[0x1b2c - 0x14bc];
	int m_n1b2c;	// +0x1b2c: schedule selection id
	char m_pad1b30[0x5cc0 - 0x1b30];
	int m_nState5cc0;	// +0x5cc0
	char m_pad5cc4[0x628c - 0x5cc4];
	unsigned int m_h628c;	// +0x628c: entity handle
};
