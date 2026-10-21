// CNPC_VGhoulCroucher: declared by pcdecomp transplant for 0x1037a950 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VGhoulCroucher : public CBaseEntity
{
public:
	int vfunc546(int arg);
	CNPC_VGhoulCroucher *vfunc5(unsigned int flags);	// as in CBaseCineCam (transplant)
	CNPC_VGhoulCroucher *sub_1037aea0();	// constructor: the CNPC_VHumanCombatant constructor body, the item objects at +0x6674 / +0x668c and the object at +0x66a4, both vtable pointers (+0 and +0x19b0), scope trace, the variant bytes cleared
	void sub_10386aa0();	// CNPC_VHumanCombatant constructor body (stub 0x100037f6), called directly
	char vfunc615();	// slot 615 "CNPC_VGhoulCroucher::CanBeSetOnFire": scope trace (entity name), false when the byte at +0x6665 is set, else CAI_BaseNPCTroika::vfunc615
	char sub_1000c5db();	// CAI_BaseNPCTroika::vfunc615 (stub 0x1000c5db), called directly
	int vfunc390(void *pInfo);	// slot 390 "CNPC_VGhoulCroucher::OnTakeDamage_Alive": scope trace (entity name), sub_1037b6e0(the dword at +0x2c of pInfo), sets the byte at +0x6667, then CNPC_VHuman::vfunc390
	void sub_1037b6e0(int a);	// called through the stub at 0x1000a2e5
	int sub_10001b45(void *pInfo);	// CNPC_VHuman::vfunc390 (stub 0x10001b45), called directly
	char vfunc294(int a);	// slot 294 "CNPC_VGhoulCroucher::IsValidStealthKillTarget": scope trace (entity name), true when the free getter sub_1037bb20 (byte at +0x6666) is zero, else CAI_BaseNPCTroika::vfunc294(a)
	char sub_1000c081(int a);	// CAI_BaseNPCTroika::vfunc294 (stub 0x1000c081), called directly
	void vfunc444(void *pTask);	// slot 444 "CNPC_VGhoulCroucher::RunTask": scope trace (entity name); tasks 0x14a / 0x14b: when slot 251() holds (and for 0x14b setting the byte at +0x6667) calls sub_10273e80(0); other tasks go to CNPC_VHumanCombatant::vfunc444
	void sub_100080da(void *pTask);	// CNPC_VHumanCombatant::vfunc444 (stub 0x100080da), called directly
	void sub_10273e80(int a);	// called through the stub at 0x1000ac68
	int vfunc438();	// slot 438 "CNPC_VGhoulCroucher::SelectSchedule": scope trace (entity name), schedule 0x158 while the getter sub_1037bb20 is zero, 0x159 until the byte at +0x6667 is set (both record file / line at +0x1b30 / +0x1b34), else CNPC_VHumanCombatant::vfunc438
	virtual void vfunc77();	// slot 77 "CNPC_VGhoulCroucher::ScriptHide": scope trace (entity name), the Troika version, then slot 77 of the entity behind the handle at +0x6670 (when it is live)
	void sub_102c1ce0();	// CAI_BaseNPCTroika::vfunc77 (stub 0x10006d11), called directly
	virtual void vfunc78();	// slot 78 "CNPC_VGhoulCroucher::ScriptUnhide": scope trace (entity name), the Troika version, then slot 78 of the entity behind the handle at +0x6670 (when it is live)
	void sub_102c1ec0();	// CAI_BaseNPCTroika::vfunc78 (stub 0x10009ecb), called directly
	void vfunc103();	// slot 103 "Spawn": solid flags, picks the Malk mansion model by the bytes at +0x6664 / +0x6665, then the CNPC_VHumanCombatant spawn
	void sub_10012855(int flags);	// sets the solid flags, called with 0x4000000, 0x200000 and 0x8000
	void sub_1000bc08();	// CNPC_VHumanCombatant::vfunc103 (stub 0x1000bc08), called directly
	void vfunc105(const char *pszModel);	// slot 105 "SetModel": the Troika version, then the sound name "Zombie_Male" / "Zombie_Female" at +0xc0 (by IsMale), sound table index 2, and the sound group looked up in the global sound table
	void sub_10298ce0(const char *pszModel);	// CAI_BaseNPCTroika::vfunc105 (stub 0x10009b6f), called directly
	char sub_10336920();	// CBaseCombatCharacter::IsMale (stub 0x100092be)
	void vfunc24(void *pVictim);	// slot 24 "CNPC_VGhoulCroucher::OnVictimHitByMe": scope trace (entity name), when the burning variant byte (+0x6665) is set and the victim has the dword at +0xa8 calls sub_1037c090(that dword, 10.0f), then CAI_BaseNPCTroika::vfunc24(pVictim); declared as a plain member
	void sub_1037c090(void *pObject, float flValue);	// stub 0x10008855, called directly
	void sub_10006136(void *pVictim);	// CAI_BaseNPCTroika::vfunc24 (stub 0x10006136), called directly
	void vfunc174(CBaseEntity *pOther);	// slot 174 "CNPC_VGhoulCroucher::StartTouch": scope trace (entity name), CBaseEntity::vfunc174(pOther); when pOther has the dword at +0xa8 or +0x94 sub_1037b6e0(pOther); then, as the burning variant (+0x6665) touching a character (+0xa8) and when the time at +0x666c has passed, pushes it ahead by a constant and calls sub_1037c090(that dword, 5.0f); declared as a plain member
	void sub_100a49d0(CBaseEntity *pOther);	// CBaseEntity::vfunc174 (stub 0x10009caf), called directly
	void vfunc420();	// slot 420 "CNPC_VWerewolf::NPCInit"-named: scope trace (entity name), the CNPC_VHumanCombatant version, Inventory_Destroy, gives the claws (item_w_claws_ghoul, stalker byte +0x6664 clear: item_w_knife), misc flag 0x10, and for the burning variant (+0x6665) spawns the fire emitter and stores its handle at +0x6670; then sub_10332aa0(1, 1, 10)
	void sub_1000dcba();	// CNPC_VHumanCombatant::vfunc420 (stub 0x1000dcba), called directly
	void sub_10334b10();	// CBaseCombatCharacter::Inventory_Destroy (stub 0x1000289c), called directly
	void sub_1033c6b0(unsigned int flags);	// CBaseCombatCharacter::AddMiscFlag (stub 0x100153a7), called directly
	void sub_10332aa0(int a, int b, int c);	// stub 0x10013cf5, called directly
	void vfunc431();	// slot 431 "NPCThink" (plain member): the Troika think, then, for the burning variant with a live fire emitter (handle +0x6670), the emitter's scale = 1 - remap(the float at +0x6264, 200, 600) (at least 0.1)
	void sub_10292de0();	// CAI_BaseNPCTroika::vfunc431 (stub 0x10002a7c), called directly
	void vfunc442(int *pTask);	// slot 442 "CNPC_VGhoulCroucher::StartTask": scope trace (entity name); task 0x14a: starts the activity sub_100079b4() and, unless the current activity (+0xff0) is it, slot 448(0x15); task 0x14b: the same with sub_1000e20a() and the byte at +0x6667 set; other tasks go to CNPC_VHumanCombatant::vfunc442
	void sub_1000a0c9(int *pTask);	// CNPC_VHumanCombatant::vfunc442 (stub 0x1000a0c9), called directly
	int sub_1000e20a();	// the activity of task 0x14b (the free getter at 0x1037b870)
	int sub_100079b4();	// the activity of task 0x14a (the free getter at 0x1037b890)
	void sub_10014524(int activity);	// CAI_BaseNPCTroika::sub_10289ee0 (stub 0x10014524): starts the activity

	char m_pad03e0[0x10e4 - 0x3e0];
	const char *m_pszName10e4;	// +0x10e4: the model-related name, null when its string is empty
	char m_pad10e8[0x19b0 - 0x10e8];
	int m_nVtable19b0;	// +0x19b0: vtable pointer of the second base (CAI_DefMovementSink)
	char m_pad19b4[0x1a98 - 0x19b4];
	int m_n1a98;	// +0x1a98
	char m_pad1a9c[0x1b30 - 0x1a9c];
	const char *m_pszFile1b30;	// +0x1b30: source file of the last schedule selection
	int m_nLine1b34;	// +0x1b34: its line
	char m_pad1b38[0x5dec - 0x1b38];
	int m_n5dec;	// +0x5dec
	char m_pad5df0[0x6264 - 0x5df0];
	float m_fl6264;	// +0x6264
	char m_pad6268[0x6348 - 0x6268];
	int m_n6348[5];	// +0x6348: five distances, 999999 at spawn
	char m_pad635c[0x6664 - 0x635c];
	char m_b6664;	// +0x6664: stalker variant
	char m_b6665;	// +0x6665: burning variant
	char m_b6666;	// +0x6666
	char m_b6667;	// +0x6667
	int m_n6668;	// +0x6668: random 0..3
	float m_flNext666c;	// +0x666c
	unsigned int m_h6670;	// +0x6670: entity handle
};
