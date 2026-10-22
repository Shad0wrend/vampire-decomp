// CNPC_VHunter: declared by pcdecomp transplant for 0x103880a0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VHunter : public CBaseEntity
{
public:
	CNPC_VHunter *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VHunter *sub_10388010();	// as in CKeepUpright (transplant)
	int vfunc404(CBaseEntity *pEnt);	// slot 404: 1 for the entity of the handle at g_1093b650 while the global time is before g_1093b658, else the Troika base
	int sub_10299da0(CBaseEntity *pEnt);	// CAI_BaseNPCTroika::vfunc404, called directly
	void vfunc463(int nOld, int nNew);	// slot 463 (state change): entering state 2 takes the hold on the enemy's character (sub_10388c40, sub_1017f7b0, handle at +0x6664), leaving it drops the hold (sub_1017f830); states 1 / 2 / 3 / 0xb tell the object of sub_1032e7b0 slot 66 / 67; then CNPC_VHumanCombatant::vfunc463
	void sub_10388c40();	// stub 0x1000a6ff
	void sub_1032e7b0();	// placeholder: see the free function sub_1032e7b0 (stub 0x10007e19)

	char m_pad03e0[0x6664 - 0x3e0];
	unsigned int m_hHold6664;	// 0x6664: entity handle of the enemy character the hunter holds
};
