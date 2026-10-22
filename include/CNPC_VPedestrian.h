// CNPC_VPedestrian: declared by pcdecomp transplant for 0x103a1e40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VPedestrian : public CBaseEntity
{
public:
	CNPC_VPedestrian *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VPedestrian *sub_103a1d90();	// as in CKeepUpright (transplant)

	// Slot 301, declared as a plain member.
	void vfunc301(int a, int b);	// scope trace aside: stores the collision bounds (mins / maxs of the object at +0x270) at +0x6660 / +0x666c, runs CAI_BaseNPCTroika::vfunc301(a, b), clears the think function and makes the entity non-solid
	void sub_10293a60(int a, int b);	// CAI_BaseNPCTroika::vfunc301 (stub 0x10005c90), called directly

	// Slot 433, declared as a plain member.
	void vfunc433();	// slot 433 "CNPC_VPedestrian::...": sets the condition 0x24 and runs CAI_BaseNPCTroika::vfunc433; with the condition 0x2d set and the entity of the handle at +0x5b78 being the one of +0x6160 or +0x618c, takes that entity's character (+0x9c): once its active weapon's stat record has a value (+0x3c4) of at least the one at +0x634c, fills the record at +0x6360 from it (position = the character's slot 220 vector), asks the global at 0x10924a6c (slot 1) and clears the condition 0x1f
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly

	char m_pad03e0[0x5b78 - 0x3e0];
	unsigned int m_h5b78;	// 0x5b78: entity handle
	char m_pad5b7c[0x6160 - 0x5b7c];
	unsigned int m_h6160;	// 0x6160: entity handle
	char m_pad6164[0x618c - 0x6164];
	unsigned int m_h618c;	// 0x618c: entity handle
	char m_pad6190[0x634c - 0x6190];
	int m_n634c;	// 0x634c
	char m_pad6350[0x6660 - 0x6350];
	float m_vecMins6660[3];	// 0x6660
	float m_vecMaxs666c[3];	// 0x666c
};
