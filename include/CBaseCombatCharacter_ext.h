// Extra CBaseCombatCharacter members, included inside the class body of CBaseCombatCharacter.h (no #pragma once, no includes).
// Add new method declarations here instead of rewriting CBaseCombatCharacter.h.
	bool sub_103360a0();	// "CBaseCombatCharacter::Inventory...": scope trace (entity name), true when GetWeapon(i) is null for every i in 0..0xdf
	virtual int vfunc126(int a);	// "CBaseCombatCharacter::Save": scope trace (entity name), brackets CBaseEntity::vfunc126(a) with the helper pair on the field at +0x13d0, calling slot 111 first
	void sub_1032ead0();	// "CBaseCombatCharacter::RemoveAllWeapons": scope trace (entity name), clears the active weapon handle at +0x19a4, then for every weapon slot 0..0xdf that is set calls slot 359 on it and clears the slot
