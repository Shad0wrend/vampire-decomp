// CNPC_VCop: declared by pcdecomp transplant for 0x10370970 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CNPC_VHumanCombatant.h"

struct CNPC_VCopPlayer	// the object behind +0xa8 of an entity (the controlling player)
{
	char sub_1017f8d0();	// stub 0x1000ae3e
	int sub_1017f770();	// stub 0x10007ee6
	void sub_1017e6f0(int a);	// stub 0x1000c838
};

struct CNPC_VCopTarget	// an entity as vfunc404 sees it
{
	char m_pad0000[0xa8];
	CNPC_VCopPlayer *m_pPlayer;	// 0xa8
};

class CNPC_VCop : public CNPC_VHumanCombatant
{
public:
	CNPC_VCop *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc103();	// slot 103: clears the target at +0x6668, calls CNPC_VHumanCombatant::vfunc103, counts the global 0x1093acac and sets the flags at +0x6671 / +0x6672
	CNPC_VCop *sub_103708e0();	// as in CKeepUpright (transplant)
	void vfunc442(int *pEvent);	// slot 442, animation event handler: event 0x107 calls CAI_BaseNPC::sub_10273e80(0), event 0x14a calls slot 598 with the entity of the handle at +0x628c, everything else goes to CNPC_VHumanCombatant::vfunc442
	void vfunc597(CBaseEntity *pTarget, int a);	// slot 597, declared as a plain member: when pTarget is the entity of the handle at +0x628c and the cop has no target handle (+0x6664) while its state (slot 464) is 2, remembers pTarget's controlling player (+0xa8) after telling it about the pursuit, then prints a debug text; then CAI_BaseNPCTroika::vfunc597(pTarget, a)
	int vfunc438();	// slot 438 "SelectSchedule": +0x1b2c = 0xc; state 0xc (+0x5cc0) with condition 0x1e and a live pursuit target (handle +0x628c) hands that target the call sub_1017e6f0(0) and returns 0x6d, else state 1; state 1 with the byte at +0x65f4 and no usable pursuit target (or none of +0x6590) takes schedule 0x16e / 0x170 (counting the global 0x1093acb0), everything else the base CNPC_VHumanCombatant::vfunc438
	char sub_10269d30(int condition);	// CAI_BaseNPC::HasCondition-like (stub 0x1001482b), called directly
	void sub_1026e340(int newState);	// CAI_BaseNPC::SetState (stub 0x10002554), called directly
	int vfunc404(CNPC_VCopTarget *pEnt);	// slot 404 "classification of pEnt": 1 for the entity of the global handle 0x1093ac3c while the time is before the global 0x1093aca8, and for entities whose player object answers sub_1017f8d0 / sub_1017f770 > 0, else CAI_BaseNPCTroika::vfunc404; 0 for no entity
	int sub_10299da0(CNPC_VCopTarget *pEnt);	// CAI_BaseNPCTroika::vfunc404 (stub 0x10001adc), called directly
	void vfunc598(CBaseEntity *pTarget);	// slot 598 (declared as a plain member): when pTarget is the entity of the handle at +0x628c: forgets it (relationship 4, no target at +0x6668, no enemy / no look target when they are pTarget), registers a "Player D_NU 10" note with the entity registry (slot 541); else CAI_BaseNPCTroika::vfunc598
	void sub_10273790(const char *pszText, int a);	// CAI_BaseNPC member (stub 0x1000421e): prints / records a debug note
	int vfunc440(int arg);	// slot 440: maps a few activity / event ids to this cop's own ones (flag 0x80000 of +0x14bc picks one of two for 0x6b), else CNPC_VHumanCombatant::vfunc440
	void vfunc180();	// slot 180: clears the two per-NPC counter flags at +0x6671 / +0x6672 (decrementing the globals 0x1093acac / 0x1093acb0 for each one that was set), then CAI_BaseNPCTroika::vfunc180

	char m_pad03e0[0x14bc - 0x3e0];
	unsigned int m_flags14bc;	// 0x14bc
	char m_pad14c0[0x1b2c - 0x14c0];
	int m_n1b2c;	// 0x1b2c
	const char *m_pszFile1b30;	// 0x1b30: source file of the last schedule pick
	int m_nLine1b34;	// 0x1b34: its line
	char m_pad1b38[0x5cc0 - 0x1b38];
	int m_n5cc0;	// 0x5cc0: the NPC state
	char m_pad5cc4[0x628c - 0x5cc4];
	unsigned int m_h628c;	// 0x628c
	char m_pad6290[0x6590 - 0x6290];
	void *m_p6590;	// 0x6590
	char m_pad6594[0x65f4 - 0x6594];
	char m_b65f4;	// 0x65f4
	char m_pad65f5[0x6668 - 0x65f5];
	unsigned int m_d6668;	// 0x6668
	char m_pad666c[0x6671 - 0x666c];
	char m_b6671;	// 0x6671
	char m_b6672;	// 0x6672
public:
    virtual datamap_t * vfunc82();
};
