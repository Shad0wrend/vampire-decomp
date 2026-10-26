// CTakeDamageInfo: the 0x4c byte damage record passed by value / by pointer to the take-damage slots.
// Only the attacker is modelled so far.
#pragma once

struct CGameTrace;

struct CTakeDamageAttacker	// the entity the +0x28 pointer of the record designates
{
	char m_pad0000[0xa0];
	void *m_pWeapon;	// 0xa0
};

struct CTakeDamageInfo
{
	char m_pad0000[0x28];
	CTakeDamageAttacker *m_pAttacker;	// 0x28
	void *m_pInflictor;	// 0x2c
	char m_pad0030[0x40 - 0x30];
	int m_bitsDamageType;	// 0x40
	char m_pad0044[0x4c - 0x44];

	void sub_101c2a10(int bitsDamageType);	// stub 0x10005916: stores the damage type at +0x40

	CTakeDamageInfo *sub_101c26d0(void *pInflictor, void *pAttacker, float flDamage, int bitsDamageType, int a, int b, int c);	// the constructor (stub 0x10009656): returns this
	CTakeDamageInfo *sub_101c2720(void *pInflictor, void *pAttacker, const float *pForce, const float *pPosition, float flDamage, int bitsDamageType, int ammoType);	// the constructor with a damage force and position (stub 0x10002090): returns this
	void sub_101c29e0(CGameTrace *pTrace);	// stub 0x1000e548: fills the damage force from the trace
	char sub_101c2af0();	// stub 0x10015b9f: asked by the Troika Event_Killed (the record's attacker check)
};
