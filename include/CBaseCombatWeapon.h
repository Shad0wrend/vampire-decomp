// CBaseCombatWeapon: base of every carryable weapon.
// Only the vtable slots that decompiled code needs are given their real names,
// the others are placeholders that keep the slot indices of the game's primary
// vtable. The vtable has 372 slots.
#pragma once

struct CWeaponHolder_t;
struct CWeaponOwner;
class CUnknown101d8a70;
class CBaseEntity;

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
	CBCW_V10(1) CBCW_V10(2) CBCW_V10(3) CBCW_V10(4) CBCW_V10(5) CBCW_V10(6) CBCW_V10(7)
	CBCW_V(80) CBCW_V(81) CBCW_V(82) CBCW_V(83) CBCW_V(84) CBCW_V(85)
	virtual bool vfunc86(int a, void *pEdict, int c, int d, int e);	// "ShouldTransmit"-like (CBaseEntity::vfunc86 for a weapon): true while the force-transmit time at +0x90 is in the future or the viewer is the owner's player / the player using the owner; false for a transmit decision on the owner's team states 0 / 1 (+0x8b0); else the entity version
	CBCW_V(87) CBCW_V(88) CBCW_V(89)
	CBCW_V(90) CBCW_V(91) CBCW_V(92) CBCW_V(93) CBCW_V(94) CBCW_V(95) CBCW_V(96)
	virtual CBaseEntity *vfunc97();	// "GetOwnerEntity"
	CBCW_V(98) CBCW_V(99)
	CBCW_V(100) CBCW_V(101) CBCW_V(102) CBCW_V(103) CBCW_V(104)
	virtual void vfunc105(const char *pszName);
	CBCW_V(106) CBCW_V(107) CBCW_V(108) CBCW_V(109)
	CBCW_V10(11) CBCW_V10(12) CBCW_V10(13) CBCW_V10(14) CBCW_V10(15) CBCW_V10(16) CBCW_V10(17)
	CBCW_V(180) CBCW_V(181) CBCW_V(182) CBCW_V(183) CBCW_V(184) CBCW_V(185) CBCW_V(186)
	virtual CBaseEntity *vfunc187();	// "CBaseCombatWeapon::Respawn": creates a new entity of the weapon's class at the game rules' respawn spot
	CBCW_V(188) CBCW_V(189)
	CBCW_V10(19)
	CBCW_V10(20) CBCW_V10(21)
	CBCW_V(220) virtual float *vfunc221();	// "GetAngles"
	CBCW_V(222) CBCW_V(223) CBCW_V(224) CBCW_V(225) CBCW_V(226) CBCW_V(227) CBCW_V(228) CBCW_V(229)
	CBCW_V10(23) CBCW_V10(24) CBCW_V10(25) CBCW_V10(26)
	CBCW_V(270) CBCW_V(271)
	virtual char *vfunc272();
	virtual char *vfunc273();
	CBCW_V(274) virtual int vfunc275(int a); CBCW_V(276)
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
	virtual void vfunc308(int a, int b);	// pushes a to the first and b to the second view model of the weapon (owner's player object at +0xa8 needed): sequence from slot 342, slot 266 / 265, and the player's field +0x1488 copied to +0x6f4 of each
	virtual bool vfunc309();	// true when gpGlobals->curtime is past the time at +0x894
	virtual void vfunc310(float time);	// "SetNextAttack"-like: stores time at +0x894 of this weapon (just this one without an owner), of the owner's active weapon and of the weapon behind the owner's handle at +0x1c64
	virtual float vfunc311();	// the weapon's next-attack time (as read by sub_10254b00)
	virtual char vfunc312();	// asked by sub_10253b70 (whether the weapon may be used)
	CBCW_V(313) CBCW_V(314)
	virtual bool vfunc315();
	virtual char vfunc316(int a);
	CBCW_V(317) CBCW_V(318) CBCW_V(319)
	CBCW_V(320) CBCW_V(321) CBCW_V(322) virtual void vfunc323();	// "FinishReload": with an owner (sub_102521f0): a pending reload (byte at +0x8c8) is cancelled through sub_10254cd0(0xc3); else for both ammo slots the clip (+0x74c + i * 4) is refilled from the owner's ammo count (not above slot 275's capacity); then clears the bytes at +0x898 / +0x899 / +0x89a
	CBCW_V(324) CBCW_V(325) CBCW_V(326) CBCW_V(327)
	virtual int vfunc328();
	CBCW_V(329) CBCW_V(330) CBCW_V(331) CBCW_V(332)
	virtual void vfunc333(int a, int b, int c, int d, int e, int f);
	virtual void vfunc334(int a, int b);	// walks the slot 347(a) records (sub_10252120(a, i)) and tells the sound/overlay object at 0x1070b248 about each: with the record flag (+0x90) set only when the owner exists (type 6), else with b, for the owner's or the weapon's edict
	CBCW_V(335) CBCW_V(336)
	virtual float vfunc337(int a, int b);
	virtual void vfunc338(int a, int b);	// "CBaseCombatWeapon::Weapon_SetActivity"-like: called by CBaseCombatCharacter::Weapon_SetActivity with its two arguments
	CBCW_V(339)
	CBCW_V(340) CBCW_V(341)
	virtual int vfunc342(int a);	// the owner object (sub_102517b0) + 0x2188
	virtual int vfunc343();
	virtual int vfunc344();	// the owner object (sub_102517b0) + 0x2408
	virtual int vfunc345();	// the weapon's weight (compared by CMultiplayRules::vfunc19)
	CBCW_V(346) virtual int vfunc347(int a); CBCW_V(348) CBCW_V(349)
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
	void sub_10250c50();	// the destructor body (called by vfunc5): vtable, releases the object at +0x8dc through the global at 0x10723940 (slot 23), sub_10250560(this), destroys the two lists at +0x8f8 / +0x8e0 (sub_100cd2d0) and the three 0x44 byte CVDmg_t records at +0x77c (sub_101fa680, last first), then the CBaseAnimating destructor body
	CWeaponOwner *sub_102517b0();	// the weapon's owner (player) object
	int *sub_102517e0();	// the weapon's current roll slot index (static fallback record when none matches)
	CWeaponOwner *sub_10252290();	// resolves the owner handle at +0x88c (0 when stale)
	void *sub_102521f0();	// the dword at +0x9c of the entity the owner handle at +0x88c resolves to (0 when stale)
	int sub_10252240();	// same as sub_102521f0 (stub 0x100011f4)
	char *sub_10252120(int a, int index);	// stub 0x1000aaba: the record `index` of the list slot 347(a) counts
	void sub_10254cd0(int a);	// stub 0x100074f5
	void sub_1024edc0();	// prints the weapon's activity translation table (base activity, weapon activity, required) with Msg
	bool sub_10253b40(int a);	// true when the ammo type at +0x744 + a * 4 is not negative
	bool sub_10253b70(int a, int b, int c, int d);	// slot 315 worker: when slot 312 allows and the owner (sub_102521f0) exists: with an AI object at owner+0xa8 hands it d and stores c at +0x854, else stores -1 there and arms the timer at owner+0x1564 (curtime + const); clears bit 6 of +0x19c and starts slot 333 with 0xe (AI object) or 0xf; returns true
	void sub_1040dcf0(CBaseEntity *pVictim, const float *pDir, void *pTrace);	// melee hit worker (a weapon subclass member, declared here for lack of its class): builds a 0x4c byte damage info (default constructor 0x101c2690; direction pDir, the three floats at pTrace+0xc, this weapon, its owner, scale 1.0f, type 0x20000001), hands it to pVictim's DispatchTraceAttack (sub_100a7d00), applies the queued damage (sub_101c2c60), slot 307(0xc0), then arms the times at +0x924 (curtime + 0.5) and +0x918 (curtime + 0.25)
	CWeaponRollValue sub_10256350();	// builds the roll result record (owner, this, the 16 byte record of the current roll slot at +0x7a0, 6) and returns its printed value
	CWeaponRollValue sub_102563f0(CUnknown101d8a70 *pRecordOut, int n);	// like sub_10256350 for the roll n: also copies the roll result record to pRecordOut when that is set
	void sub_10255c30(void *pKeys);	// looks the first space separated word of the key's string up in the global name table (0x1073a330) and stores the id of the matching record (-1 when none) at +0x24d0 of the owner object
	bool sub_100ab020(int a, void *pEdict, int c, int d, int e);	// CBaseEntity::vfunc86 (stub 0x1000e002), called directly by vfunc86
	bool sub_10254b00(int a);	// "can start the reload": false without an owner, without ammo (owner ammo count of the type at +0x744, unless the byte +0x89a is set) or while the owner's info block has +0x4fee8 set; with something to load starts it (sub_10254cd0(a), slot 333(10, 3, 0, 0, 0, 0), byte +0x898 = 1) and returns true, else re-arms the next attack time (slot 311 + a constant) once the pending flags are set

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
