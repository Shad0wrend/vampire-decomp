// CNPC_VGargoyle: the gargoyle NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add padding slots before using a
// virtual call through this class.
#pragma once

class CBaseEntity;

class CNPC_VGargoyle
{
public:
	virtual int vfunc359(int index);
	virtual void vfunc601(int unused);
	virtual void vfunc144(int info);	// slot 144 (Event_Killed-like) override: when the object at +0x6684 is set, CNPC_VVampire::vfunc144(info) (tail jump); else sets the source file / line stamp (0x1063a854, 0x248) at +0x1b30 / +0x1b34 and sub_102ae750(0x15c, 1)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc440(int schedule);	// slot 440 (TranslateSchedule) override: maps schedules 0x5b, 0xea, 0xdc, 0xdd to 0x15d..0x160, everything else goes to CNPC_VHuman::vfunc440
	void vfunc24(CBaseEntity *pOther);	// slot 24 override: when the other entity is named "pillar" or "central_pillar" (NameMatches), calls slot 266 of it with this
	void vfunc175(CBaseEntity *pOther);	// slot 175 (Touch) override: when the other entity is named "pillar" or "central_pillar" (NameMatches), damages it (CVDmg_t, one point, slot 142 of it) with this as the inflictor; then CBaseEntity::vfunc175
	bool vfunc320(int a, int b);	// slot 320: when the vulnerable flag at +0x6688 is set and a random int 1..100 is at most 50, CAI_BaseNPCTroika::vfunc320(a, b) and true; else false
	int vfunc390(void *pInfo);	// slot 390 (OnTakeDamage) override: clears the vulnerable flag at +0x6688 when the damage type has bit 26, tells the entity of the handle at +0x628c about it (sub_10005849(ent, 1, 10)), then CNPC_VHuman::vfunc390
	void vfunc420();	// slot 420: calls CAI_BaseNPCTroika::vfunc420 (stub 0x1000c531), then resets the pillar handle, the flags at +0x6680..+0x6688 and the global at 0x109340d8 (set to 0xe)
	void vfunc435(int a);	// slot 435 override: CAI_BaseNPCTroika::vfunc435 (stub 0x100048f9, ecx = this, one stack argument), then when the flags at +0x14b8 lack bit 3 and the counter at +0x6680 is positive, the counter goes down by one
	void vfunc444(int *pTask);	// slot 444 override: task 0x31 -> (slot 572 unless bit 13 of +0x5d8c, sub_1000e6e7(-1) on the object at +0x5d44, sub_10010352), task 0x12f -> slot 251; when that answers true runs sub_1000ac68(0); other tasks CNPC_VHuman::vfunc444
	int sub_10001b45(void *pInfo);	// CNPC_VHuman::vfunc390, called directly
	void sub_10005849(CBaseEntity *pEnt, int a, int b);	// a CBaseCombatCharacter member (the stub at 0x10005849 for 0x10332ca0), called directly
	bool sub_10378ec0();	// finds the "pillar" entity named by slot 167()'s slot 220(), stores its handle at +0x667c (-1 when none) and returns whether the handle still resolves to a live entity
	void vfunc104();	// slot 104 (Precache): CNPC_VHuman::vfunc104, then precaches the nine gargoyle gib models, the stomp / exert / roar2 sounds and the "item_w_gargoyle_fist" weapon
	void sub_10384670();	// CNPC_VHuman::vfunc104 (stub 0x100013f7), called directly
	int vfunc438();	// slot 438 "SelectSchedule" override: sets +0x1b2c = 0x11; schedule 0x15c (line 0x174) when the default stat list's stats 0xf and 0x11 are equal; in state 2 with an enemy that is not slot 530 and the navigator (+0x5d34) cannot reach (slot 217 origins) tries sub_10378f80(); else CNPC_VHuman::vfunc438
	int sub_10378f80();	// called by SelectSchedule (stub 0x1000b4e2)
	void sub_10379000(int a);	// the member the stub at 0x10006613 calls with one argument (from sub_10378f80, with a = 1)
	int sub_10384ee0();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called
	char sub_10010352();	// stub 0x10010352, answers in al (end of the task 0x31 handling)
	void sub_1000ac68(int a);	// stub 0x1000ac68, run when the task handling answers true
	void sub_10011928(int *pTask);	// CNPC_VHuman::vfunc444 (stub 0x10011928), called directly
	void sub_102ae750(int schedule, int a);	// stub 0x1000198d, starts the schedule (the source line stamp is written by the caller)
	void vfunc259(void *pEvent);	// slot 259 "HandleAnimEvent" override: event 2 plays the roar2 sound (reliably, from the NPC's edict, to the players that can hear it), events 0x802 / 0x803 shake the screen around the NPC and then slot 617, event 1 does nothing, anything else CNPC_VHuman::vfunc259
	char vfunc69(CBaseEntity *pOther);	// slot 69 (plain member): true for an entity with bits 1, 2 or 4 of its byte at +0x4c set or whose class name is "prop_dynamic", "func_brush" or "func_door_rotating" (ClassMatches inlined three times); else CAI_BaseNPCTroika::sub_1029b180(pOther)
	void sub_100076bc(void *pEvent);	// CNPC_VHuman::vfunc259 (stub 0x100076bc), called directly
	void vfunc617();	// slot 617 (plain member): emits one of the 0x10639480 sounds (random 3..0, channel 4, volume 1.0, attenuation 0.8) from the NPC's edict to the players that can hear its position, reliably (a PAS attenuation filter built inline)
	void vfunc432(int a);	// slot 432 override: asks the worker behind the stub 0x10006ae6 for an object and a kind; kind 1 runs sub_1000d3cd(obj), any other kind sub_100027a7(obj); then CNPC_VHuman::vfunc432(a)
	void *sub_10006ae6(int *pKind);	// stub of 0x103796a0
	void sub_1000d3cd(void *pObj);	// stub of 0x10379e80
	void sub_100027a7(void *pObj);	// stub of 0x10379b40
	void sub_1000698d(int a);	// CNPC_VHuman::vfunc432 (stub 0x1000698d), called directly
	void vfunc292(struct CGargoyleDmgInfo *pInfo, int b, int c);	// slot 292 override: unless the info's damage record (+0x0) / flags (+0x38) say bit 1 or bit 26, and its damage (the record's GetDmg, else the float at +0x30) is not zero, CBaseCombatCharacter::vfunc292(pInfo, b, c)
	void sub_10015843(struct CGargoyleDmgInfo *pInfo, int b, int c);	// CBaseCombatCharacter::vfunc292 (stub 0x10015843), called directly
	void vfunc618();	// slot 618 (plain member): emits one of the 0x10639490 sounds (random 0..2, channel 4, volume 1.0, attenuation 0.8) from the NPC's edict to the players that can hear its position, reliably (a PAS attenuation filter built inline)
	void vfunc433();	// slot 433 override: CAI_BaseNPCTroika::vfunc433, then raises the conditions 0xf, 0xc, 0xd and, with an enemy (slot 167) within 50 units in the plane, 0x5f and 0xe
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	void sub_10269b50(int a);	// stub 0x10015839, called with a condition number
	void vfunc448(int a);	// slot 448 override: with the state at +0x5cc0 equal to 2 and sub_10269d30(0x5c) true clears bit 31 of +0x5d8c; runs sub_10379000(0) when sub_10379040() is true; clears the counter at +0x6680; then CAI_BaseNPCTroika::vfunc448
	char sub_10269d30(int a);	// stub 0x1001482b, answers in al
	char sub_10379040();	// stub 0x10014777, answers in al
	void sub_1029adb0(int a);	// CAI_BaseNPCTroika::vfunc448 (stub 0x100054bb), called directly

	char m_pad0004[0x14b8 - 4];
	unsigned int m_nFlags14b8;	// 0x14b8
	char m_pad14bc[0x5cc0 - 0x14bc];
	int m_nState5cc0;	// 0x5cc0
	char m_pad5cc4[0x5d44 - 0x5cc4];
	void *m_pObj5d44;	// 0x5d44
	char m_pad5d48[0x5d8c - 0x5d48];
	unsigned int m_nFlags5d8c;	// 0x5d8c
	char m_pad5d90[0x667c - 0x5d90];
	int m_hPillar;	// 0x667c
	int m_n6680;	// 0x6680: the counter the vfunc435 override lowers
	void *m_p6684;	// 0x6684: the object that takes the Event_Killed call when set
	int m_nVulnerable;	// 0x6688
public:
	virtual bool vfunc70();
	virtual bool vfunc602();
	virtual bool vfunc615();
};
