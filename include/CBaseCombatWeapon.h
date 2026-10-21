// CBaseCombatWeapon: base of every carryable weapon.
// Only the vtable slots that decompiled code needs are given their real names,
// the others are placeholders that keep the slot indices of the game's primary
// vtable. The vtable has 372 slots.
#pragma once

struct CWeaponHolder_t;
struct CWeaponOwner;

struct CWeaponActivityRecord	// 12 byte entry of a weapon's activity translation table
{
	int m_baseAct;
	int m_weaponAct;
	char m_required;
};

struct CWeaponRollValue	// a roll result value; has a constructor, so functions return it through a hidden pointer
{
	int m_value;
	CWeaponRollValue() : m_value(0) {}
};

#define CBCW_V(n) virtual void vfunc##n();
#define CBCW_V10(p) CBCW_V(p##0) CBCW_V(p##1) CBCW_V(p##2) CBCW_V(p##3) CBCW_V(p##4) CBCW_V(p##5) CBCW_V(p##6) CBCW_V(p##7) CBCW_V(p##8) CBCW_V(p##9)

class CBaseCombatWeapon
{
public:
	// slots 0..9
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual CBaseCombatWeapon *vfunc5(unsigned int flags); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	// slots 10..279
	CBCW_V10(1) CBCW_V10(2) CBCW_V10(3) CBCW_V10(4) CBCW_V10(5) CBCW_V10(6) CBCW_V10(7) CBCW_V10(8) CBCW_V10(9)
	CBCW_V(100) CBCW_V(101) CBCW_V(102) CBCW_V(103) CBCW_V(104)
	virtual void vfunc105(const char *pszName);
	CBCW_V(106) CBCW_V(107) CBCW_V(108) CBCW_V(109)
	CBCW_V10(11) CBCW_V10(12) CBCW_V10(13) CBCW_V10(14) CBCW_V10(15) CBCW_V10(16) CBCW_V10(17) CBCW_V10(18) CBCW_V10(19)
	CBCW_V10(20) CBCW_V10(21) CBCW_V10(22) CBCW_V10(23) CBCW_V10(24) CBCW_V10(25) CBCW_V10(26)
	CBCW_V(270) CBCW_V(271)
	virtual char *vfunc272();
	virtual char *vfunc273();
	CBCW_V(274) CBCW_V(275) CBCW_V(276)
	virtual bool vfunc277(int a);	// asked by vfunc280 with the ammo slot index
	virtual float vfunc278();	// CWeaponGravityGun: the pull strength of the held object (the owner's stat 0x1a divided by the physics object's mass), -1.0f without one
	CBCW_V(279)
	// slots 280..371
	virtual bool vfunc280(int a);	// asked by CBaseCombatCharacter::GetBestRangedWeapon with 0
	CBCW_V(281) CBCW_V(282) CBCW_V(283)
	virtual void vfunc284(void *a, void *b, void *c, int d, int e);
	virtual void *vfunc285();	// CWeaponGravityGun: the entity of the held-object handle at +0x918, else sub_1014a1b0
	CBCW_V(286) CBCW_V(287) CBCW_V(288) CBCW_V(289)
	CBCW_V(290) CBCW_V(291) CBCW_V(292) CBCW_V(293) CBCW_V(294) CBCW_V(295) CBCW_V(296)
	virtual void vfunc297(int value);
	CBCW_V(298) CBCW_V(299) CBCW_V(300) CBCW_V(301) CBCW_V(302)
	virtual bool vfunc303();
	virtual char vfunc304();	// true when the field at +0x2444 of the owner (sub_102517b0) is set
	CBCW_V(305)
	virtual void vfunc306(int value);
	virtual void vfunc307(int value);
	CBCW_V(308)
	virtual bool vfunc309();	// true when gpGlobals->curtime is past the time at +0x894
	CBCW_V(310) CBCW_V(311) CBCW_V(312) CBCW_V(313) CBCW_V(314)
	virtual bool vfunc315();
	virtual char vfunc316(int a);
	CBCW_V(317) CBCW_V(318) CBCW_V(319)
	CBCW_V(320) CBCW_V(321) CBCW_V(322) CBCW_V(323) CBCW_V(324) CBCW_V(325) CBCW_V(326) CBCW_V(327)
	virtual int vfunc328();
	CBCW_V(329) CBCW_V(330) CBCW_V(331) CBCW_V(332)
	virtual void vfunc333(int a, int b, int c, int d, int e, int f);
	CBCW_V(334) CBCW_V(335) CBCW_V(336)
	virtual float vfunc337(int a, int b);
	virtual void vfunc338(int a, int b);	// "CBaseCombatWeapon::Weapon_SetActivity"-like: called by CBaseCombatCharacter::Weapon_SetActivity with its two arguments
	CBCW_V(339)
	CBCW_V(340) CBCW_V(341)
	virtual int vfunc342(int a);	// the owner object (sub_102517b0) + 0x2188
	virtual int vfunc343();
	virtual int vfunc344();	// the owner object (sub_102517b0) + 0x2408
	virtual int vfunc345();	// the weapon's weight (compared by CMultiplayRules::vfunc19)
	CBCW_V(346) CBCW_V(347) CBCW_V(348) CBCW_V(349)
	CBCW_V10(35) virtual unsigned int vfunc360();	// the weapon's type flags (bits 13 and 14 mark ranged weapons)
	CBCW_V(361)
	virtual CWeaponActivityRecord *vfunc362();	// the weapon's activity translation table
	virtual int vfunc363();	// the number of records of that table
	virtual void vfunc364(int a, int b, int c);
	CBCW_V(365) CBCW_V(366)
	virtual void vfunc367(int a, int b, int c);	// CWeaponMelee: forwards to sub_103ea7e0 with the constant 0x4b
	CBCW_V(368) CBCW_V(369)
	virtual void vfunc370(int *event, CBaseCombatWeapon *other);
	virtual void vfunc371();
	void sub_102507b0();
	CWeaponOwner *sub_102517b0();	// the weapon's owner (player) object
	int *sub_102517e0();	// the weapon's current roll slot index (static fallback record when none matches)
	CWeaponOwner *sub_10252290();	// resolves the owner handle at +0x88c (0 when stale)
	void *sub_102521f0();	// the dword at +0x9c of the entity the owner handle at +0x88c resolves to (0 when stale)
	int sub_10252240();	// same as sub_102521f0 (stub 0x100011f4)
	void sub_1024edc0();	// prints the weapon's activity translation table (base activity, weapon activity, required) with Msg
	bool sub_10253b40(int a);	// true when the ammo type at +0x744 + a * 4 is not negative
	CWeaponRollValue sub_10256350();	// builds the roll result record (owner, this, the 16 byte record of the current roll slot at +0x7a0, 6) and returns its printed value

	char m_pad004[0x2dc];
	CWeaponHolder_t *m_pHolder; // 0x2e0
	char m_pad2e4[0x88c - 0x2e4];
	unsigned int m_hOwner; // 0x88c
	char m_pad890[4];
	float m_f894;
	void sub_10013a57();	// as in CPhysForce (transplant)
	char sub_10256220();	// provisional, like vfunc304 (transplant)
	char sub_10256250();	// provisional, like vfunc304 (transplant)
	char sub_10257200();	// provisional, like vfunc304 (transplant)
};
