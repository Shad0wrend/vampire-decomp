	void vfunc356();	// slot 356 "CBaseCombatCharacter::PrayerBegin": scope trace (entity name), float 2.0f at +0x1494, curtime + 2.0f at +0x1490, +0xff0 = 0x131, sub_100b2e30(zero vector), and slot 93(0, 0) when the object at +0xa8 is set
	void *sub_1032e120(const char *pszName);	// "CBaseCombatCharacter::Weapon_Create": scope trace (entity name), null for "Nothing" (case-insensitive), else sub_100a99d0(pszName, slot 220(slot 221(this)))
	bool sub_10335a70(CBaseEntity *pOther);	// "CBaseCombatCharacter::Inventory_Can_Wield" (team test): scope trace (entity name), false for null, else the global at 0x1073a300 (sub_101ed0f0) applied to the engine indices of both edicts
	void sub_10334b10();	// "CBaseCombatCharacter::Inventory_Destroy": scope trace (entity name), for each weapon slot 0..0xdf that holds a weapon: sub_101cd940(weapon), weapon+0x73c = 0xff, SetWeapon(i, null); then the active weapon handle (+0x19a4) and +0x10dc become -1
	void sub_101072b0(int event);	// "CBaseCombatCharacter::AddExpression...": scope trace (entity name), when slot 347(event, name buffer, four floats) succeeds hands the name and floats to sub_101067e0 (stub 0x10005e8e)
	void sub_101067e0(const char *pszName, float a, float b, float c, int d, float e);	// worker of sub_101072b0 (stub 0x10005e8e)
	void vfunc306(CBaseCombatCharacter *pTarget, char bUseEyes);	// slot 306 "CBaseCombatCharacter::LookAtEntity": scope trace (entity name), asks pTarget for its eye position (slot 192) or center (slot 193) and this for its center, then, with an AI object at +0x94, resets its look state (sub_102e0b40 on the object at +0x5d44) and hands it pTarget's slot 220 position with -1.0f (sub_102e20b0, stub 0x10007248)

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
