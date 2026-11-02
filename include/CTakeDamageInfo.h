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
	union {
		int m_nZero00;	// 0x00: cleared by the constructor
		class CVDmg_t *m_pVDmg00;	// 0x00: the damage record of the hit (VPhysicsTakeDamage reads its GetDmg (sub_101faa70) and flags at +0x10)
	};
	float m_fl04, m_fl08, m_fl0c;	// 0x04..0x0c: 1.0f
	char m_pad0010[0x28 - 0x10];
	CTakeDamageAttacker *m_pAttacker;	// 0x28
	void *m_pInflictor;	// 0x2c
	float m_flDamage;	// 0x30
	float m_flDamage34;	// 0x34
	union {
		int m_n38;	// 0x38
		unsigned int m_nFlags38;	// 0x38: or-ed with the VDmg's +0x10 field; bit 25 = 0x2000000, bit 1 / bit 26 (0x4000002) tested by VPhysicsTakeDamage
	};
	int m_n3c;	// 0x3c
	int m_bitsDamageType;	// 0x40
	float m_fl44;	// 0x44: 1.0f
	char m_b48, m_b49, m_b4a;	// 0x48..0x4a: cleared
	char m_pad004b;

	void sub_101c2a10(int bitsDamageType);	// stub 0x10005916: stores the damage type at +0x40

	void sub_101c2890(void *pAttacker, void *pInflictor, float flDamage, int a, int b, int c);	// the common part of the constructors (stub 0x10013c23): fills the record, the inflictor defaults to the attacker
	CTakeDamageInfo *sub_101c26d0(void *pInflictor, void *pAttacker, float flDamage, int bitsDamageType, int a, int b, int c);	// the constructor (stub 0x10009656): returns this
	CTakeDamageInfo *sub_101c2720(void *pInflictor, void *pAttacker, const float *pForce, const float *pPosition, float flDamage, int bitsDamageType, int ammoType);	// the constructor with a damage force and position (stub 0x10002090): returns this
	void sub_101c29e0(CGameTrace *pTrace);	// stub 0x1000e548: fills the damage force from the trace
	char sub_101c2af0();	// stub 0x10015b9f: asked by the Troika Event_Killed (the record's attacker check)
};
