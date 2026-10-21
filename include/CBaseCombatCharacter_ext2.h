	void vfunc356();	// slot 356 "CBaseCombatCharacter::PrayerBegin": scope trace (entity name), float 2.0f at +0x1494, curtime + 2.0f at +0x1490, +0xff0 = 0x131, sub_100b2e30(zero vector), and slot 93(0, 0) when the object at +0xa8 is set
	void *sub_1032e120(const char *pszName);	// "CBaseCombatCharacter::Weapon_Create": scope trace (entity name), null for "Nothing" (case-insensitive), else sub_100a99d0(pszName, slot 220(slot 221(this)))
	bool sub_10335a70(CBaseEntity *pOther);	// "CBaseCombatCharacter::Inventory_Can_Wield" (team test): scope trace (entity name), false for null, else the global at 0x1073a300 (sub_101ed0f0) applied to the engine indices of both edicts
	void sub_10334b10();	// "CBaseCombatCharacter::Inventory_Destroy": scope trace (entity name), for each weapon slot 0..0xdf that holds a weapon: sub_101cd940(weapon), weapon+0x73c = 0xff, SetWeapon(i, null); then the active weapon handle (+0x19a4) and +0x10dc become -1
	void sub_101072b0(int event);	// "CBaseCombatCharacter::AddExpression...": scope trace (entity name), when slot 347(event, name buffer, four floats) succeeds hands the name and floats to sub_101067e0 (stub 0x10005e8e)
	void sub_101067e0(const char *pszName, float a, float b, float c, int d, float e);	// worker of sub_101072b0 (stub 0x10005e8e)
	void vfunc306(CBaseCombatCharacter *pTarget, char bUseEyes);	// slot 306 "CBaseCombatCharacter::LookAtEntity": scope trace (entity name), asks pTarget for its eye position (slot 192) or center (slot 193) and this for its center, then, with an AI object at +0x94, resets its look state (sub_102e0b40 on the object at +0x5d44) and hands it pTarget's slot 220 position with -1.0f (sub_102e20b0, stub 0x10007248)
	char sub_10338cb0();	// "CBaseCombatCharacter::IncBloodPool": scope trace (entity name), hands 0xc to the active stat list (sub_10200d60), then slot 111; returns the worker's flag byte
	char sub_103300c0();	// "CBaseCombatCharacter::...": whether the value of stat 7 (kindred) or 0xd (others) of the stat list with id 3 (the shared default list when absent) is positive
	char sub_10339930();	// "CBaseCombatCharacter::ResistsFeeding": scope trace (entity name), true when the stat record of this character resists, or misc flag 0x40000 is set, or the NPC at +0x98 (state 2, slot 167 object with a field at +0xa8) is in combat with the player; else false (with a console message when the dev convar allows)

	// The inlined stat-list lookup: the first stat list with a zero field at +0x10, else the shared default list
	// (function-local static at 0x109f0b40, guard byte 0x109f0b2a).
	CVStatList_t *GetActiveStatList()
	{
		for (int i = 0; i < m_nStatLists; i++) {
			if (m_pStatLists[i]->m_field10 == 0)
				return m_pStatLists[i];
		}
		static CVStatList_t s_default(-1);
		return &s_default;
	}

	// Slot 86 "CBaseCombatCharacter::ShouldTransmit"-like (declared as a plain member; CBaseEntity::vfunc86 is the same slot).
	char vfunc86(int a, int b, int c, int d, int e);	// scope trace (entity name), true while the force-transmit time at +0x90 is still ahead of curtime or the flag byte at +0x14e3 + (engine slot 35 index of b) is set, else CBaseEntity::sub_100ab020(a, b, c, d, e)
	char sub_100ab020(int a, int b, int c, int d, int e);	// CBaseEntity::vfunc86 (stub 0x1000e002), called directly
	void sub_10338440(const int *pStat);	// "CBaseCombatCharacter::VStatGet": scope trace (entity name), pStat = {stat id, value}; finds the first stat list whose field at +0x10 equals the id that sub_10202780(pStat[0]) maps (the shared default list when none) and hands it pStat[1] (sub_10200d60)
	bool vfunc68(CBaseEntity *pOther);	// slot 68 "CBaseCombatCharacter::ShouldIgnoreCollision"-like: scope trace (entity name), false when the owner (+0x9c) of pOther lacks the flag byte at +0x1480 or pOther fails sub_100b5190, true when pOther's slot 95 is 1 or its object at +0x98 has bit 17 of +0x14b8, else CBaseAnimating::vfunc68
	bool sub_1008bfe0(CBaseEntity *pOther);	// CBaseAnimating::vfunc68 (stub 0x10003c1a), called directly
	int sub_10328380(int a, int b, CBaseCombatCharacter *pOther, int c);	// "CBaseCombatCharacter::TranslateBodyPosition"-like (stub 0x10008a35): scope trace (entity name), a plus bits for the grapple position
	int sub_10328af0(CBaseCombatCharacter *pOther, int a, int b);	// "CBaseCombatCharacter::CheckAndTranslateGrapplePosition": scope trace (entity name), over two candidate positions returns the first both characters know a sequence for, else -1
	void sub_10323770();	// "CBaseCombatCharacter::RemoveFromComfortList": scope trace (entity name), removes the entry resolving to this entity from the global handle vector at 0x10937af4 (the first match is memmoved out), then clears the dword at +0xe94
	int vfunc348();	// slot 348 "CBaseCombatCharacter::HealthToPercent": scope trace (entity name), (a - b) * max health (+0x208) / a with a = stat 0x11 and b = stat 0xf of the active stat list (a - b) / a
	void sub_103352b0(struct inputdata_t &data);	// "CBaseCombatCharacter::InputInven...": scope trace (entity name), calls sub_10335470 with the entity of the EHANDLE variant (0 stale), nothing when there is none
	void sub_10335470(void *pEnt);	// worker of sub_103352b0 (stub 0x10013601)
	void sub_10341370(CBaseCombatCharacter *pPartner, int unused);	// "CBaseCombatCharacter::BarterEnd" (stub 0x1000e020): scope trace (entity name), with a partner: when this has the object at +0xa8 sub_10013070() and sub_10010e60(this), else sub_10013070() on the partner when it has one
	void sub_10013070();	// CBasePlayer::sub_1017c6d0 (stub 0x10013070), called on a character with the object at +0xa8
	void sub_10010e60(CBaseEntity *pEnt);	// CBaseEntity::vfunc42 (stub 0x10010e60), called directly with an entity
	bool sub_10345330();	// "CBaseCombatCharacter::IsMeleeSwi...": scope trace (entity name), true unless sub_1032e7b0 is set and the current sequence's description (sub_1008d990 of the sequence at +0x6f0) has records of 0xbc bytes (up to 0x14, count at +0x2c4, offset at +0x2c8) one of which has a first float above the float at +0x6f8
	bool sub_1032db60(CBaseEntity *pWeapon);	// weapon test used by CMultiplayRules::vfunc20 (stub 0x10014c77)
	void sub_10335780(CBaseEntity *pWeapon);	// "CBaseCombatCharacter::Inventory_Reorder"-like: scope trace (entity name), moves pWeapon down to its first slot of its type (slot 298 counts per type), shifting the weapons in between up and updating their slot index (+0x73c)
	bool vfunc334(int a, int b);	// slot 334 "CBaseCombatCharacter::DisciplineOnCooldown"-like: false while the dword at +0x146c is positive; otherwise looks the discipline up in the global manager at 0x10739a4c (clearing the byte 0x10937cf2 first), and is false (setting the byte) when it is still cooling down (time since the stamp at +0xec0 + index * 4 below the discipline's duration), true otherwise
	char sub_1033d580(int unused);	// whether the character counts as "in danger" for the player: true when its record in the global table at 0x10738d10 has the byte +0x9b; false with the byte +0x9c, a busy / discipline / equipment state (sub_10337ff0, sub_103380d0, sub_1033c900(0x800)), an AI object (+0xa8 / +0xac), else true when the enemy record found by sub_1023bd00 has type 1 or 2 at +0x49c
	void sub_10335de0(CBaseEntity *pWeapon);	// "CBaseCombatCharacter::Inventory_Wield": scope trace (entity name), with a weapon: lets the weapon update its owner's records (sub_102562b0), then hands this to the global at 0x1074f028 (sub_10207dd0(this, 0))
