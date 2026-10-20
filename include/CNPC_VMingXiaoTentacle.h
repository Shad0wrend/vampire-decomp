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

	char m_pad0004[0x6664 - 4];
	int m_nModelIndex6664;	// 0x6664: PrecacheModel result of the baby model
	int m_nModelIndex6668;	// 0x6668: PrecacheModel result of the baby model (again)
	int m_nModelIndex666c;	// 0x666c: PrecacheModel result of the transformation model
};
