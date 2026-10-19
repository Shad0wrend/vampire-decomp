// CNPC_VVampireBoss: vampire boss NPC. Only the members and slots that decompiled code needs are declared (slots as plain members).
#pragma once

class CNPC_VVampireBoss
{
public:
	char pad0[0x17c];
	float m_flNextThink;	// +0x17c
	char pad180[0x6498 - 0x180];
	char m_bFlag6498;
	char pad6499[0x6684 - 0x6499];
	const char *m_pBodyEmitterNames[4];

	bool vfunc525(int unused);
	void sub_103c6df0(int index, const char *name);
	void sub_103c6eb0();	// ClearBodyEmitterNames
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc431();	// "CNPC_VVampireBoss::NPCThink": scope trace around the base think, then schedules the next think
	void sub_10002a7c();	// CAI_BaseNPCTroika::vfunc431, called directly
};
