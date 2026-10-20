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
	int vfunc390(void *pInfo);	// slot 390 (OnTakeDamage) override: clears the vulnerable flag at +0x6688 when the damage type has bit 26, tells the entity of the handle at +0x628c about it (sub_10005849(ent, 1, 10)), then CNPC_VHuman::vfunc390
	int sub_10001b45(void *pInfo);	// CNPC_VHuman::vfunc390, called directly
	void sub_10005849(CBaseEntity *pEnt, int a, int b);	// a CBaseCombatCharacter member (the stub at 0x10005849 for 0x10332ca0), called directly

	char m_pad0004[0x6688 - 4];
	int m_nVulnerable;	// 0x6688
};
