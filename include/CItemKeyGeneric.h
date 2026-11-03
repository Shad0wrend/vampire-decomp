// CItemKeyGeneric: declared by pcdecomp transplant for 0x1040ad50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CBaseCombatCharacter;

class CItemKeyGeneric
{
public:
	CItemKeyGeneric *vfunc5(unsigned int flags);
	void sub_10013a57();
	void vfunc341(CBaseCombatCharacter *pChar);	// slot 341 (declared as a plain member): files the key in the character's key list (the player's or the NPC's), then moves its records into the keyring the character carries (item_g_keyring) and removes the key item
	void *sub_102517b0();	// CBaseCombatWeapon::sub_102517b0: the weapon's owner (player) object (stub 0x10010ea6)
public:
	int vfunc80();
	int vfunc81();
	char m_pad0000[0x954 - 0x0];
};
