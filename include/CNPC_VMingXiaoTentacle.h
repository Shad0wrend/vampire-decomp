// CNPC_VMingXiaoTentacle: tentacle NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CNPC_VMingXiaoTentacle
{
public:
	virtual int vfunc437();
	CNPC_VMingXiaoTentacle *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void *vfunc408(int condition);	// slot 408 override: the address of the state's data for the conditions 0x77 / 0x78 / 0x79 (0x1064a42c / 0x1064a430 / 0x1064a434), else the base's slot 408 (sub_1027ede0, tail call)
	void *sub_1027ede0(int condition);	// CAI_BaseNPC::vfunc408 (stub 0x10011590), called directly
	int vfunc461();	// "CNPC_VMingXiaoTentacle::SelectIdealState": picks the ideal state (1, 2 or 7) and its schedule from slot 167
	void sub_1039ef90(float *pPos);	// called through the stub at 0x1000d1f2: scope work, then copies the three floats of pPos to +0x668c
	void vfunc104();	// "CNPC_VMingXiaoTentacle::Precache": default model when none is set, base Precache, then the baby / transformation models (handles at +0x6664..+0x666c), three particle emitters and two sounds
	void vfunc103();	// "CNPC_VMingXiaoTentacle::Spawn": solid flags 0x4000000 / 0x200000, the base spawn, 0x80000 flag, clears the tentacle state, arms the timer at +0x6684 (curtime + const), removes flag2 4
	void vfunc390(int a);	// slot 390 (OnTakeDamage-like) override: clears the field at +0x6680, records the source file / line (0x549) at +0x1b30 / +0x1b34, the Troika schedule 0x168 (sub_102ae750), then CAI_BaseNPCTroika::vfunc390(a)
	void vfunc433();	// "CNPC_VMingXiaoTentacle::RunAI"-like: sets the conditions 0x77 and 0x79, the Troika base, then (with a slot 167 target, the time at +0x6678 passed and the float at +0x6268 not above the limit) rings the dev object and fails task 0x77; once the time at +0x6674 has passed it does the same for task 0x79
	void sub_10269b50(int condition);	// CAI_BaseNPC member (stub 0x10015839), called directly
	void sub_10269a20(int a);	// CAI_BaseNPC member (stub 0x100041b0), called directly
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	void sub_10012855(int flags);	// sets the solid flags (stub of the entity member), called directly
	void sub_1000303a();	// CAI_BaseNPCTroika::vfunc103 (Spawn), called directly
	void sub_100153a7(int flags);	// CBaseCombatCharacter member (stub of 0x1033c6b0), called directly
	void sub_1000df44(unsigned int flags);	// CBaseEntity::RemoveFlag2 (stub of 0x100b3900), called directly
	void sub_1039e970();	// starts the schedule of the tentacle state (+0x6670): 2 -> 0x16a, 3 -> 0x16a / 0x16c by the check of activity 0x1d, else after sub_1039f310 0x16b; each records the source file / line at +0x1b30 / +0x1b34; then take-damage mode 1 and the flag bytes at +0x6699 / +0x63d8
	int sub_10295460(int a, int b);	// CAI_BaseNPCTroika member (stub 0x10009c14), called directly
	void sub_102ae750(int schedule, int a);	// CAI_BaseNPCTroika member (stub 0x1000198d), called directly
	void sub_1039f310();	// stub 0x100072ac
	void sub_1039ee20(void *pArg);	// builds the doubled (x / y only) bounds of hull 0xf (NAI_Hull Mins / Maxs) and hands them with the mask 0x202400b to sub_102a0fb0
	void sub_102a0fb0(void *pArg, int mask, float *pMins, float *pMaxs);	// stub 0x10001f50, called directly
	void sub_1039f030();	// sound emitter of the same shape as sub_1039f1a0
	void sub_1039f1a0();	// plays one of the 0x106477cc sounds (channel 2, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)

	char m_pad0004[0x200 - 4];
	int m_nTakeDamage;	// 0x200
	char m_pad0204[0x1b30 - 0x204];
	const char *m_pszFile1b30;	// 0x1b30: source file of the last schedule selection
	int m_nLine1b34;	// 0x1b34: its line
	char m_pad1b38[0x63d8 - 0x1b38];
	char m_b63d8;	// 0x63d8
	char m_pad63d9[0x65c8 - 0x63d9];
	int m_nAct65c8;	// 0x65c8
	char m_pad65cc[0x6664 - 0x65cc];
	int m_nModelIndex6664;	// 0x6664: PrecacheModel result of the baby model
	int m_nModelIndex6668;	// 0x6668: PrecacheModel result of the baby model (again)
	int m_nModelIndex666c;	// 0x666c: PrecacheModel result of the transformation model
	int m_n6670;	// 0x6670
	int m_n6674;	// 0x6674
	int m_n6678;	// 0x6678
	int m_n667c;	// 0x667c
	int m_n6680;	// 0x6680
	float m_flTimer6684;	// 0x6684
	char m_b6688;	// 0x6688
	char m_pad6689[0x6698 - 0x6689];
	char m_b6698;	// 0x6698
	char m_b6699;	// 0x6699
};
