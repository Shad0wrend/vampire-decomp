// CBasePlayer: the player entity.
// Barely recovered yet: only the members decompiled code needs are named, the
// rest is padding that keeps their offsets. The vtable is modelled as placeholder
// slots up to slot 468 (the ones the code calls are typed).
// New method declarations can go into CBasePlayer_ext.h (included at the end of the method list) so that
// workers do not overwrite each other's edits of this large file.
#pragma once

#include "Vector.h"
#include "utlvector.h"
#include "CGlobalEmailRec.h"

class CBaseEntity;
class CBaseCombatWeapon;
class CBasePlayer;
struct inputdata_t;
struct melee_dice_roll_result;

struct CBasePlayerHandleVec	// a CUtlVector<EHANDLE>
{
	unsigned int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	unsigned int *m_pElements;
};

struct CBasePlayerSub270	// small polymorphic object embedded at +0x270
{
	virtual void v0();
	virtual int vfunc1();
	virtual int vfunc2();
};

#define CBP_V1(p) virtual void p();
#define CBP_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CBP_V100(p) CBP_V10(p##0) CBP_V10(p##1) CBP_V10(p##2) CBP_V10(p##3) CBP_V10(p##4) \
	CBP_V10(p##5) CBP_V10(p##6) CBP_V10(p##7) CBP_V10(p##8) CBP_V10(p##9)

struct CBasePlayerVehicle	// the vehicle object at +0x20fc; slots 1, 2, 4, 5 and 10 are typed
{
	virtual void vv0();
	virtual CBaseEntity *vfunc1();	// the vehicle's entity
	virtual int vfunc2(int a);	// slot 2: whether the vehicle knows the given role (0 = not yet)
	virtual void vv3();
	virtual void vfunc4(int role, CBasePlayer *pPlayer);	// slot 4: hands the role to the vehicle for the player
	virtual char vfunc5(int role);	// slot 5: whether the vehicle wants the player to be controlled by it for the role
	virtual void vv6(); virtual void vv7(); virtual void vv8(); virtual void vv9();
	virtual void vfunc10(CBasePlayer *pPlayer);
};

struct CBasePlayerPart	// a view object (pointer at +0x2104 / +0x2108); slots 21 and 35 are typed
{
	CBP_V10(qa) CBP_V10(qb) CBP_V1(qc)
	virtual void vfunc21(int a);
	CBP_V10(qd) CBP_V1(qe0) CBP_V1(qe1) CBP_V1(qe2)
	virtual void vfunc35(int a);
};

struct CBasePlayerPartOwner	// the object at +0x2100; only slot 5 is typed
{
	CBP_V1(pa0) CBP_V1(pa1) CBP_V1(pa2) CBP_V1(pa3) CBP_V1(pa4)
	virtual void vfunc5(CBasePlayerPart *pPart);
};

class CGlobalEntityList_Ent;

struct CBasePlayerQuestRecord	// a saved quest record (0x40 bytes)
{
	char m_pad00[0x30];
	int m_nQuest30;	// the quest index
	int m_nOrder34;
	int m_nStep38;
	unsigned char m_bFlag3C;
	char m_pad3D[3];
};

struct CBasePlayerAward	// an experience award the player was given (0x34 bytes: the award's name, compared with Q_strnicmp)
{
	char m_szName[0x30];
	int m_n30;
};

struct CBasePlayerFadeRec	// a saved fade (0x10 bytes)
{
	char m_bType;
	EHANDLE m_hEnt;
	float m_flTime;
	float m_flValue;
};

class CBasePlayer
{
public:
	// slots 0..63
	CBP_V10(sa0) CBP_V10(sa1) CBP_V1(sa20) CBP_V1(sa21) CBP_V1(sa22) CBP_V1(sa23) virtual void vfunc24(CBaseEntity *pOther); CBP_V1(sa25) CBP_V1(sa26) CBP_V1(sa27) CBP_V1(sa28) CBP_V1(sa29) CBP_V10(sa3) CBP_V10(sa4) CBP_V10(sa5) CBP_V1(sa6) CBP_V1(sa7) CBP_V1(sa8) CBP_V1(sa9)
	virtual void vfunc64(float *pVec);
	// slots 65..220
	CBP_V10(sb0) CBP_V10(sb1) CBP_V1(sb20) CBP_V1(sb21) CBP_V1(sb22) CBP_V1(sb23) CBP_V1(sb24) CBP_V1(sb25) CBP_V1(sb26) CBP_V1(sb27) CBP_V1(sb28)
	virtual int vfunc94();	// slot 94 (+0x178), CBaseEntity::vfunc94: the move type (10 = the value CWeaponUnarmed::vfunc319 sends the view message 0x4c for)
	CBP_V10(sb3) CBP_V10(sb4) CBP_V10(sb5) CBP_V10(sb6)
	CBP_V1(sb70) CBP_V1(sb71) CBP_V1(sb72) CBP_V1(sb73) CBP_V1(sb74) CBP_V1(sb75) CBP_V1(sb76) CBP_V1(sb77) CBP_V1(sb78)
	virtual void vfunc144(const void *pArg);	// slot 144: takes a damage info (CUnknown101c26d0, the force vector at +4); sub_10170d60 hands it a random force
	virtual int vfunc145();	// slot 145: the int handed to sub_102699e0 as its second argument
	CBP_V1(sb81) CBP_V1(sb82) CBP_V1(sb83) CBP_V1(sb84) CBP_V1(sb85) CBP_V1(sb86) CBP_V1(sb87) CBP_V1(sb88) CBP_V1(sb89) CBP_V1(sb90) CBP_V1(sb91) CBP_V1(sb92) CBP_V1(sb93) CBP_V1(sb94) CBP_V1(sb95) CBP_V1(sb96) virtual char vfunc162(); CBP_V1(sb98) CBP_V1(sb99)
	CBP_V1(sc00) CBP_V1(sc01) CBP_V1(sc02) CBP_V1(sc03)	// slots 165..168
	virtual void vfunc169(const Vector *pPunch);	// slot 169: takes the pointer of a view punch angle
	virtual void vfunc170(const Vector *pOffset);	// slot 170: sub_100b3640(1), then sub_100b2e30 with the vector at +0x3d4 plus pOffset
 CBP_V1(sc06) CBP_V1(sc07) CBP_V1(sc08) CBP_V1(sc09)	// slots 170..174
	CBP_V1(sc10) CBP_V1(sc11) CBP_V1(sc12) CBP_V1(sc13) CBP_V1(sc14)	// slots 175..179
	virtual void vfunc180();	// slot 180: view parts released from the physics environment, then CBaseCombatCharacter::vfunc180
	CBP_V1(sc16) CBP_V1(sc17) CBP_V1(sc18) CBP_V1(sc19)	// slots 181..184
	void sub_1000b0c8();	// CBaseCombatCharacter::vfunc180, called directly
	CBP_V1(sc20) CBP_V1(sc21) CBP_V1(sc22) CBP_V1(sc23) CBP_V1(sc24) CBP_V1(sc25) CBP_V1(sc26)
	virtual Vector vfunc192();	// "EyePosition"-like getter returning the vector by value (hidden pointer, ret 4)
	virtual Vector vfunc193();	// slot 193 \"EyePosition\" (by value, hidden result pointer)
	virtual float *vfunc194();	// slot 194 "GetAbsAngles"-like: the player's angles (+0x206c) in world space: with a live move parent (handle at +0x25c) its matrix (+0x130, slot 98 first when bit 11 of its flags +0x268 is set) times the angles' matrix, turned back into angles in a static; else the angles themselves
	virtual float *vfunc195(); CBP_V1(sc31) CBP_V1(sc32) CBP_V1(sc33) CBP_V1(sc34) CBP_V1(sc35) CBP_V1(sc36) CBP_V1(sc37) CBP_V1(sc38) CBP_V1(sc39) CBP_V1(sc40) CBP_V1(sc41) CBP_V1(sc42) CBP_V1(sc43)
	virtual CBaseEntity *vfunc209();	// slot 209: an entity (the player's ground / move parent entity); null when none
	CBP_V1(sc45) CBP_V1(sc46) CBP_V1(sc47) CBP_V1(sc48) CBP_V1(sc49)
	CBP_V1(sd0) CBP_V1(sd1)
	virtual int vfunc217(const void *pName, int a);
	CBP_V1(sd3) CBP_V1(sd4)
	virtual float *vfunc220();	// "CBaseEntity::GetOrigin"
	virtual float *vfunc221();
	// slots 222..402
	CBP_V10(se0) CBP_V10(se1) CBP_V10(se2) CBP_V10(se3) CBP_V10(se4) CBP_V10(se5) CBP_V10(se6) CBP_V1(se70) CBP_V1(se71) CBP_V1(se72) CBP_V1(se73) CBP_V1(se74) CBP_V1(se75) CBP_V1(se76) CBP_V1(se77)
	virtual void vfunc300(CBaseEntity *pVictim, int b, char bQuiet);	// slot 300 (ret 0xc), CBaseCombatCharacter::vfunc300 (sub_1032c580 stub 0x100051b9) first with the same arguments; then, when pVictim says sub_1033d580(this), sub_1022d9d0(this, 3); with the active weapon's slot 360 flags having 0x18000 and the character's stat list of type 3 value of stat 9 above 0 the Potence death blow effect (two D_Potence_DeathBlow emitters through CDisciplineParticle::sub_10050d90); then, unless bQuiet, a criminal level step: sub_1017e150(4, -1.0f, sub_101d3730("Event_TookLife %s", pVictim ? pVictim->GetDebugName() : "UNKNOWN"))
	CBP_V1(se79) CBP_V10(se8)
	CBP_V1(se90) CBP_V1(se91) CBP_V1(se92) CBP_V1(se93)
	virtual void vfunc316(CGlobalEntityList_Ent *pEnt, int a, int b);	// slot 316: with an entity: unless the entity of the handle at +0x1c58 is live, answers slot 158 and differs from pEnt, takes over pEnt's handle into +0x1c5c / +0x1c60 while the activity at +0xff0 is 1 or 5 and sub_1015fd50() is -1
	CBP_V1(se95)
	virtual bool vfunc318(int a, melee_dice_roll_result *pRoll, int c);	// slot 318: false without a roll; when the roll hit (AttackHit) adds the soak dice of the character's first stat list (stat 2) to it and picks the reaction activity by the roll's level (level 3: 0x1156 with a 1.0f pause, else 0x52 with 0.3f); starts the activity (sub_101644f0), copies +0x1488 to +0x6f4 and arms the timer at +0x1564; true
	CBP_V1(se97) CBP_V1(se98) CBP_V1(se99)
	CBP_V1(sf00) CBP_V1(sf01) CBP_V1(sf02) CBP_V1(sf03)
	virtual bool vfunc326(int a, CBaseEntity *pOther);	// slot 326: when the active weapon's type flags (slot 360) have bit 13 or 14, false unless pOther is set and its character template (default stat item) has the byte at +0xa0; else CBaseCombatCharacter::vfunc326(a, pOther)
	CBP_V1(sf05) virtual char vfunc328(); CBP_V1(sf07) CBP_V1(sf08) CBP_V1(sf09)
	CBP_V1(sf10) CBP_V1(sf11)
	virtual bool vfunc334(int a, int b);	// slot 334: whether the player may act with the given kind of action (4 = use): the use entity answering 300 allows it; a dialog partner, a fade, the use entity, a local-player state or the discipline record forbid it; else CBaseCombatCharacter::vfunc334
	CBP_V1(sf13) CBP_V1(sf14) CBP_V1(sf15) CBP_V1(sf16) CBP_V1(sf17) CBP_V1(sf18) CBP_V1(sf19) CBP_V10(sf2) CBP_V1(sf30) CBP_V1(sf31) CBP_V1(sf32) CBP_V1(sf33) CBP_V1(sf34) CBP_V1(sf35) CBP_V1(sf36) CBP_V1(sf37)
	virtual int vfunc359(CBaseEntity *pEnt);	// slot 359: 3 while the frenzy count (+0x146c) is positive, -1 without an entity, else by the game rules' relation (slot 64): 5 / 1 / 2
	CBP_V1(sf39) CBP_V10(sf4) CBP_V10(sf5)
	virtual bool vfunc382(CBaseCombatWeapon *pWeapon);	// slot 382 "Weapon_CanUse": true unless the weapon is of the two type flags 0x18000 and the player already owns a weapon of its class, then the player object at +0xa8 is sent message 0x4e with the weapon owner's text and false is returned
	virtual void vfunc383(CBaseEntity *pWeapon, char bNoSwitch);	// slot 383 "Weapon_Equip": CBaseCombatCharacter::vfunc383, and (unless bNoSwitch) a new holder entity for the weapon's class (handle at +0x1c64) plus the game rules' FShouldSwitchWeapon / slot 388 switch
	CBP_V1(sf62) CBP_V1(sf63) CBP_V1(sf64) CBP_V1(sf65)
	virtual char vfunc388(CBaseEntity *pWeapon, int a);	// slot 388: switches to the given weapon (answers in al: false when it could not, CWeaponUnarmed::vfunc319 tests it)
	CBP_V1(sf67) CBP_V1(sf68) CBP_V1(sf69)
	CBP_V10(sf7) CBP_V1(sg0)
	virtual void vfunc403();
	CBP_V1(sh0) CBP_V1(sh1) CBP_V1(sh2)
	virtual void vfunc407();
	virtual void vfunc408();
	// slots 409..447
	virtual int vfunc409(); CBP_V1(si0b) CBP_V1(si0c)
	virtual bool vfunc412();
	CBP_V1(si0e) CBP_V1(si0f) CBP_V1(si0g) CBP_V1(si0h) virtual void vfunc417(int a, int b);
	virtual char vfunc418(int unused);	// slot 418: runs sub_101644f0(-1, 0, 0), then steps the activity at +0xff0 (0xf49 -> 0xf52 when the entity of the handle at +0xfe8 is gone; with the byte at +0x65c set 0xf40 -> 0xf49), true while it is 0xf52
	virtual char vslot419(int a); virtual char vslot420(int a);
	virtual char vfunc421(int unused);	// slot 421: false unless the byte at +0x65c is set; with a live character behind the handle at +0x1538 (and +0x153c set) builds a damage record sourced at this player and hands the character a one point damage info (stat 0xf set to the value of stat 0x11 of its active stat list), slot 144 and slot 403; true
	virtual char vslot422(int a); virtual char vslot423(int a); CBP_V1(si15) CBP_V1(si16) CBP_V1(si17)
	virtual void vfunc427();	// slot 427: hands the entity of the handle at +0x1538 (null while the dword at +0x153c is -1 or the handle is stale) to sub_10165790
	CBP_V1(si19)
	CBP_V1(si20) CBP_V1(si21) CBP_V1(si22) CBP_V1(si23) CBP_V1(si24) CBP_V1(si25) CBP_V1(si26) CBP_V1(si27) CBP_V1(si28)
	virtual void vfunc438(float flArg, int flags);	// slot 438: with flag bit 2 hands the eye position, vfunc145() and flArg to sub_102699e0
	virtual char vfunc439(); CBP_V1(sj1)
	virtual void vfunc441();	// slot 441: collects the player's weapons (or ammo types) the game rules (global 0x1070ba0c, slots 61 / 62) ask for into a local list, then slot 442(1)
	virtual void vfunc442(int a);
	virtual void vfunc443(int a);
	virtual void vfunc444();
	CBP_V1(sj6) CBP_V1(sj7) CBP_V1(sj8)
	virtual void vfunc448();
	// slots 449..467
	virtual void vfunc449(int a, int b);	// slot 449: called with (2, 0) by slot 434
	virtual void vfunc450();
	CBP_V1(sk0c)
	virtual bool vfunc452(const char *pszKey);	// slot 452 key handler: "vehicleRole" with two console arguments hands the role number to the vehicle at +0x20fc (leaving the vehicle first when it does not know the role yet)
	CBP_V1(sk0e) CBP_V1(sk0f) CBP_V1(sk0g)
	virtual void vfunc456();	// slot 456: when the entity of the handle at +0xea4 is live (and the active weapon, if any, answers slot 313), hands the entity's classname and its slot 296 value to slot 457
	virtual void vfunc457(const char *pszName, int a);
	virtual void vfunc458();	// slot 458: if the entity at +0x1538 is not set up, lets the vehicle at +0x20fc handle it, else picks the weapon call by the float at +0x1564
	virtual CBaseEntity *vfunc459(const char *pszName, int iSubType);	// slot 459 "GiveNamedItem": unless the player owns it already, creates the entity, places it at the player, flags it, sets its sub type, spawns it and lets the player pick it up
	CBP_V1(sl1) CBP_V1(sl2) CBP_V1(sl3) CBP_V1(sl4) virtual float vfunc464(); CBP_V1(sl6) virtual float vfunc466(); CBP_V1(sl8)
	virtual void vfunc468();	// registers the "player_stand" / "player_crouch" collision hulls (16x16x36 and -16,-16,0) for the sub-object at +0x270

	char m_pad0004[0x264];	// 0x0004 .. 0x0267
	unsigned int m_fFlags268;	// 0x0268: the entity flag word (bit 12 = attached to a parent)
	char m_pad026C[4];	// 0x026C .. 0x026F
	CBasePlayerSub270 m_sub270;	// 0x0270
	char m_pad0274[0x6c];	// 0x0274 .. 0x02DF
	int m_n02E0;
	char m_pad02E4[0x3b0 - 0x2e4];	// 0x02E4 .. 0x03AF
	Vector m_vec03B0;	// 0x03B0: the velocity
	Vector m_vec03BC;	// 0x03BC: the base velocity
	char m_pad03C8[0x3d4 - 0x3c8];	// 0x03C8 .. 0x03D3
	Vector m_vec03D4;	// 0x03D4
	int m_n03E0;	// 0x03E0: the move type
	char m_pad03E4[0x65c - 0x3e4];	// 0x03E4 .. 0x065B
	char m_b65c;	// 0x065C
	char m_pad065D[0x6f8 - 0x65d];	// 0x065D .. 0x06F7
	float m_f6f8;	// 0x06F8
	char m_pad06FC[0xea4 - 0x6fc];	// 0x06FC .. 0x0EA3
	unsigned int m_hEnt0EA4;	// entity handle
	EHANDLE m_hEnt0EA8;	// 0x0EA8: a second entity handle next to +0xea4 (CWeaponUnarmed::vfunc319 resolves both)
	char m_pad0EAC[0xfe8 - 0xeac];	// 0x0EA8 .. 0x0FE7
	unsigned int m_hDialogPartnerFE8;	// 0x0FE8: entity handle
	int m_nFEC;	// 0x0FEC
	int m_nFF0;	// 0x0FF0: the activity
	char m_pad0FF4[0x1040 - 0xff4];	// 0x0FF4 .. 0x103F
	unsigned int m_hUseEnt1040;	// 0x1040: entity handle
	int m_n1044;	// 0x1044: reset to -1 by the death handler (vfunc144)
	int m_n1048;	// 0x1048: 0 on death
	int m_n104C;	// 0x104C: 0 on death
	int m_n1050;	// 0x1050: 0 on death
	char m_pad1054[0x10dc - 0x1054];
	EHANDLE m_hEnt10DC;	// 0x10DC: entity handle
	EHANDLE m_hEnt10E0;	// 0x10E0: entity handle
	char m_pad10E4[0x146c - 0x10e4];
	int m_n146c;	// 0x146c: the frenzy count
	char m_pad1470[0x1475 - 0x1470];
	char m_b1475;
	char m_b1476;	// 0x1476: cleared by the death handler (vfunc144)
	char m_pad1477;
	float m_f1478;	// 0x1478: the time the fade of the feeding started / ends
	float m_f147C;	// 0x147C
	char m_pad1480[0x148c - 0x1480];	// 0x1480 .. 0x148B
	float m_f148C;	// 0x148C
	char m_pad1490[0x149c - 0x1490];	// 0x1490 .. 0x149B
	int m_h149C;	// 0x149C: the feeding target handle (-1 on death, vfunc144; CBaseCombatCharacter::m_h149c)
	int m_n14A0;	// 0x14A0: the blood pool (checked > 0 after the feeding steps)
	char m_pad14A4[4];	// 0x14A4 .. 0x14A7
	char m_b14A8;
	char m_pad14A9;
	char m_b14AA;	// 0x14AA: cleared by the death handler (vfunc144)
	char m_pad14AB;
	int m_n14AC;	// 0x14AC: -1 on death (vfunc144)
	int m_n14B0;	// 0x14B0
	int m_n14B4;	// 0x14B4
	char m_pad14B8[0x14dc - 0x14b8];	// 0x14B8 .. 0x14DB
	char m_b14DC;	// 0x14DC: cleared by the death handler (vfunc144)
	char m_pad14DD[0x1538 - 0x14dd];	// 0x14DD .. 0x1537
	unsigned int m_h1538;	// entity handle
	int m_n153C;
	int m_n1540;
	char m_pad1544[0x18];	// 0x1544 .. 0x155B
	unsigned int m_h155C;	// 0x155C: entity handle
	char m_pad1560[4];	// 0x1560 .. 0x1563
	float m_f1564;
	char m_pad1568[0x19b8 - 0x1568];	// 0x1568 .. 0x19B7
	float m_flFadeStart19B8;	// 0x19B8: when the fade began
	float m_flFadeDuration19BC;	// 0x19BC: its length (negative fades out)
	EHANDLE m_hFadeEnt19C0;	// 0x19C0
	char m_pad19C4[0x19cc - 0x19c4];	// 0x19C4 .. 0x19CB
	EHANDLE m_hFadeEnt19CC;	// 0x19CC
	float m_flFadeTime19D0;	// 0x19D0
	float m_flFadeValue19D4;	// 0x19D4
	char m_FadeStack19D8[0xc];	// 0x19D8: a CUtlVector<CBasePlayerFadeRec> (view FadeStack()), size at +0x19E4
	int m_nFade19E4;	// 0x19E4
	char m_pad19E8[0x19f6 - 0x19e8];	// 0x19E8 .. 0x19F5
	CUtlVector<CBasePlayerFadeRec> &FadeStack() { return *(CUtlVector<CBasePlayerFadeRec> *)m_FadeStack19D8; }
	bool m_b19F6;
	char m_b19F7;	// 0x19F7: set by sub_1015ef40
	float m_flExperience19F8;	// 0x19F8: the experience points gained (sub_1015f8b0 adds its first argument)
	float m_flExperience19FC;	// 0x19FC: the fraction towards the next 100 points (rolls over at 100.0f, the whole hundreds go to stat 0x22)
	char m_pad1A00[0x1a84 - 0x1a00];
	int m_n1A84;	// 0x1A84
	char m_pad1A88[0x1a94 - 0x1a88];
	int m_n1A94;	// 0x1A94
	char m_pad1A98[0x1b6c - 0x1a98];	// 0x1A98 .. 0x1B6B
	char m_b1B6C;	// 0x1B6C: cleared by the feeding handlers (vfunc380, vfunc422), set by vfunc419 / vfunc423
	char m_pad1B6D[3];
	int m_nRangeStart1B70;	// 0x1B70: low half of the value of the selected command slot (type 1)
	char m_bFlag1B74;	// 0x1B74
	char m_pad1B75[3];
	int m_nRangeEnd1B78;	// 0x1B78: high half of that value, minus one
	char m_pad1B7C[0x1c60 - 0x1b7c];	// 0x1B7C .. 0x1C5F
	EHANDLE m_hEnt1C60;	// 0x1C60: entity handle (the slot 167 object)
	char m_pad1C64[0x1cd8 - 0x1c64];	// 0x1C64 .. 0x1CD7
	unsigned int m_nCriminalLevelEnc;	// 0x1CD8, scrambled by the xor/and/add mask chain
	char m_pad1CDC[4];	// 0x1CDC .. 0x1CDF
	union {
		int m_n1CE0;
		float m_f1CE0;	// 0x1CE0: time the criminal level lapses (-1.0f bits = none)
	};
	char m_pad1CE4[0x1d68 - 0x1ce4];	// 0x1CE4 .. 0x1D67
	struct CBasePlayerQuestRecord *m_pQuestRecords1D68;	// 0x1D68: the saved quest records (0x40 bytes each)
	char m_pad1D6C[0x1d74 - 0x1d6c];
	int m_nQuestRecords1D74;	// 0x1D74: their count
	char m_pad1D78[4];	// 0x1D78 .. 0x1D7B
	CUtlVector<CBasePlayerAward> m_Awards1d7c;	// 0x1D7C: the experience awards the player was given (memory +0, size +0x0c, elements +0x10)
	char m_pad1D90[0x1da4 - 0x1d90];	// 0x1D90 .. 0x1DA3
	EHANDLE m_hPlaceholder1da4;

	float m_f1DA8;	// 0x1DA8: when the next random view punch is due
	int m_n1DAC;	// 0x1DAC: sent with the quest journal message
	EHANDLE m_hControllerNPC1db0;	// 0x1DB0: the NPC the player controls (GetControllerNPC)
	char m_pad1DB4[0x1dd0 - 0x1db4];	// 0x1DB4 .. 0x1DCF
	float m_f1DD0;	// 0x1DD0: curtime stamp (vfunc21 / vfunc22 / vfunc23, reset by sub_10178140)
	char m_pad1DD4[4];	// 0x1DD4 .. 0x1DD7
	float m_f1DD8;	// 0x1DD8: curtime stamp of the last slot 24 call
	float m_f1DDC;	// 0x1DDC: the attack meter (0..99)
	char m_pad1DE0[4];	// 0x1DE0 .. 0x1DE3
	float m_f1DE4;	// 0x1DE4
	float m_f1DE8;	// 0x1DE8
	char m_pad1DEC[0x1df4 - 0x1dec];	// 0x1DEC .. 0x1DF3
	char m_b1DF4;
	char m_pad1DF5[0x1dfc - 0x1df5];	// 0x1DF5 .. 0x1DFB
	EHANDLE m_hEnt1DFC;	// 0x1DFC: entity handle, cleared by sub_10183330
	char m_pad1E00[4];	// 0x1E00 .. 0x1E03
	unsigned int m_hEnt1E04;	// entity handle
	int m_n1E08;
	int m_n1E0C;
	char m_pad1E10[0x18];	// 0x1E10 .. 0x1E27
	CUtlVector<GLOBAL_EMAIL> m_GlobalEmail;	// 0x1E28: the global email flag records (0x240 bytes each)
	char m_pad1E3C[0x38];	// 0x1E3C .. 0x1E73
	unsigned int m_flags1E74;
	int m_n1E78;	// 0x1E78: 0 on death (vfunc144)
	char m_pad1E7C[0x3c];	// 0x1E7C .. 0x1EB7
	int m_nUseEdictIndex1EB8;	// engine index of the entity to notify (0 = none)
	char m_pad1EBC[4];	// 0x1EBC .. 0x1EBF
	char m_bNotifyUse1EC0;
	char m_pad1EC1[0x1efc - 0x1ec1];	// 0x1EC1 .. 0x1EFB
	Vector m_vec1EFC;	// 0x1EFC: a vector pair (reset together by sub_101711e0)
	Vector m_vec1F08;	// 0x1F08
	char m_pad1F14[0x2018 - 0x1f14];	// 0x1F14 .. 0x2017
	int m_aSlotType2018[10];	// 0x2018: kind of each of the ten command slots (0 = unused)
	int m_aSlotValue2040[10];	// 0x2040: value of each command slot (a name hash or packed range)
	int m_n2068;	// 0x2068: set to 1 on death (vfunc144)
	Vector m_vec206c;	// 0x206C: the view angles / target vector (stored by sub_10167030)
	char m_pad2078[0x2088 - 0x2078];
	unsigned int m_nFlags2088;	// 0x2088: the flag word (bit 0 tested by CWeaponUnarmed::vfunc319; see also vfunc436, sub_1016b090 'new buttons')
	void sub_1016b090(unsigned int buttons);	// button-state update: prev buttons -> +0x2094, new buttons -> +0x2088	// 0x2078 .. 0x208B
	unsigned char m_b208C;	// 0x208C
	char m_pad208D[0x20a8 - 0x208d];	// 0x208D .. 0x20A7
	char m_b20A8;
	char m_pad20A9[0x20e8 - 0x20a9];	// 0x20A9 .. 0x20E7
	int m_n20E8;	// 0x20E8: a message value, 0 on death (vfunc144 sends it with engine slot 67 when g_10726020 is set)
	char m_pad20EC[0x20f4 - 0x20ec];	// 0x20EC .. 0x20F3
	char m_b20F4;	// vehicle active flag
	char m_pad20F5[3];	// 0x20F5 .. 0x20F7
	unsigned int m_hVehicle;	// 0x20F8: handle of the vehicle's entity (-1 when none)
	CBasePlayerVehicle *m_pVehicle;	// 0x20FC
	CBasePlayerPartOwner *m_pPartOwner;	// 0x2100
	CBasePlayerPart *m_pPart2104;	// 0x2104
	CBasePlayerPart *m_pPart2108;	// 0x2108
	int m_nPartMode;	// 0x210C
	char m_pad2110[0x2148 - 0x2110];	// 0x2110 .. 0x2147
	float m_f2148;	// 0x2148: the next time of the random impulse (sub_10170d60)
	char m_pad214C[0x229a - 0x214c];
	char m_b229A;	// 0x229A
	char m_pad229B[0x22a8 - 0x229b];	// 0x229B .. 0x22A7
	float m_f22A8;
	float m_f22AC;
	float m_f22B0;
	char m_pad22B4[0x2304 - 0x22b4];	// 0x22B4 .. 0x2303
	int m_n2304;	// 0x2304: set while the player is held (sub_10177ba0 clears it after restoring the move type)
	char m_pad2308[0x23bc - 0x2308];	// 0x2308 .. 0x23BB
	CBasePlayerHandleVec m_SimulationList;	// 0x23BC (count at +0x23C8)
	char m_pad23D0[0x2454 - 0x23d0];	// 0x23D0 .. 0x2453
	unsigned char m_b2454;	// 0x2454
	char m_pad2455[0x245c - 0x2455];	// 0x2455 .. 0x245B
	void *m_pInventory;	// 0x245C: the 5-dword inventory object (created by sub_101835e0)

	// ~CBasePlayer body (sub_1015df00, called by vfunc5 via stub 0x100017d5): views of the members it tears down, in destruction order.
	// Layout stays padding; the element types of the vectors are not known (CUtlVector<int> stands in), see the note on 0x1015df00.
	void sub_1015df00();	// destructor body: vptr 0x1046fbb4, delete [+0x1d24] (dtor stub 0x1000546b), delete [+0x245c] (CUtlVector, RemoveAll 0x10185790 + Purge 0x101857b0), vectors at +0x23bc, +0x1e28 (vptrs CUserCmd 0x10462854 at +0x235c, CPlayerLocalPredictedData 0x10470490 at +0x1e40), +0x1e10, +0x1d90, +0x1d7c, +0x1d68, object +0x1a1c (sub_1017a290), +0x19d8; tail jmp 0x100078c4 -> CBaseCombatCharacter body 0x103274d0
	void *&Ptr1d24() { return *(void **)((char *)this + 0x1d24); }	// deleted object (inside m_pad1CE4)
	CUtlVector<int> &Vec1e10() { return *(CUtlVector<int> *)((char *)this + 0x1e10); }	// inside m_pad1E10
	CUtlVector<int> &Vec1d90() { return *(CUtlVector<int> *)((char *)this + 0x1d90); }	// inside m_pad1D90
	CUtlVector<int> &Vec1d68() { return *(CUtlVector<int> *)((char *)this + 0x1d68); }	// overlaps m_pQuestRecords1D68 (its memory pointer) and m_nQuestRecords1D74 (its size)
	CUtlVector<int> &Vec23bc() { return *(CUtlVector<int> *)((char *)this + 0x23bc); }	// same storage as m_SimulationList
	void *Obj1a1c() { return (char *)this + 0x1a1c; }	// object destroyed by sub_1017a290 (no ecx-typed member known), inside m_pad1A00
	int vfunc127(CRestore *pRestore);	// slot 127 override, "CBasePlayer::Restore"/Spawn-like (plain member): +0x1e00 = 1; r = sub_10348890(pRestore); stub 0x10015311 (-> 0x1009d960, cdecl 2 args) on +0x1ce0 (2), +0x1ce4 (2), +0x1cf8 (4); on failure +0x1e00 = 0, return 0; sub_103239a0("player"); when the landmark ([gpGlobals+0x20]+0x12dc) is 0: Msg("No Landmark:%s\n", +0x12e0), the entity of slot 453 gives the spawn: slot 62(its slot 220 origin + 1.0f in z), slot 64(its slot 221); then slot 64({0, [+0x2070], [+0x2074]}), +0x2074 = 0, +0x207c = 1, +0x1570 = 0xf7, g_1070ba28 = slot 8(); with sub_100b3700() & 2: sub_1016b750(this), hull (-16,-16,0)..(16,16,36) via sub_101cf390(this, &mins, &maxs), +0x1edd = 1; else +0x1edd = 0 and the hull to 72; slot 468; sub_1017c830; +0x1dc0 = 0, +0x1e00 = 0; sub_10299ce0(pRestore); return 1
	int sub_10348890(CRestore *pRestore);	// CBaseCombatCharacter::vfunc127 (stub 0x10010d48), called directly
	void sub_103239a0(const char *pszName);	// CBaseCombatCharacter member (stub 0x10015bcc), called with "player"
	float sub_1017d900();	// fade progress 0..1 of the timer at +0x19b8 / +0x19bc (needs a live entity at +0x19c0 or +0x19cc), resets the fade fields when it has ended
	void sub_10177120();
	void sub_101835e0();	// "CBasePlayer::Inventory_CreateKey": scope trace (entity name), then allocates the 5-dword inventory object at +0x245c when it is not there yet
	int sub_1017ddd0();	// the decoded value at +0x1cd8, or a convar override
	int sub_10175290();	// slot 444: refreshes the counter at +0x1e08, else the field at +0x45c of the entity at +0x1e04
	CBaseEntity *sub_1015dc60();	// slot 167 override: resolves the entity handle at +0x1c60 (null when stale)
	bool sub_10168e10();	// slot 361 override: true when the entity handle at +0xfe8 does not resolve
	bool sub_1015ff40();	// slot 411: true when the byte at +0x1edc is set, or the float at +0x19b0 (stamped with curtime while slot 158 of the entity at +0x1c58 is true) is positive and less than 5 seconds old
	CBasePlayer *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100017d5();	// as in CPhysForce (transplant)
	float *vfunc367(float *out);	// as in CBaseEntity (transplant)
	int sub_101647a0(int act);	// NPC_TranslateActivity: scope-traced, 0x16 -> 9, 0x17 -> 0x13
	void sub_1017c300();	// "CBasePlayer::SimulatePlayerSimulatedEntities" (stub 0x1000a5a1, called by vfunc437): two scope traces (the second "...-untouch"), loop 1 over m_SimulationList (count-1..0): dead handle -> FindAndRemove, else entity->sub_10040390(); loop 2: live entity with bit 0 of the byte at +0x26b -> sub_1003d490(), dead handle -> removed with the inline compare loop
	void sub_1017c1d0(CBaseEntity *pEnt);	// "CBasePlayer::RemoveFromPlayerSimulationList": removes the entity from the handle vector at +0x23bc (count at +0x23c8) by shifting the tail down
	CBaseEntity *sub_10081890();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_100dead0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_101618a0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_10161ed0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_10270ae0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_102a9960();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_1039ede0();	// provisional, like sub_1015dc60 (transplant)
	void sub_101836d0(void *pKeyring);	// "CBasePlayer::Inventory_AddLooseKeys": scope trace (entity name); with a keyring: hands every key item (CItemKeyGeneric among the weapon slots 0..0xdf) to keyring->sub_10407c40(its entity's classname, owner object text at +0x88), then removes the key items (sub_101cd940) until a pass finds none
	void sub_1016f0f0(const char *name, const void *data, int unused);	// "CBasePlayer::StoreGlobalEmailFlags": scope trace (entity name), finds the 0x240 byte record at [+0x1e28] (count at +0x1e34) whose name matches (Q_strncmp over the longer length) and copies 0x200 bytes to record+0x40, else DevWarning("Could not save email for terminal: %s\n"); the third stack argument is not used
	void sub_1016eec0(const char *pszName, int *pOut, int nDwords);	// "CBasePlayer::RetrieveGlobalEmail": scope trace (entity name), finds the 0x240 byte record of the vector at +0x1e28 whose name matches (Q_strncmp over the longer length), adds a zeroed one with that name when there is none, then copies nDwords dwords from record+0x40 to pOut
	void sub_1017e150(int level, float time, const char *pszReason);	// "CBasePlayer::SetCriminalLevel"-like setter of the scrambled value at +0x1cd8 (called through the stub at 0x1000fa33)
	void sub_1017e900(int a, int b);	// 300: sets the criminal level 1 ("LockPick"); otherwise clears it ("Clear") once the lapse time at +0x1ce0 has passed
	void sub_1017e560(inputdata_t *pData);	// input handler: the input's integer (0 unless its type is 4) clamped to 0..5, passed to sub_1017e150(level, -1.0f, "Input")
	void sub_1017df50(int level, float time, const char *pszReason);	// sibling setter of another scrambled value (called through the stub at 0x10004237)
	void sub_1017e5f0(inputdata_t *pData);	// input handler like sub_1017e560, passing the clamped integer to sub_1017df50
	void sub_1017cef0(CBaseEntity *pEnt);	// "CBasePlayer::SetUseEntity"-like: remembers the engine index (+0x1ec4) and handle (+0x19b4) of pEnt (cleared when null) and releases the previous use entity when it is different and flagged
	CBaseEntity *sub_1000306c();	// the current use entity (CBasePlayer::sub_1017cf90 stub)
	void vfunc149(int a, int b);	// forwards (a, b) to slot 148 of every other connected player the game rules (slot 64) relate to this one with the value 1
	void sub_100ac4e0(void *pFunc, int a, int b);	// sets a think function and delay (called through the stub at 0x10007fe5)
	void sub_1032bdf0();	// CBaseCombatCharacter::vfunc403, called directly
	void sub_1017ec40();	// per-frame timer: when curtime reached the float at +0x1cf8, either postpones it by a constant (flag byte 0x106c8a41) or resets it to FLT_MAX and, when the entity handle at +0x1d00 resolves, calls sub_1017ee80(dword at +0x1cfc, the dword at +0x98 of that entity, &+0x1d04)
	void sub_1017ee80(int a, int b, void *pData);	// called through the stub at 0x10006055
	void sub_1016bd50();	// resets the model related state: sub_101618e0(1, 1), -1 at +0x1ebc, 0 at +0x168 / +0x16c / +0x1edc, curtime at +0x1c68, then makes sure the model name buffer at +0x23d4 matches the model (slot 105 otherwise)
	void sub_101618e0(int a, int b);	// worker (stub 0x10012503)
	void sub_1017b6f0(int a, const char *pszName, int b, const char *pszName2);	// registers a hull pair (called through the stub at 0x100105c8)
	void sub_1017c830();	// matches the player's saved quest records (0x40 bytes each at the pointer +0x1d68, count +0x1d74) with the global quest journal by name: after resetting the journal's records (sub_10221270), copies the record's dwords at +0x34 / +0x38 into the matching quest (+0x10 / +0xc) and stores the quest index at +0x30
	void sub_101713c0();	// leaves the vehicle at +0x20fc (called by vfunc452): asks the vehicle for the driver slot and exit position, teleports the player there through the virtual slots, clears the flag bit 0 at +0x1e74 and the vehicle fields at +0x20f4 / +0x20f8 / +0x20fc
	void sub_101712d0(CBasePlayerVehicle *pVehicle, int role);	// enters the vehicle: asks it (slot 2) whether it knows the role, remembers the vehicle and its entity handle (+0x20fc / +0x20f8), sets the active flag (+0x20f4) and flag bit 0 at +0x1e74, lets the vehicle take control (slot 5, else slot 66), zeroes the velocity (sub_100b2e30), sets move type 9 / collision group 8, then notifies the vehicle (slot 4) and slot 454
	void *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	void *sub_1032e8b0(int index);	// CBaseCombatCharacter::GetWeapon (stub 0x100100b4), called directly
	int sub_103346c0(int ammoIndex);	// CBaseCombatCharacter::GetAmmoCount (stub 0x1000ff97), called directly
	void sub_1017bf10(int mode);	// switches the active view part: mode 0 / 1 swap the parts at +0x2104 / +0x2108 (name from slot 217, show / hide through their slots 35 / 21, handed to the part owner at +0x2100 and VPhysicsSwapObject), mode 2 hides both
	int sub_1015fd50();	// worker called by slot 316 (stub 0x10012d69)
	void sub_1017c6d0();	// notifies the entity of the engine index at +0x1eb8 (when flagged by the byte at +0x1ec0): clears the flag, slot 118 (AcceptInput) with a variant of type 5; always clears the index
	void sub_101816c0(const char *pszName);	// slot 103 helper: runs slot 457(pszName, 0), clears the float at +0x1564 and, with an active weapon, runs its slot 310(0), clears its field at +0x854, lets the entity of its handle at +0x890 (sub_1015d680) run slot 266 when the weapon's slot 342 text is empty, then the weapon's slot 321
	CBaseEntity *sub_1015d680(unsigned int hEntity);	// resolves an entity handle (stub 0x10013d09)
	void sub_1015d6d0(int index);	// "CBasePlayer::CreateViewModel": unless viewmodel number index already exists, creates a "viewmodel" entity, places it at the player's origin, owns it by the player, sets its index, spawns it (sub_101d1280), move type (11, 0), aim entity = the player, and stores its handle in the array at +0x2308 + index * 4
	void sub_101644f0(int a, int b, int c);	// stub 0x1000f74f for 0x101644f0 (run first by slot 418 with -1, 0, 0)
	void sub_1032a100(int activity);	// CBaseCombatCharacter member (stub 0x10002626): switches the activity
	void sub_1032ead0();	// CBaseCombatCharacter member (stub 0x10005a9c), called directly
	void sub_103345d0();	// CZeroFields103345d0::sub_103345d0 (stub 0x10015000), called directly
	CBaseEntity *sub_10163f70();	// the player's hud fire emitter: the entity of the handle at +0x1d64, or a new "DMGFX_hud_fire_emitter" (env_particle) attached to the entity sub_1015d680(0) resolves, whose handle is stored again (cleared when none could be made)
	void sub_10167030(Vector vecOrigin, Vector vecTarget);	// teleports / places the player: flag bit 5 at +0x20f0, the spawn angles global copied to +0x184, vecTarget (after slot 64 adjusted it) stored at +0x206c, +0x207c = 1, solid flag 4 added, take damage 0, move type 0, model index 0, then sub_101cf5c0(this, &vecOrigin, 0)
	void vfunc103();	// slot 103 (declared as a plain member; the CHL2_Player override calls it): slot 407, sub_1015ef00, SetSolid(0) (inlined scope trace), move type (9, 0), sub_101cf600(this), RemoveFlag(1), then slot 457("item_w_fists", 0)
	void sub_1017d460(CBaseEntity *pEnt, float flBlend);
	void sub_1017d0b0(float flBlend);	// stub 0x100051d2, called by CBaseCombatCharacter::SetAsCameraTarget(this, 0) for every connected player
	void *sub_1032e120(const char *pszName);	// CBaseCombatCharacter::Weapon_Create (stub 0x1000b0b4), called directly
	void sub_1032d380(CBaseEntity *pWeapon, char bNoSwitch);	// CBaseCombatCharacter::vfunc383 (stub 0x100032b0), called directly
	void *sub_10335950(const char *pszName);	// CBaseCombatCharacter::Inventory_FindWeapon (stub 0x10015195): the carried weapon whose classname matches, 0 when none; called directly
	void sub_101784c0(CBaseEntity *pOther);	// adds the keyring item the player carries to the inventory object at +0x245c: lets the keyring look at pOther, creates the inventory when needed, hands it the loose keys and copies the keyring's records into it
	void sub_10182e00(CBaseCombatWeapon *pWeapon);	// "CBasePlayer::SetViewModel"-like: the model name of the character's default stat item for the weapon (or none when the weapon is not a ranged / usable one) is precached and handed to slot 266 of the second view model
	void sub_101711e0(float flThreshold);	// resets the vector pair at +0x1efc / +0x1f08 to the zero vector unless the threshold is non-zero and the pair's squared length is above flThreshold squared
	void sub_10170d60();	// the random impulse: once curtime passes the float at +0x2148 (5 seconds ahead again), clears the field at +0x210, builds a damage info (this, this, 10.0f, 0x1000) and hands slot 144 a random force vector (each component rand() * 9.155653e-5 + 2.0)
	void sub_100b1d10();	// CBaseEntity member (stub 0x1000d486), called directly by slot 434
	void vfunc434();	// slot 434 (plain member): with the player on the ground (flags bit 0, not bit 2, move type below 2): slot 449(2, 0), stamps the time at +0x148c and, when the entity of slot 209 has flag bit 12, hands the velocity plus the base velocity to sub_100b2e30

	void vfunc26(CBaseEntity *pOther);
	virtual void *vfunc82();	// slot 82: the class's datamap
	virtual int vfunc138();	// slot 138	// slot 26 override (plain member beside the placeholder sa26; twin of slot 25): with an entity, the handle at +0x1c60 becomes the handle of its owning object (+0x9c, -1 when none)
#include "CBasePlayer_ext.h"
};
