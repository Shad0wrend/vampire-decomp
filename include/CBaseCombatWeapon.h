// CBaseCombatWeapon: base of every carryable weapon.
// Only the vtable slots that decompiled code needs are given their real names,
// the others are placeholders that keep the slot indices of the game's primary
// vtable. The vtable has 372 slots.
// New method declarations can go into CBaseCombatWeapon_ext.h (included at the end of the method list) so that
// workers do not overwrite each other's edits of this large file.
#pragma once

#include "Vector.h"
#include "CWeaponAnimBase.h"

struct CBaseCombatWeaponMembers	// stands for the construction of CBaseCombatWeapon's members with constructors (CVDmg_t[3] at +0x77c, handles at +0x874 / +0x878 / +0x88c, COutputEvent at +0x8e0 / +0x8f8) until the class is modelled past 0x898; its constructor is defined inline in the CBaseCombatWeapon constructor's source
{
	CBaseCombatWeaponMembers();
	char m_pad[4];
};

struct CWeaponHolder_t;
struct CWeaponOwner;
class CUnknown101d8a70;
class CBaseEntity;
class CBaseCombatCharacter;

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

class CBaseCombatWeapon : public CWeaponAnimBase
{
public:
	// slots 0..9
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual CBaseCombatWeapon *vfunc5(unsigned int flags); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	// slots 10..279
	CBCW_V10(1) CBCW_V10(2) CBCW_V(30) CBCW_V(31) CBCW_V(32) CBCW_V(33) virtual int vfunc34(CBaseEntity *pOther); virtual int vfunc35(CBaseEntity *pOther); CBCW_V(36) CBCW_V(37) CBCW_V(38) CBCW_V(39) CBCW_V10(4) CBCW_V10(5) CBCW_V10(6) CBCW_V10(7)
	virtual void *vfunc80(); virtual int vfunc81(); virtual void *vfunc82(); CBCW_V(83) CBCW_V(84) CBCW_V(85)
	virtual bool vfunc86(int a, void *pEdict, int c, int d, int e);	// "ShouldTransmit"-like (CBaseEntity::vfunc86 for a weapon): true while the force-transmit time at +0x90 is in the future or the viewer is the owner's player / the player using the owner; false for a transmit decision on the owner's team states 0 / 1 (+0x8b0); else the entity version
	CBCW_V(87) CBCW_V(88) CBCW_V(89)
	CBCW_V(90) CBCW_V(91) CBCW_V(92) CBCW_V(93) CBCW_V(94) CBCW_V(95) CBCW_V(96)
	virtual CBaseEntity *vfunc97();	// "GetOwnerEntity"
	CBCW_V(98) CBCW_V(99)
	CBCW_V(100) CBCW_V(101) CBCW_V(102) CBCW_V(103) CBCW_V(104)
	virtual void vfunc105(const char *pszName);
	CBCW_V(106) CBCW_V(107) CBCW_V(108) CBCW_V(109)
	CBCW_V(110) CBCW_V(111) CBCW_V(112) CBCW_V(113) CBCW_V(114) CBCW_V(115) CBCW_V(116) virtual unsigned int vfunc117(); CBCW_V(118) CBCW_V(119)
	CBCW_V(120) CBCW_V(121) CBCW_V(122) CBCW_V(123)
	virtual int vfunc124();	// slot 124 \"CBaseCombatWeapon::DrawDebugTextOverlays\" (function 0x10255dd0): CBaseEntity's lines (sub_100a02b0), then with bit 0 of +0x224 the lines \"Type: %s\", \"Worth: %d\" and, per active attack record of the owner, \"AttackRate: %.2f\", \"Damage: %s\", \"BotchTable: %s\"; returns the next free line
	CBCW_V(125) CBCW_V(126) virtual int vfunc127(int); CBCW_V(128) CBCW_V(129)
	virtual void vfunc130(void *pArg); CBCW_V(131) CBCW_V(132) CBCW_V(133) CBCW_V(134) CBCW_V(135) CBCW_V(136) CBCW_V(137) CBCW_V(138) CBCW_V(139) CBCW_V10(14) CBCW_V10(15) CBCW_V10(16)
	virtual void vfunc170(const Vector *pVec);	// asked by vfunc269 with the scaled direction
	CBCW_V(171) CBCW_V(172) virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value); CBCW_V(174) CBCW_V(175) CBCW_V(176) CBCW_V(177) CBCW_V(178) CBCW_V(179)
	CBCW_V(180) CBCW_V(181) CBCW_V(182) CBCW_V(183) CBCW_V(184) CBCW_V(185) CBCW_V(186)
	virtual CBaseEntity *vfunc187();	// "CBaseCombatWeapon::Respawn": creates a new entity of the weapon's class at the game rules' respawn spot
	CBCW_V(188) CBCW_V(189)
	CBCW_V10(19)
	CBCW_V10(20) CBCW_V10(21)
	CBCW_V(220) virtual float *vfunc221();	// "GetAngles"
	CBCW_V(222) CBCW_V(223) CBCW_V(224) CBCW_V(225) CBCW_V(226) CBCW_V(227) CBCW_V(228) CBCW_V(229)
	CBCW_V10(23) CBCW_V10(24)
	virtual float vfunc250(int a); CBCW_V(251) CBCW_V(252) CBCW_V(253) CBCW_V(254) CBCW_V(255) CBCW_V(256) CBCW_V(257) virtual void vfunc258(float a, int b); CBCW_V(259)
	CBCW_V(260) CBCW_V(261) CBCW_V(262) CBCW_V(263) CBCW_V(264) CBCW_V(265) CBCW_V(266) virtual char vfunc267(); virtual char vfunc268();
	virtual void vfunc269(CBaseCombatWeapon *pOther, Vector vecDir);	// scales vecDir by the value slot 1 of the global at 0x1070b244 reports for the current roll slot (sub_102517e0) and, when that is not zero, hands it to slot 170 of pOther
	virtual void vfunc270(struct CGameTrace *pHit, void *pInfo); CBCW_V(271)
	virtual char *vfunc272();
	virtual char *vfunc273();
	CBCW_V(274) virtual int vfunc275(int a); virtual int vfunc276(unsigned int index);	// slot 276: the int in the 0x1093c byte record `index` of the table at +0x2670 of the object 0x10010ea6 returns
	virtual bool vfunc277(int a);	// asked by vfunc280 with the ammo slot index
	virtual float vfunc278();	// CWeaponGravityGun: the pull strength of the held object (the owner's stat 0x1a divided by the physics object's mass), -1.0f without one
	virtual char vfunc279();
	// slots 280..371
	virtual bool vfunc280(int a);	// asked by CBaseCombatCharacter::GetBestRangedWeapon with 0
	CBCW_V(281) virtual bool vfunc282();	/* slot 282: a boolean answer in al (CWeaponMelee override 0x103e4410 returns false) */
	virtual bool vfunc283(CBaseEntity *pTarget);	// CWeaponMelee: true when pTarget answers slot 158, the weapon has an owner other than pTarget and the owner's centre (slot 192) is close to pTarget's
	virtual bool vfunc284(void *a, void *b, void *c, int d, int e);
	virtual void *vfunc285();	// CWeaponGravityGun: the entity of the held-object handle at +0x918, else sub_1014a1b0
	CBCW_V(286) CBCW_V(287) CBCW_V(288) virtual int vfunc289();	/* slot 289: returns -1 (0x10149d00: or eax,-1) */
	virtual int vfunc290(); CBCW_V(291) virtual void vfunc292(CBaseEntity *pEntity); virtual int vfunc293(); CBCW_V(294) CBCW_V(295) virtual int vfunc296();
	virtual void vfunc297(int value);
	virtual void vfunc298(CBaseEntity *pOwner, int unused);	// slot 298: the weapon is handed over to pOwner:
	void sub_10252ea0(CBaseEntity *pOwner, float unused);	// body of vfunc298 (0x10252ea0) as a plain member, for float-signature forwarders move type 11, solid flag 8 removed and 4 added (scope traced), aim entity and owner handle (+0x88c) set, time stamps at +0x730 = curtime, touch function cleared, model by the owner's sex, owner's inventory told
	virtual void vfunc299(const float *pVelocity);	// "CBaseCombatWeapon::Drop"-like: the owner gives the weapon up; the weapon becomes a physics-less dropped item (move type 6) that gets pVelocity
	CBCW_V(300) virtual int vfunc301(CBaseEntity *pPlayer);	// always true; stores the state at +0x8b0: 0x40 or 2 when pPlayer holds this weapon as its active one (by the byte at pPlayer+0x20a8), else 1
	virtual char vfunc302();
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
	virtual char vfunc313(); CBCW_V(314)
	virtual bool vfunc315();
	virtual char vfunc316(int a);	// slot 316: clears the byte at +0x898, slot 307(0xde) when a is set, arms the owner's timer at +0x1564 (curtime + the active weapon's sequence duration) and starts slot 333 with 0x12 (owner AI object) or 0x13
	virtual int vfunc317(); CBCW_V(318) CBCW_V(319)
	CBCW_V(320) CBCW_V(321) CBCW_V(322) virtual void vfunc323();	// "FinishReload": with an owner (sub_102521f0): a pending reload (byte at +0x8c8) is cancelled through sub_10254cd0(0xc3); else for both ammo slots the clip (+0x74c + i * 4) is refilled from the owner's ammo count (not above slot 275's capacity); then clears the bytes at +0x898 / +0x899 / +0x89a
	CBCW_V(324) virtual bool vfunc325();	/* slot 325: a boolean answer in al (CWeaponIArmor override 0x103f4070 returns false) */ CBCW_V(326) CBCW_V(327)
	virtual int vfunc328();
	CBCW_V(329) virtual int vfunc330(); virtual const Vector &vfunc331(); CBCW_V(332)
	virtual void vfunc333(int a, int b, int c, int d, int e, int f);
	virtual void vfunc334(int a, int b);	// walks the slot 347(a) records (sub_10252120(a, i)) and tells the sound/overlay object at 0x1070b248 about each: with the record flag (+0x90) set only when the owner exists (type 6), else with b, for the owner's or the weapon's edict
	CBCW_V(335) CBCW_V(336)
	virtual float vfunc337(int a, int b);
	virtual void vfunc338(int a, int b);	// "CBaseCombatWeapon::Weapon_SetActivity"-like: called by CBaseCombatCharacter::Weapon_SetActivity with its two arguments (b is a float's bits: the duration the sequence is stretched to)
	CBCW_V(339)
	CBCW_V(340) virtual void vfunc341(CBaseEntity *pPlayer);	// the weapon is picked up by pPlayer: its move children go (sub_1012c900), it joins the player's list at +0x8e0 (or +0x8f8 without the player's object at +0xa8), slot 225, becomes a non-solid item (solid flag 4 added, solid flags and solid type 0)
	virtual int vfunc342(int a);	// the owner object (sub_102517b0) + 0x2188
	virtual int vfunc343();
	virtual int vfunc344();	// the owner object (sub_102517b0) + 0x2408
	virtual int vfunc345();	// the weapon's weight (compared by CMultiplayRules::vfunc19)
	CBCW_V(346) virtual int vfunc347(int a); virtual const char *vfunc348();	/* slot 348: the item's name (e.g. "item_p_occult_regen"; asked by the vendor lookup sub_10324190 and compared with _strcmpi) */ virtual int vfunc349();
	CBCW_V(350) CBCW_V(351) virtual int vfunc352(); CBCW_V(353) CBCW_V(354) virtual int vfunc355(); CBCW_V(356) CBCW_V(357) CBCW_V(358) CBCW_V(359) virtual unsigned int vfunc360();	// the weapon's type flags (bits 13 and 14 mark ranged weapons)
	CBCW_V(361)
	virtual CWeaponActivityRecord *vfunc362();	// the weapon's activity translation table
	virtual int vfunc363();	// the number of records of that table
	virtual void vfunc364(int a, int b, int c);
	virtual int vfunc365(int a, float b, float c);	// the activity-like index for a shot: 0x40 without a loaded clip (+0x74c), 8 below the minimum range, 0x5f below the float at +0x8b8, 0x60 above the one at +0x8c0, 0x61 for a small b, else 0x4f when sub_10252410(0) holds
	virtual int vfunc366(int a, int b, int c);
	virtual int vfunc367(int a, float b, float c);	// CWeaponMelee: forwards to sub_103ea7e0 with the constant 0x4b
	virtual int vfunc368(int a, int b, int c); virtual void vfunc369(int a);
	virtual void vfunc370(int *event, CBaseCombatWeapon *other);
	virtual char vfunc371();	// slot 371: a boolean answer in al (asked by Inventory_Can_Insert of the weapon already owned)
	CBaseCombatWeapon();	// 0x10250ac0 (stub 0x10011b8f): the weapon base constructor, run first by the derived weapons' constructors
	void sub_102500d0();	// helper: when g_1070ba0c->vfunc48(this) returns 1, tail-calls vfunc187()
	void sub_102507b0();
	void sub_10250c50();	// the destructor body (called by vfunc5): vtable, releases the object at +0x8dc through the global at 0x10723940 (slot 23), sub_10250560(this), destroys the two lists at +0x8f8 / +0x8e0 (sub_100cd2d0) and the three 0x44 byte CVDmg_t records at +0x77c (sub_101fa680, last first), then the CBaseAnimating destructor body
	CWeaponOwner *sub_102517b0();	// the weapon's owner (player) object
	int *sub_102517e0();	// the weapon's current roll slot index (static fallback record when none matches)
	unsigned char sub_102585f0();	// true when the current roll slot's record dword at +0x1c0 is 9 or 10
	CWeaponOwner *sub_10252290();	// resolves the owner handle at +0x88c (0 when stale)
	void sub_102564b0();	// when the owner handle resolves twice, slot 385(this, 0, 0) of the object at +0xa8 of the resolved owner
	void *sub_102521f0();	// the dword at +0x9c of the entity the owner handle at +0x88c resolves to (0 when stale)
	CBaseEntity *sub_1040f080(const Vector *pCenter, const Vector *pForward, float flMin, float flMax, char bFlag);	// 0x1040f080 (ret 0x14): searches the 256 entities in the box around pCenter for a "prop_combine_ball" in view (dot with pForward, trace mask 0x46004003) and returns the closest, 0 when none
	int sub_10252240();	// same as sub_102521f0 (stub 0x100011f4)
	char *sub_10252120(int a, int index);	// stub 0x1000aaba: the record `index` of the list slot 347(a) counts
	void sub_10254cd0(int a);	// stub 0x100074f5
	int sub_100ac4e0(int a, int b, const char *pszContext);	// CBaseEntity::sub_100ac4e0 (ThinkSet), called directly on the weapon
	void sub_1024edc0();	// prints the weapon's activity translation table (base activity, weapon activity, required) with Msg
	bool sub_10253b40(int a);	// true when the ammo type at +0x744 + a * 4 is not negative
	bool sub_10253b70(int a, int b, int c, int d);	// slot 315 worker: when slot 312 allows and the owner (sub_102521f0) exists: with an AI object at owner+0xa8 hands it d and stores c at +0x854, else stores -1 there and arms the timer at owner+0x1564 (curtime + const); clears bit 6 of +0x19c and starts slot 333 with 0xe (AI object) or 0xf; returns true
	void sub_1040dcf0(CBaseEntity *pVictim, const float *pDir, void *pTrace);	// melee hit worker (a weapon subclass member, declared here for lack of its class): builds a 0x4c byte damage info (default constructor 0x101c2690; direction pDir, the three floats at pTrace+0xc, this weapon, its owner, scale 1.0f, type 0x20000001), hands it to pVictim's DispatchTraceAttack (sub_100a7d00), applies the queued damage (sub_101c2c60), slot 307(0xc0), then arms the times at +0x924 (curtime + 0.5) and +0x918 (curtime + 0.25)
	CWeaponRollValue sub_10256350();	// builds the roll result record (owner, this, the 16 byte record of the current roll slot at +0x7a0, 6) and returns its printed value
	CWeaponRollValue sub_102563f0(CUnknown101d8a70 *pRecordOut, int n);	// like sub_10256350 for the roll n: also copies the roll result record to pRecordOut when that is set
	void sub_10255c30(void *pKeys);	// looks the first space separated word of the key's string up in the global name table (0x1073a330) and stores the id of the matching record (-1 when none) at +0x24d0 of the owner object
	int sub_10255cf0();	// the position of the owner's inventory section (key at +0x24d0 of the owner object) in the section table, minus one; DevMsg "Bad inventory section" and 0 when the owner has none
	bool sub_100ab020(int a, void *pEdict, int c, int d, int e);	// CBaseEntity::vfunc86 (stub 0x1000e002), called directly by vfunc86
	bool sub_10254b00(int a);	// "can start the reload": false without an owner, without ammo (owner ammo count of the type at +0x744, unless the byte +0x89a is set) or while the owner's info block has +0x4fee8 set; with something to load starts it (sub_10254cd0(a), slot 333(10, 3, 0, 0, 0, 0), byte +0x898 = 1) and returns true, else re-arms the next attack time (slot 311 + a constant) once the pending flags are set
	char sub_102525e0(CBaseCombatCharacter *pOwner);	// true when the global ammo table is available and its entry for the ammo type at +0x744 equals the ammo count the owner (pOwner, else the weapon's owner character) holds of that type; false without an ammo type, owner or table
	char sub_10252410(int a);	// stub 0x10008341, called directly by vfunc365 with 0

#include "CBaseCombatWeapon_ext.h"

	char m_pad004[0x17c - 4];
	float m_flNextThink17c;	// 0x17c: the next think time (curtime + 0.1 for the drop sound check)
	char m_pad180[0x19c - 0x180];
	unsigned int m_nEffectFlags19c;	// 0x19c: bit 6 (0x40) = the "fresh" flag sub_1024fe00 plays the charge sound for and clears (sets bit 1)
	union { char m_pad1a0[0x26c - 0x1a0]; struct { char m_pad1a0b[0x224 - 0x1a0]; unsigned int m_fDebugOverlays224; }; };	// 0x224: the debug overlay flags (bit 0 = the weapon text overlay of vfunc124)
	const char *m_pszName26c;	// 0x26c: the entity name (null when empty; g_106b8540 stands in for the scope trace)
	char m_pad270[0x2e0 - 0x270];	// 0x270: the embedded CCollisionProperty (view with (CCollisionProperty *)((char *)this + 0x270))
	CWeaponHolder_t *m_pHolder; // 0x2e0
	char m_pad2e4[0x65c - 0x2e4];
	char m_b65c;
	char m_b65d;
	char m_pad65e[0x6f0 - 0x65e];
	int m_nSequence;	// 0x6f0
	float m_flPlaybackRate;	// 0x6f4
	int m_n06f8;	// 0x6f8
	char m_pad6fc[0x730 - 0x6fc];
	float m_flTimes730[2];	// 0x730: time stamps, both set to the current time when the weapon changes hands
	char m_pad738[0x740 - 0x738];
	CBaseCombatWeaponMembers m_members740;	// 0x740
	int m_nAmmoType;	// 0x744
	union { char m_pad748[0x88c - 0x748]; struct { char m_pad748b[0x754 - 0x748]; const char *m_pszModelName754; char m_pad758[0x77c - 0x758]; char m_Dmg77c[3][0x44]; char m_pad848[0x87c - 0x848]; int m_n87c; int m_n880; int m_n884; }; };	// 0x754: the weapon's model name; 0x77c: three CVDmg_t records of 0x44 bytes (view with (CVDmg_t *)m_Dmg77c)
	unsigned int m_hOwner; // 0x88c
	int m_nViewModelIndex;	// 0x0890
	float m_f894;
	void sub_10013a57();	// as in CPhysForce (transplant)
	char sub_10256220();	// provisional, like vfunc304 (transplant)
	char sub_10256250();	// provisional, like vfunc304 (transplant)
	char sub_10257200();	// provisional, like vfunc304 (transplant)
	void sub_10258620(int a);	// stub 0x1000519b
	char sub_10256200();	// stub 0x1000911a: asked by CBasePlayer::vfunc457 of the weapon it picks up
};
