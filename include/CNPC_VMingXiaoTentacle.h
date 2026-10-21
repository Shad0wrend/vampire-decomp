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
	int vfunc461();	// "CNPC_VMingXiaoTentacle::SelectIdealState": picks the ideal state (1, 2 or 7) and its schedule from slot 167
	void sub_1039ef90(float *pPos);	// called through the stub at 0x1000d1f2: scope work, then copies the three floats of pPos to +0x668c
	void vfunc104();	// "CNPC_VMingXiaoTentacle::Precache": default model when none is set, base Precache, then the baby / transformation models (handles at +0x6664..+0x666c), three particle emitters and two sounds
	void vfunc103();	// "CNPC_VMingXiaoTentacle::Spawn": solid flags 0x4000000 / 0x200000, the base spawn, 0x80000 flag, clears the tentacle state, arms the timer at +0x6684 (curtime + const), removes flag2 4
	void sub_10012855(int flags);	// sets the solid flags (stub of the entity member), called directly
	void sub_1000303a();	// CAI_BaseNPCTroika::vfunc103 (Spawn), called directly
	void sub_100153a7(int flags);	// CBaseCombatCharacter member (stub of 0x1033c6b0), called directly
	void sub_1000df44(unsigned int flags);	// CBaseEntity::RemoveFlag2 (stub of 0x100b3900), called directly

	char m_pad0004[0x63d8 - 4];
	char m_b63d8;	// 0x63d8
	char m_pad63d9[0x6664 - 0x63d9];
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
