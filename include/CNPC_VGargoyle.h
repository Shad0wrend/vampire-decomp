// CNPC_VGargoyle: the gargoyle NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CBaseEntity;

class CNPC_VGargoyle
{
public:
	virtual int vfunc359(int index);
	virtual void vfunc601(int unused);
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc440(int schedule);	// slot 440 (TranslateSchedule) override: maps schedules 0x5b, 0xea, 0xdc, 0xdd to 0x15d..0x160, everything else goes to CNPC_VHuman::vfunc440
	void vfunc24(CBaseEntity *pOther);	// slot 24 override: when the other entity is named "pillar" or "central_pillar" (NameMatches), calls slot 266 of it with this
	void vfunc175(CBaseEntity *pOther);	// slot 175 (Touch) override: when the other entity is named "pillar" or "central_pillar" (NameMatches), damages it (CVDmg_t, one point, slot 142 of it) with this as the inflictor; then CBaseEntity::vfunc175
	int vfunc390(void *pInfo);	// slot 390 (OnTakeDamage) override: clears the vulnerable flag at +0x6688 when the damage type has bit 26, tells the entity of the handle at +0x628c about it (sub_10005849(ent, 1, 10)), then CNPC_VHuman::vfunc390
	void vfunc420();	// slot 420: calls CAI_BaseNPCTroika::vfunc420 (stub 0x1000c531), then resets the pillar handle, the flags at +0x6680..+0x6688 and the global at 0x109340d8 (set to 0xe)
	int sub_10001b45(void *pInfo);	// CNPC_VHuman::vfunc390, called directly
	void sub_10005849(CBaseEntity *pEnt, int a, int b);	// a CBaseCombatCharacter member (the stub at 0x10005849 for 0x10332ca0), called directly
	bool sub_10378ec0();	// finds the "pillar" entity named by slot 167()'s slot 220(), stores its handle at +0x667c (-1 when none) and returns whether the handle still resolves to a live entity
	void vfunc104();	// slot 104 (Precache): CNPC_VHuman::vfunc104, then precaches the nine gargoyle gib models, the stomp / exert / roar2 sounds and the "item_w_gargoyle_fist" weapon
	void sub_10384670();	// CNPC_VHuman::vfunc104 (stub 0x100013f7), called directly
	int vfunc438();	// slot 438 "SelectSchedule" override: sets +0x1b2c = 0x11; schedule 0x15c (line 0x174) when the default stat list's stats 0xf and 0x11 are equal; in state 2 with an enemy that is not slot 530 and the navigator (+0x5d34) cannot reach (slot 217 origins) tries sub_10378f80(); else CNPC_VHuman::vfunc438
	int sub_10378f80();	// called by SelectSchedule (stub 0x1000b4e2)
	int sub_10384ee0();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called

	char m_pad0004[0x667c - 4];
	int m_hPillar;	// 0x667c
	char m_pad6680[0x6688 - 0x6680];
	int m_nVulnerable;	// 0x6688
};
