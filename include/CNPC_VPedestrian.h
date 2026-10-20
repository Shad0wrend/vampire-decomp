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

	char m_pad0004[0x6660 - 4];
	float m_vecMins6660[3];	// 0x6660
	float m_vecMaxs666c[3];	// 0x666c
};
