// CNPC_VHunter: declared by pcdecomp transplant for 0x103880a0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CNPC_VHumanCombatant.h"

#define HNV(n) virtual void v##n();
#define HNV10(p) HNV(p##0) HNV(p##1) HNV(p##2) HNV(p##3) HNV(p##4) HNV(p##5) HNV(p##6) HNV(p##7) HNV(p##8) HNV(p##9)

struct CHunterMate	// the active weapon object (CNPC_VHumanCombatant::sub_1032e7b0) as the hunter calls it: only slots 66 / 67
{
	HNV(0) HNV(1) HNV(2) HNV(3) HNV(4) HNV(5) HNV(6) HNV(7) HNV(8) HNV(9)
	HNV10(1) HNV10(2) HNV10(3) HNV10(4) HNV10(5)
	HNV(60) HNV(61) HNV(62) HNV(63) HNV(64) HNV(65)
	virtual void vfunc66();
	virtual void vfunc67();
};

class CNPC_VHunter : public CNPC_VHumanCombatant
{
public:
	CNPC_VHunter *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VHunter *sub_10388010();	// as in CKeepUpright (transplant)
	int vfunc404(CBaseEntity *pEnt);	// slot 404: 1 for the entity of the handle at g_1093b650 while the global time is before g_1093b658, else the Troika base
	int sub_10299da0(CBaseEntity *pEnt);	// CAI_BaseNPCTroika::vfunc404, called directly
	int vfunc440(int arg);	// slot 440: 0x6b gives 0x132 or 0x15b by bit 0x80000 of +0x14bc, 0x103 gives 0x15a, else CNPC_VHumanCombatant::vfunc440
	void vfunc463(int nOld, int nNew);	// slot 463 (state change): entering state 2 takes the hold on the enemy's character (sub_10388c40, sub_1017f7b0, handle at +0x6664), leaving it drops the hold (sub_1017f830); states 1 / 2 / 3 / 0xb tell the active weapon slot 66 / 67; then CNPC_VHumanCombatant::vfunc463
	void sub_10388c40();	// stub 0x1000a6ff
	void sub_103871c0(int nOld, int nNew);	// CNPC_VHumanCombatant::vfunc463 (stub 0x10014a10), called directly

	char m_pad03e0[0x6664 - 0x3e0];
	unsigned int m_hHold6664;	// 0x6664: entity handle of the enemy character the hunter holds
};
