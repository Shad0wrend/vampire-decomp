// CTakeDamageInfo: the 0x4c byte damage record passed by value / by pointer to the take-damage slots.
// Only the attacker is modelled so far.
#pragma once

struct CTakeDamageAttacker	// the entity the +0x28 pointer of the record designates
{
	char m_pad0000[0xa0];
	void *m_pWeapon;	// 0xa0
};

struct CTakeDamageInfo
{
	char m_pad0000[0x28];
	CTakeDamageAttacker *m_pAttacker;	// 0x28
	char m_pad002c[0x4c - 0x2c];

	CTakeDamageInfo *sub_101c26d0(void *pInflictor, void *pAttacker, float flDamage, int bitsDamageType, int a, int b, int c);	// the constructor (stub 0x10009656): returns this
};
