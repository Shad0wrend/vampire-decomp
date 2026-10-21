// CNPC_VCop: declared by pcdecomp transplant for 0x10370970 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VCop : public CBaseEntity
{
public:
	CNPC_VCop *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VCop *sub_103708e0();	// as in CKeepUpright (transplant)
	void vfunc442(int *pEvent);	// slot 442, animation event handler: event 0x107 calls CAI_BaseNPC::sub_10273e80(0), event 0x14a calls slot 598 with the entity of the handle at +0x628c, everything else goes to CNPC_VHumanCombatant::vfunc442
	void vfunc597(CBaseEntity *pTarget, int a);	// slot 597, declared as a plain member: when pTarget is the entity of the handle at +0x628c and the cop has no target handle (+0x6664) while its state (slot 464) is 2, remembers pTarget's controlling player (+0xa8) after telling it about the pursuit, then prints a debug text; then CAI_BaseNPCTroika::vfunc597(pTarget, a)

	char m_pad03e0[0x628c - 0x3e0];
	unsigned int m_h628c;	// 0x628c
};
