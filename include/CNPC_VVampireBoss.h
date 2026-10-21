// CNPC_VVampireBoss: vampire boss NPC. Only the members and slots that decompiled code needs are declared (slots as plain members).
#pragma once

struct inputdata_t;
class CBaseEntity;

class CNPC_VVampireBoss
{
public:
	char pad0[0x17c];
	float m_flNextThink;	// +0x17c
	char pad180[0x6498 - 0x180];
	char m_bFlag6498;
	char pad6499[0x64b8 - 0x6499];
	float m_f64b8;	// +0x64b8
	char pad64bc[0x667c - 0x64bc];
	const char *m_MorphModelName;	// +0x667c
	const char *m_pMonsterModelName;	// +0x6680
	const char *m_pBodyEmitterNames[4];	// +0x6684
	const char *m_pDefaultNPCName;	// +0x6694
	char pad6698[0x66a0 - 0x6698];
	unsigned int m_hParticleEmitters[4];	// +0x66a0

	bool vfunc525(int unused);
	void sub_103c6df0(int index, const char *name);
	void sub_103c6eb0();	// ClearBodyEmitterNames
	int sub_103c6a90(int *pBalance, int limit, int a, int b);	// "CNPC_VVampireBoss::SelectRandomBalancedSchedule": scope trace, random coin flip against the running balance; moves the balance by one and returns a or b
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc431();	// "CNPC_VVampireBoss::NPCThink": scope trace around the base think, then schedules the next think
	void sub_10002a7c();	// CAI_BaseNPCTroika::vfunc431, called directly
	void vfunc617(inputdata_t *pInput);	// slot 617 "CNPC_VVampireBoss::InputTransformModel": scope trace, sets the default NPC name at +0x6694 and, when the morph model name (+0x667c, "" when null) is not empty, stores it as the monster model (+0x6680) and calls sub_102ae750(0x159, 0)
	void sub_102ae750(int a, int b);	// called through the stub at 0x1000198d
	int vfunc127(int a);	// slot 127 "CNPC_VVampireBoss::Restore": scope trace, base restore (sub_1000527c), clears the monster model name (+0x6680) and the body emitter names, sets the default NPC name (+0x6694); returns the base result
	int sub_1000527c(int a);	// CAI_BaseNPCTroika::vfunc127, called directly
	void sub_103c7150();	// "CNPC_VVampireBoss::KillBodyEmitters": scope trace, for each of the four particle emitter handles (+0x66a0) that resolves, calls slot 242 on it, then sub_1000fb23(0.1f)
	void sub_103c6f40();	// "CNPC_VVampireBoss::SpawnBodyEmitters": scope trace, KillBodyEmitters, then for each of the four emitter names (global table at 0x1065e6d0) spawns one with sub_103c7010 and stores its handle at +0x66a0
	CBaseEntity *sub_103c7010(int index, const char *attachment);	// spawns the body emitter `index` on the attachment (stub 0x1000f4b6), null on failure
	void vfunc444(int *pTask);	// slot 444 "CNPC_VVampireBoss::RunTask": scope trace (no entity name), task 0x14d goes to sub_10011851, every other task to the base implementation
	void sub_10011928(int *pTask);	// CNPC_VHuman::vfunc444 (RunTask), called directly (stub 0x10011928)
	void sub_10011851();	// the handler of task 0x14d (stub 0x10011851 for 0x103c63c0)
	void vfunc420();	// slot 420 "CNPC_VVampireBoss::NPCInit": scope trace (no entity name), the Troika version, clears the monster model name (+0x6680) and the body emitter names, sets the default NPC name (+0x6694) and the flag byte +0x6498, runs sub_10014c22 and sets +0x64b8 = 1.0f
	void sub_1000c531();	// CAI_BaseNPCTroika::vfunc420 (stub 0x1000c531), called directly
	void sub_10014c22();	// stub 0x10014c22 for 0x103c6a00
};
