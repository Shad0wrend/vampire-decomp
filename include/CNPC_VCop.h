// CNPC_VCop: declared by pcdecomp transplant for 0x10370970 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct CNPC_VCopPlayer	// the object behind +0xa8 of an entity (the controlling player)
{
	char sub_1017f8d0();	// stub 0x1000ae3e
	int sub_1017f770();	// stub 0x10007ee6
};

struct CNPC_VCopTarget	// an entity as vfunc404 sees it
{
	char m_pad0000[0xa8];
	CNPC_VCopPlayer *m_pPlayer;	// 0xa8
};

class CNPC_VCop : public CBaseEntity
{
public:
	CNPC_VCop *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VCop *sub_103708e0();	// as in CKeepUpright (transplant)
	void vfunc442(int *pEvent);	// slot 442, animation event handler: event 0x107 calls CAI_BaseNPC::sub_10273e80(0), event 0x14a calls slot 598 with the entity of the handle at +0x628c, everything else goes to CNPC_VHumanCombatant::vfunc442
	void vfunc597(CBaseEntity *pTarget, int a);	// slot 597, declared as a plain member: when pTarget is the entity of the handle at +0x628c and the cop has no target handle (+0x6664) while its state (slot 464) is 2, remembers pTarget's controlling player (+0xa8) after telling it about the pursuit, then prints a debug text; then CAI_BaseNPCTroika::vfunc597(pTarget, a)
	int vfunc404(CNPC_VCopTarget *pEnt);	// slot 404 "classification of pEnt": 1 for the entity of the global handle 0x1093ac3c while the time is before the global 0x1093aca8, and for entities whose player object answers sub_1017f8d0 / sub_1017f770 > 0, else CAI_BaseNPCTroika::vfunc404; 0 for no entity
	int sub_10299da0(CNPC_VCopTarget *pEnt);	// CAI_BaseNPCTroika::vfunc404 (stub 0x10001adc), called directly
	void vfunc598(CBaseEntity *pTarget);	// slot 598 (declared as a plain member): when pTarget is the entity of the handle at +0x628c: forgets it (relationship 4, no target at +0x6668, no enemy / no look target when they are pTarget), registers a "Player D_NU 10" note with the entity registry (slot 541); else CAI_BaseNPCTroika::vfunc598
	void sub_10273790(const char *pszText, int a);	// CAI_BaseNPC member (stub 0x1000421e): prints / records a debug note

	char m_pad03e0[0x628c - 0x3e0];
	unsigned int m_h628c;	// 0x628c
};
