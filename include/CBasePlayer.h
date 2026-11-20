// CBasePlayer : CBaseCombatCharacter (the game's RTTI; vtable 0x1046fbb4, 469 slots; its data starts at 0x19a8):
// the player entity. Only the members decompiled code needs are named, the rest is padding that keeps their
// offsets. Below slot 406 it declares only its own overrides, each with the signature its base gives the slot;
// its new slots 406..468 follow (placeholders where the code does not call them).
// New method declarations can go into CBasePlayer_ext.h (included at the end of the method list) so that
// workers do not overwrite each other's edits of this large file.
#pragma once
#include "string_t.h"
#include "CRestore.h"
#include "CBaseCombatCharacter.h"

#include "Vector.h"
#include "utlvector.h"
#include "CGlobalEmailRec.h"
#include "CUserCmd.h"
#include "CPlayerLocalPredictedData.h"

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
	virtual void vfunc35(float *pOrigin, const char *pName, int a);	// with this player's slot 217 (its origin), a name and 0
};

struct CBasePlayerPartOwner	// the object at +0x2100; only slot 5 is typed
{
	CBP_V1(pa0) CBP_V1(pa1) CBP_V1(pa2) virtual char vfunc3(); CBP_V1(pa4)
	virtual void vfunc5(CBasePlayerPart *pPart);
	virtual int vfunc6(void *pBuf, int a);
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

struct CBasePlayerMapVisit	// a map visit record (0x48 bytes)
{
	char m_szMap[0x44];
	int m_nTime44;
};

struct CBasePlayerFadeRec	// a saved fade (0x10 bytes)
{
	char m_bType;
	EHANDLE m_hEnt;
	float m_flTime;
	float m_flValue;
};

class CBasePlayer : public CBaseCombatCharacter
{
public:
	CBasePlayer();	// 0x1015d7c0 (its block defines it as the constructor of a view, CHL2_PlayerBase)
	// Its own slots below 406 (the base declares every slot). The plain members of the slot's signature override
	// by themselves: 5, 21..23, 25, 26, 82, 104, 112, 114, 126, 127, 130, 131, 138, 149, 151, 181, 197, 198,
	// 200, 259, 321, 338, 339, 360, 380 and 389.
	virtual void vfunc24(int pOther);
	virtual void vfunc31(int pDump);
	virtual int vfunc79(); virtual int vfunc80(); virtual int vfunc81();	// matched as sub_1015d660, sub_10179740, sub_10179760
	virtual void vfunc103();	// the game's 0x1016d260, matched as SV::sub_1016d260
	virtual void vfunc105(const char *pszModel);
	virtual int vfunc117();	// matched as CBasePlayer::sub_1015dd50
	virtual void vfunc123();
	virtual int vfunc124();
	virtual bool vfunc128();	// matched as sub_1017be30
	virtual void vfunc141(class CVDmg_t *pInfo, const Vector *pDir, struct CGameTrace *pTrace);
	virtual int vfunc142(void *pInfo);	// the damage info (const CTakeDamageInfo *)
	virtual int vfunc143(float flHealth, int bitsDamageType);	// slot 143 "TakeHealth": clears the discipline effect bits of +0xe98 (bitsDamageType & 0x3fff), then the character's TakeHealth
	virtual void vfunc144(void *pArg);	// slot 144: takes a damage info (CUnknown101c26d0, the force vector at +4); sub_10170d60 hands it a random force
	virtual void vfunc148();	// matched as CPlayerAccum_1016aa00::sub_1016aa00
	virtual char vfunc162();
	virtual void vfunc167();	// matched as CBasePlayer::sub_1015dc60
	virtual void vfunc169(const Vector *pPunch);	// matched as CBasePlayer::sub_101710b0
	virtual void vfunc170(const Vector *pOffset);	// slot 170: sub_100b3640(1), then sub_100b2e30 with the vector at +0x3d4 plus pOffset
	virtual void vfunc180();	// slot 180: view parts released from the physics environment, then CBaseCombatCharacter::vfunc180
	virtual Vector vfunc193();	// slot 193 \"EyePosition\" (by value, hidden result pointer)
	virtual float *vfunc194();	// slot 194 "GetAbsAngles"-like: the player's angles (+0x206c) in world space: with a live move parent (handle at +0x25c) its matrix (+0x130, slot 98 first when bit 11 of its flags +0x268 is set) times the angles' matrix, turned back into angles in a static; else the angles themselves
	virtual float *vfunc195();
	virtual void vfunc226(int a);	// matched as sub_1017b880
	virtual void vfunc229(CBaseEntity *pOther);
	virtual int vfunc298(int a);
	virtual void vfunc300(CBaseEntity *pVictim, char bQuiet, int n);	// slot 300 (ret 0xc), CBaseCombatCharacter::vfunc300 (sub_1032c580 stub 0x100051b9) first with the same arguments; then, when pVictim says sub_1033d580(this), sub_1022d9d0(this, 3); with the active weapon's slot 360 flags having 0x18000 and the character's stat list of type 3 value of stat 9 above 0 the Potence death blow effect (two D_Potence_DeathBlow emitters through CDisciplineParticle::sub_10050d90); then, unless bQuiet, a criminal level step: sub_1017e150(4, -1.0f, sub_101d3730("Event_TookLife %s", pVictim ? pVictim->GetDebugName() : "UNKNOWN"))
	virtual void vfunc302(); virtual void vfunc303();	// matched as sub_10182ec0, sub_10182f10
	virtual void vfunc306(CBaseCombatCharacter *pTarget, char bUseEyes);	// matched as CBasePlayer::sub_10178660
	virtual void vfunc316(CGlobalEntityList_Ent *pEnt, int a, int b);	// slot 316: with an entity: unless the entity of the handle at +0x1c58 is live, answers slot 158 and differs from pEnt, takes over pEnt's handle into +0x1c5c / +0x1c60 while the activity at +0xff0 is 1 or 5 and sub_1015fd50() is -1
	virtual bool vfunc318(int a, melee_dice_roll_result *pRoll, int c);	// slot 318: false without a roll; when the roll hit (AttackHit) adds the soak dice of the character's first stat list (stat 2) to it and picks the reaction activity by the roll's level (level 3: 0x1156 with a 1.0f pause, else 0x52 with 0.3f); starts the activity (sub_101644f0), copies +0x1488 to +0x6f4 and arms the timer at +0x1564; true
	virtual void vfunc319();	// matched as CBasePlayerUnit::sub_10160d00
	virtual bool vfunc320(int a, int b);
	virtual bool vfunc326(int a, CBaseEntity *pOther);	// slot 326: when the active weapon's type flags (slot 360) have bit 13 or 14, false unless pOther is set and its character template (default stat item) has the byte at +0xa0; else CBaseCombatCharacter::vfunc326(a, pOther)
	virtual char vfunc327(); virtual char vfunc328();
	virtual void vfunc331(CBaseCombatWeapon *pWeapon, CBaseEntity *pEnemy, int nActivity, int *pOutSequence);	// the slot's signature; the function is the plain bool vfunc331 (CBasePlayer_ext.h)
	virtual bool vfunc334(int a, int b);	// slot 334: whether the player may act with the given kind of action (4 = use): the use entity answering 300 allows it; a dialog partner, a fade, the use entity, a local-player state or the discipline record forbid it; else CBaseCombatCharacter::vfunc334
	virtual void vfunc340(int a, int b, int c);	// the slot's signature; the function is the plain int vfunc340 below
	virtual void vfunc341(int discipline, int unused);	// matched as sub_10182530
	virtual int vfunc359(int pEnt);	// the entity (CBaseEntity *)
	virtual void vfunc361();	// matched as CBasePlayer::sub_10168e10
	virtual QAngle vfunc367();	// the slot's signature; the function is the plain float *vfunc367(float *out) below
	virtual int vfunc376(int a);	// matched as CBasePlayer::sub_101647a0
	virtual char vfunc379(CBaseEntity *pTarget, int nRole, int nType, int a4, int a5, int a6, char bHolster);	// the slot's signature; the function is the plain vfunc379 (CBasePlayer_ext.h)
	virtual bool vfunc382(CBaseCombatWeapon *pWeapon);	// slot 382 "Weapon_CanUse": true unless the weapon is of the two type flags 0x18000 and the player already owns a weapon of its class, then the player object at +0xa8 is sent message 0x4e with the weapon owner's text and false is returned
	virtual void vfunc383(CBaseCombatWeapon *pWeapon, char bNoSwitch);	// slot 383 "Weapon_Equip": CBaseCombatCharacter::vfunc383, and (unless bNoSwitch) a new holder entity for the weapon's class (handle at +0x1c64) plus the game rules' FShouldSwitchWeapon / slot 388 switch
	virtual void vfunc385(CBaseCombatWeapon *pWeapon, int nUnused, char bForce);	// the slot's signature; the function is the plain vfunc385 (CBasePlayer_ext.h)
	virtual char vfunc388(void *pWeapon, int a);	// slot 388: switches to the given weapon (answers in al: false when it could not, CWeaponUnarmed::vfunc319 tests it)
	virtual int vfunc390(struct CTakeDamageInfo *pInfo);	// slot 390: OnTakeDamage_Alive override (applies the damage flags, then the base)
	virtual void vfunc403();
	void sub_1000b0c8();	// CBaseCombatCharacter::vfunc180, called directly
	void vfunc259(void *pInput);	// slot 259 (0x10178a10): the player's scene/expression input handler (plain member so it can be defined; the slot itself is the se37 placeholder)
	void sub_1032e330(struct animevent_t *pInput);	// CBaseCombatCharacter::vfunc259 body at 0x1032e330, called directly (the default branch)
	// its new slots 406..468
	virtual char vfunc406();
	virtual void vfunc407();
	virtual void vfunc408();
	// slots 409..447
	virtual int vfunc409(); virtual void vslot410(); CBP_V1(si0c)
	virtual bool vfunc412();
	virtual bool vfunc413();	// slot 413: true in activity 0x32, else slot 412
	virtual void vfunc414(CBaseEntity *pEnt); virtual void vfunc415(); CBP_V1(si0h) virtual void vfunc417(int a, int b);
	virtual char vfunc418(int unused);	// slot 418: runs sub_101644f0(-1, 0, 0), then steps the activity at +0xff0 (0xf49 -> 0xf52 when the entity of the handle at +0xfe8 is gone; with the byte at +0x65c set 0xf40 -> 0xf49), true while it is 0xf52
	virtual char vslot419(int a); virtual char vslot420(int a);
	virtual char vfunc421(int unused);	// slot 421: false unless the byte at +0x65c is set; with a live character behind the handle at +0x1538 (and +0x153c set) builds a damage record sourced at this player and hands the character a one point damage info (stat 0xf set to the value of stat 0x11 of its active stat list), slot 144 and slot 403; true
	virtual char vslot422(int a); virtual char vslot423(int a); virtual char vfunc424(char bFlag); CBP_V1(si16) CBP_V1(si17)
	virtual void vfunc427();	// slot 427: hands the entity of the handle at +0x1538 (null while the dword at +0x153c is -1 or the handle is stale) to sub_10165790
	CBP_V1(si19)
	virtual void vfunc429();	// slot 429: stores curtime at +0x1dd4
	virtual void vfunc430(unsigned char *pvs, int a);	// slot 430 "SetupVisibility" (CServerGameClients::vfunc7)
	virtual void vfunc431(); CBP_V1(si23) CBP_V1(si24) CBP_V1(si25) CBP_V1(si26) virtual void vfunc436(); CBP_V1(si28)
	virtual void vfunc438(float flArg, int flags);	// slot 438: with flag bit 2 hands the eye position, vfunc145() and flArg to sub_102699e0
	virtual char vfunc439();
	virtual void vfunc440(int nUnused, float flThreshold, Vector *pOut);	// slot 440 (+0x6e0): the view-cone aim-point search (fills pOut with the aim point); nUnused is not read, flThreshold is the cosine compared against the normalised direction
	virtual void vfunc441();	// slot 441: collects the player's weapons (or ammo types) the game rules (global 0x1070ba0c, slots 61 / 62) ask for into a local list, then slot 442(1)
	virtual void vfunc442(int a);
	virtual void vfunc443(int a);
	virtual void vfunc444();
	virtual int vfunc445(); virtual void vfunc446(); virtual void vfunc447();
	virtual void vfunc448();
	// slots 449..467
	virtual void vfunc449(int a, int b);	// slot 449: called with (2, 0) by slot 434
	virtual void vfunc450();
	virtual void vfunc451(int nImpulse);	// slot 451 "CBasePlayer::CheatImpulseCommands" (0x10172e60, ret 4): jump-table switch on nImpulse - 0x45 (0..0x86), gated by the global 0x10752e9c; grunt / godmode / give-all / audible-silent / dump-entity / trace-and-spawn cheats
	virtual bool vfunc452(const char *pszKey);	// slot 452 key handler: "vehicleRole" with two console arguments hands the role number to the vehicle at +0x20fc (leaving the vehicle first when it does not know the role yet)
	virtual CBaseEntity *vfunc453(); CBP_V1(sk0f) CBP_V1(sk0g)
	virtual void vfunc456();	// slot 456: when the entity of the handle at +0xea4 is live (and the active weapon, if any, answers slot 313), hands the entity's classname and its slot 296 value to slot 457
	virtual void vfunc457(const char *pszName, int a);
	virtual void vfunc458();	// slot 458: if the entity at +0x1538 is not set up, lets the vehicle at +0x20fc handle it, else picks the weapon call by the float at +0x1564
	virtual CBaseEntity *vfunc459(const char *pszName, int iSubType);	// slot 459 "GiveNamedItem": unless the player owns it already, creates the entity, places it at the player, flags it, sets its sub type, spawns it and lets the player pick it up
	virtual void vfunc460();
	virtual void vfunc461(CUserCmd *pCmds, int numcmds, int totalcmds, int dropped_packets, char paused);	// slot 461 "RunCommand": processes the command batch
	virtual void vfunc462(CUserCmd *pCmd, void *pHelper);	// slot 462 "PlayerRunCommand"-like (implementation sub_1016af80)
	CBP_V1(sl4) virtual float vfunc464(); virtual float vfunc465(); virtual float vfunc466(); CBP_V1(sl8)
	virtual void vfunc468();	// registers the "player_stand" / "player_crouch" collision hulls (16x16x36 and -16,-16,0) for the sub-object at +0x270

	void vfunc437();	// slot 437: player per-frame update
	void sub_1015f150(struct inputdata_t *pInput);	// "CBasePlayer::InputPlayHUDParticle"
	void sub_1015f330(struct inputdata_t *pInput);	// "CBasePlayer::InputStopHUDParticle" (stub 0x10015ae1)
	CBaseEntity *sub_1016a030(unsigned int mask, int unused);	// the player-side "find a ledge / wall to climb" probe (ret 8): a flat hull trace along the view direction (slot 466 long) with mask, then, when it hits a wall facing the player (normal . dir <= -0.5), a second trace from the reflected point raised by slot 465; returns the hit entity unless slot 166 refuses it
	char m_pad19a8[0x19b0 - 0x19a8];	// 0x19A8 .. 0x19AF
	float m_flLastCombatAnimTime;	// 0x19b0
	char m_pad19b4[0x19b8 - 0x19b4];	// 0x1568 .. 0x19B7
	float m_flFadeStart19B8;	// 0x19B8: when the fade began
	float m_flFadeDuration19BC;	// 0x19BC: its length (negative fades out)
	EHANDLE m_hFadeEnt19C0;	// 0x19C0
	float m_flFadeTime19C4;	// 0x19C4
	float m_flFadeValue19C8;	// 0x19C8
	EHANDLE m_hFadeEnt19CC;	// 0x19CC
	float m_flFadeTime19D0;	// 0x19D0
	float m_flFadeValue19D4;	// 0x19D4
	char m_FadeStack19D8[0xc];	// 0x19D8: a CUtlVector<CBasePlayerFadeRec> (view FadeStack()), size at +0x19E4
	int m_nFade19E4;	// 0x19E4
	char m_pad19e8[0x19f0 - 0x19e8];
	int m_n19F0;
	bool m_bObfWasMoving;	// 0x19f4
	char m_pad19f5[0x19f6 - 0x19f5];	// 0x19E8 .. 0x19F5
	CUtlVector<CBasePlayerFadeRec> &FadeStack() { return *(CUtlVector<CBasePlayerFadeRec> *)m_FadeStack19D8; }
	bool m_b19F6;
	char m_b19F7;	// 0x19F7: set by sub_1015ef40
	float m_flExperience19F8;	// 0x19F8: the experience points gained (sub_1015f8b0 adds its first argument)
	float m_flExperience19FC;	// 0x19FC: the fraction towards the next 100 points (rolls over at 100.0f, the whole hundreds go to stat 0x22)
	char m_pad1a00[0x1a80 - 0x1a00];
	bool m_bDrawViewmodel;	// 0x1a80
	char m_pad1a81[0x1a84 - 0x1a81];
	int m_n1A84;	// 0x1A84
	char m_pad1A88[0x1a94 - 0x1a88];
	int m_n1A94;	// 0x1A94
	char m_pad1a98[0x1adc - 0x1a98];
	float m_flClientVActiveDisciplineDurations[17];	// 0x1adc
	float m_flClientBeginVActiveDisciplineTimers[17];	// 0x1b20
	float m_flActiveObfuscateUpdateTimer;	// 0x1b64
	char m_pad1b68[0x1b6c - 0x1b68];	// 0x1A98 .. 0x1B6B
	char m_b1B6C;	// 0x1B6C: cleared by the feeding handlers (vfunc380, vfunc422), set by vfunc419 / vfunc423
	bool m_bAllowResyncHandsOffset;	// 0x1b6d
	char m_pad1b6e[0x1b70 - 0x1b6e];
	int m_nRangeStart1B70;	// 0x1B70: low half of the value of the selected command slot (type 1)
	char m_bFlag1B74;	// 0x1B74
	char m_pad1B75[3];
	int m_nRangeEnd1B78;	// 0x1B78: high half of that value, minus one
	char m_pad1b7c[0x1b84 - 0x1b7c];
	float m_flRunForwardSpeeds[8];	// 0x1b84
	float m_flRunSideSpeeds[8];	// 0x1ba4
	float m_flWalkForwardSpeeds[8];	// 0x1bc4
	float m_flWalkSideSpeeds[8];	// 0x1be4
	float m_flSneakForwardSpeeds[8];	// 0x1c04
	float m_flSneakSideSpeeds[8];	// 0x1c24
	int m_nDefaultTargetModel;	// 0x1c44
	int m_nDefaultSpreadLModel;	// 0x1c48
	int m_nDefaultSpreadRModel;	// 0x1c4c
	string_t m_sTargetmodel;	// 0x1c50
	string_t m_sPlayerName;	// 0x1c54
	EHANDLE m_hMeleeOpponent;	// 0x1c58	// 0x1B7C .. 0x1C5B
	unsigned int m_h1C5C;	// 0x1C5C: entity handle (the target the player took over)
	EHANDLE m_hEnt1C60;	// 0x1C60: entity handle (the slot 167 object)
	EHANDLE m_pViewWeapon;	// 0x1c64
	char m_pad1c68[0x1c70 - 0x1c68];
	float m_flStealthVisionScalar;	// 0x1c70
	float m_flStealthVisionCone;	// 0x1c74
	float m_flStealthHearingDist;	// 0x1c78
	int m_nNextLightPositionTest;	// 0x1c7c
	float m_flLightOnFeet;	// 0x1c80
	float m_flLightOnCenter;	// 0x1c84
	float m_flLightOnHead;	// 0x1c88	// 0x1C64 .. 0x1C8B
	float m_f1C8C;	// 0x1C8C: a light value (CHL2_Player::vfunc471 writes 1.0f)
	char m_pad1c90[0x1c94 - 0x1c90];
	int m_n1C94;	// 0x1c94: the stealth feat level (0..10) CHL2_Player::vfunc471 picked
	int m_n1C98;	// 0x1c98: the light level index (0..10) CHL2_Player::vfunc471 picked
	char m_pad1c9c[0x1cb0 - 0x1c9c];
	bool m_bPlayerAnimCyclePlaying;	// 0x1cb0
	bool m_bPlayerAnimIdleFinished;	// 0x1cb1
	char m_pad1cb2[0x1cb4 - 0x1cb2];
	int m_aLastplayerAnim;	// 0x1cb4
	unsigned int m_h1CB8;	// 0x1cb8: entity handle compared with the use entity in sub_10181780
	unsigned int m_h1CBC;	// 0x1cbc: second entity handle compared in sub_10181780
	EHANDLE m_hClosestNPC;	// 0x1cc0
	float m_flClosestNPCDist;	// 0x1cc4
	int m_iClosestNPCSense;	// 0x1cc8
	int m_LevelSupernaturalAct;	// 0x1ccc
	char m_pad1cd0[0x1cd8 - 0x1cd0];	// 0x1CC0 .. 0x1CD7
	unsigned int m_nCriminalLevelEnc;	// 0x1CD8, scrambled by the xor/and/add mask chain
	int m_LevelInvestigateAct;	// 0x1cdc	// 0x1CDC .. 0x1CDF
	union {
		int m_n1CE0;
		float m_f1CE0;	// 0x1CE0: time the criminal level lapses (-1.0f bits = none)
	};
	float m_flSupernaturalActTimer;	// 0x1ce4
	int m_iCriminalActCount;	// 0x1ce8
	int m_iSupernaturalActCount;	// 0x1cec
	float m_flCopTimer1cf0;	// 0x1cf0: until when the cops of the current level keep coming (sub_1017ee80)
	int m_iCopLevel1cf4;	// 0x1cf4: the criminal level the cops were last sent for
	float m_flSpawnResponseCopsTimer;	// 0x1cf8
	int m_iSpawnResponseCopsLevel;	// 0x1cfc
	EHANDLE m_hSpawnResponseCopsNPC;	// 0x1d00
	Vector m_vecSpawnResponseCopsLocation;	// 0x1d04
	int m_iCopsInPursuitCount;	// 0x1d10
	int m_iHuntersInPursuitCount;	// 0x1d14
	bool m_bInHeightenedAlert;	// 0x1d18
	char m_pad1d19[0x1d1c - 0x1d19];
	float m_flHeightenedAlertExpireTimer;	// 0x1d1c
	float m_flSetOnHeadTimer;	// 0x1d20
	char m_pad1d24[0x1d40 - 0x1d24];
	unsigned int m_h1D40;	// 0x1d40: entity handle that sets bit 0x40 of the flag dword in sub_10181780
	unsigned int m_h1D44;	// 0x1d44: the second entity handle of that test
	char m_pad1d48[0x1d50 - 0x1d48];
	unsigned int m_h1D50;	// 0x1d50: entity handle
	char m_pad1d54[0x1d58 - 0x1d54];
	float m_f1D58;	// 0x1d58: the time of the next Nosferatu target scan
	bool m_b1D5C;	// 0x1d5c: a Nosferatu target was found
	char m_pad1d5d[0x1d60 - 0x1d5d];
	int m_iVFlags;	// 0x1d60
	char m_pad1d64[0x1d68 - 0x1d64];	// 0x1D48 .. 0x1D67
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
	int m_nSpeedScaleState1DB4;	// 0x1DB4: 1..7 = the max speed comes from the convar at 0x109ef1b4 instead of the speed tables (CHL2_Player::vfunc436)
	char m_pad1db8[0x1dbc - 0x1db8];
	float m_flMasqueradeTimerNext;	// 0x1dbc
	bool m_bDebugSaved;	// 0x1dc0
	char m_pad1dc1[0x1dc4 - 0x1dc1];
	float m_flCopWaitTimer1dc4;	// 0x1dc4: when the waiting cops come (0 = not waiting)
	bool m_bCopWaitDelayed;	// 0x1dc8
	char m_pad1dc9[0x1dcc - 0x1dc9];
	int m_iCopWaitCount;	// 0x1dcc	// 0x1DB4 .. 0x1DCF
	float m_f1DD0;	// 0x1DD0: curtime stamp (vfunc21 / vfunc22 / vfunc23, reset by sub_10178140)
	float m_flLastTimeAttackTriggered;	// 0x1dd4	// 0x1DD4 .. 0x1DD7
	float m_f1DD8;	// 0x1DD8: curtime stamp of the last slot 24 call
	float m_f1DDC;	// 0x1DDC: the attack meter (0..99)
	float m_fClientCurrentRangedAccuracy;	// 0x1de0	// 0x1DE0 .. 0x1DE3
	float m_f1DE4;	// 0x1DE4
	float m_f1DE8;	// 0x1DE8
	float m_fNoAttackTimer;	// 0x1dec
	EHANDLE m_hLastRangedWeapon;	// 0x1df0	// 0x1DEC .. 0x1DF3
	char m_b1DF4;
	char m_pad1df5[0x1df8 - 0x1df5];
	int m_iForceCameraType;	// 0x1df8	// 0x1DF5 .. 0x1DFB
	EHANDLE m_hEnt1DFC;	// 0x1DFC: entity handle, cleared by sub_10183330
	char m_pad1E00[4];	// 0x1E00 .. 0x1E03
	unsigned int m_hEnt1E04;	// entity handle
	int m_n1E08;
	int m_n1E0C;
	CUtlVector<CBasePlayerMapVisit> m_MapVisits1e10;	// 0x1E10: the maps visited
	int m_lBirthday;	// 0x1e24	// 0x1E10 .. 0x1E27
	CUtlVector<GLOBAL_EMAIL> m_GlobalEmail;	// 0x1E28: the global email flag records (0x240 bytes each)
	EHANDLE m_hHud1E3C;	// 0x1E3C: the HUD particle entity handle
	CPlayerLocalPredictedData m_Local1E40;	// 0x1E40 .. 0x1E73: vptr 0x10470490, then +0x04 (the model index), +0x08, +0x0c (default spread models), +0x10 (m_n2068), +0x14 (20 bytes the engine slot 112 fills)
	unsigned int m_flags1E74;
	int m_n1E78;	// 0x1E78: 0 on death (vfunc144)
	int m_n1E7C;
	int m_n1E80;
	int m_n1E84;
	int m_n1E88;
	char m_b1E8C;
	char m_b1E8D;
	char m_b1E8E;
	char m_b1E8F;
	int m_n1E90;
	int m_n1E94;
	int m_n1E98;
	int m_n1E9C;
	int m_n1EA0;
	int m_n1EA4;
	int m_n1EA8;
	int m_nEdict1EAC;	// 0x1EAC: engine index of the entity at +0x1c58 (its +0x2e0), 0 when none
	int m_nEdict1EB0;	// 0x1EB0: engine index of the grapple target / use entity (its +0x2e0)
	char m_b1EB4;	// 0x1EB4: copy of the byte at +0x1474
	char m_pad1EB5[3];
	int m_nUseEdictIndex1EB8;	// engine index of the entity to notify (0 = none)
	char m_pad1EBC[4];	// 0x1EBC .. 0x1EBF
	char m_bNotifyUse1EC0;
	char m_pad1EC1[3];
	int m_nUseEdict1EC4;	// 0x1EC4: engine index of the use entity, cleared when it is gone
	int m_n1EC8;
	int m_n1ECC;
	int m_n1ED0;	// 0x1ed0: the engine index of the Nosferatu target
	int m_n1ED4;
	unsigned int m_nFlags1ED8;	// 0x1ed8: the player's status flag dword updated by sub_10181780 (bit 1 = live grapple target, 0x20 / 0x100 = target mode 2 / 8, bit 0 = sub_10146a80, bit 2 = +0x14aa, bit 9 = use entity matches +0x1cb8 / +0x1cbc, bit 4 = sub_1033b7c0, bit 7 = slot 413, bit 3 = slot 412, bit 6 = +0x1d40 / +0x1d44)
	union {
		char m_pad1EDC[0x1ef0 - 0x1edc];	// 0x1EDC .. 0x1EEF
		char m_b1EDC;	// 0x1EDC
	};
	Vector m_vec1EF0;	// 0x1EF0: the velocity the command run last saw (copied from +0x3b0 when non-zero)
	Vector m_vec1EFC;	// 0x1EFC: a vector pair (reset together by sub_101711e0)
	Vector m_vec1F08;	// 0x1F08
	char m_pad1F14[0x1f88 - 0x1f14];	// 0x1F14 .. 0x1F87
	int m_aSkyCam1F88[5];	// 0x1F88: copy of dwords +0x450..+0x460 of the object at g_1072a498 (255 at +0x1F98 when none)
	char m_SkyCamCopy1F9C[0x20];	// 0x1F9C: copy of that object's 0x20 bytes at +0x464 (sub_1018be10)
	char m_WorldInfo1FBC[0x20];	// 0x1FBC: the world info record sub_1023cde0 fills
	char m_pad1FDC[0x2018 - 0x1fdc];	// 0x1FDC .. 0x2017
	int m_aSlotType2018[10];	// 0x2018: kind of each of the ten command slots (0 = unused)
	int m_aSlotValue2040[10];	// 0x2040: value of each command slot (a name hash or packed range)
	int m_n2068;	// 0x2068: set to 1 on death (vfunc144)
	Vector m_vec206c;	// 0x206C: the view angles / target vector (stored by sub_10167030)
	const char *m_pszName2078;	// 0x2078: the player's log name
	int m_n207C;	// 0x207C: non-zero skips the view-angle copy in the command run
	char m_pad2080[0x2084 - 0x2080];	// 0x2080 .. 0x2083
	int m_n2084;	// 0x2084: the command clock error in milliseconds, clamped to -1000..1000
	unsigned int m_nFlags2088;	// 0x2088: the flag word (bit 0 tested by CWeaponUnarmed::vfunc319; see also vfunc436, sub_1016b090 'new buttons')
	void sub_1016b090(unsigned int buttons);	// button-state update: prev buttons -> +0x2094, new buttons -> +0x2088	// 0x2078 .. 0x208B
	union { unsigned int m_n208C; unsigned char m_b208C; };	// 0x208C
	int m_afButtonReleased;	// 0x2090
	int m_afButtonLast;	// 0x2094
	char m_pad2098[0x20a8 - 0x2098];	// 0x208D .. 0x20A7
	char m_b20A8;	// 0x20a8: the on-target flag AutoaimDeflection sets (CBasePlayer::vfunc31 saves it as m_fOnTarget)
	Vector sub_10176930(Vector &vecSrc, float flDist, float flDelta);	// "CBasePlayer::AutoaimDeflection" (0x10176930, ret 0x10: hidden Vector result + 3 args; called by 0x10176520): clears m_b20A8 and returns the zero vector (global 0x1070d9d0) when sub_101764d0 is false; else traces from vecSrc along the punch+view angles (+0x1efc + 0x206c + 0x22a8) with mask 0x46004003, then over players 1..maxClients (0x78 byte records, ScopeTrace "CBaseEntity::Instance") picks the best deflection within 0.5 * |dot| + |dot| * (1 + 0.2 * dist / flDist) <= flDelta and returns the angle delta
	char sub_101764d0();	// stub 0x1000deb8: whether autoaim is active (al)
	char m_szAnimExtension[32];	// 0x20a9
	char m_pad20c9[0x20cc - 0x20c9];
	void *m_pCmd20cc;	// 0x20cc: the user command being run (CPlayerMove::StartCommand stores it)
	Vector m_vecAdditionalPVSOrigin;	// 0x20d0
	Vector m_vecCameraPVSOrigin;	// 0x20dc	// 0x20D0 .. 0x20E7
	int m_n20E8;	// 0x20E8: a message value, 0 on death (vfunc144 sends it with engine slot 67 when g_10726020 is set)
	float m_iRespawnFrames;	// 0x20ec
	int m_afPhysicsFlags;	// 0x20f0	// 0x20EC .. 0x20F3
	char m_b20F4;	// vehicle active flag
	char m_pad20F5[3];	// 0x20F5 .. 0x20F7
	unsigned int m_hVehicle;	// 0x20F8: handle of the vehicle's entity (-1 when none)
	CBasePlayerVehicle *m_pVehicle;	// 0x20FC
	CBasePlayerPartOwner *m_pPartOwner;	// 0x2100
	CBasePlayerPart *m_pPart2104;	// 0x2104
	CBasePlayerPart *m_pPart2108;	// 0x2108
	int m_nPartMode;	// 0x210C
	Vector m_oldOrigin;	// 0x2110
	Vector m_vecSmoothedVelocity;	// 0x211c
	char m_pad2128[0x2130 - 0x2128];
	int m_iTargetVolume;	// 0x2130
	int m_rgItems[5];	// 0x2134	// 0x2110 .. 0x2147
	float m_f2148;	// 0x2148: the next time of the random impulse (sub_10170d60)
	float m_flTimeStepSound;	// 0x214c
	float m_flSwimTime;	// 0x2150
	float m_flDuckTime;	// 0x2154
	float m_flWallJumpTime;	// 0x2158
	float m_flSuitUpdate;	// 0x215c
	int m_rgSuitPlayList[4];	// 0x2160
	int m_iSuitPlayNext;	// 0x2170
	int m_rgiSuitNoRepeat[32];	// 0x2174
	float m_rgflSuitNoRepeatTime[32];	// 0x21f4
	int m_lastDamageAmount;	// 0x2274
	float m_tbdPrev;	// 0x2278
	char m_pad227c[0x2284 - 0x227c];
	int m_n2284;	// 0x2284: effect-4 counter (discipline tick)
	int m_n2288;	// 0x2288: effect-4 target count
	int m_nPoisonDmg;	// 0x228c
	int m_nPoisonRestored;	// 0x2290
	int m_bitsHUDDamage;	// 0x2294
	bool m_fInitHUD;	// 0x2298
	char m_pad2299[0x229a - 0x2299];
	char m_b229A;	// 0x229A
	char m_pad229B[0x22a0 - 0x229b];
	char m_bSilent22a0;	// +0x22a0: toggled by the impulse that prints "Player is audible" / "Player is silent" (vfunc451)
	char m_pad22a1[0x22a8 - 0x22a1];	// 0x229B .. 0x22A7
	float m_f22A8;
	float m_f22AC;
	float m_f22B0;
	char m_pad22b4[0x22bc - 0x22b4];
	int m_iFrags;	// 0x22bc
	int m_iDeaths;	// 0x22c0
	float m_f22c4;
	float m_f22c8;
	char m_pad22cc[0x22e0 - 0x22cc];
	EHANDLE m_hTargetEnt;	// 0x22e0
	int m_ArmorValue;	// 0x22e4
	Vector m_DmgOrigin;	// 0x22e8
	float m_DmgTake;	// 0x22f4
	float m_DmgSave;	// 0x22f8	// 0x22B4 .. 0x22FB
	float m_fl22FC;	// 0x22FC: a time stamp (curtime + 12)
	float m_fl2300;	// 0x2300: the next effect-4 tick time (curtime + 1)
	int m_n2304;	// 0x2304: set while the player is held (sub_10177ba0 clears it after restoring the move type)
	EHANDLE m_hViewModel[2];	// 0x2308
	float m_flMaxspeed;	// 0x2310	// 0x2308 .. 0x2313
	float m_fl2314;	// 0x2314: a time stamp (curtime + 2)
	char m_pad2318[0x2324 - 0x2318];	// 0x2318 .. 0x2323
	int m_n2324;	// 0x2324: set from the command's impulse when there is no vehicle
	float m_flStepSoundTime;	// 0x2328
	float m_flSwimSoundTime;	// 0x232c
	Vector m_vecLadderNormal;	// 0x2330
	float m_nLightLevel;	// 0x233c
	float m_flFlashTime;	// 0x2340	// 0x2328 .. 0x2343
	int m_n2344;	// 0x2344: the effect-4 damage counter (clamped to 5)
	char m_pad2348[0x2358 - 0x2348];	// 0x2348 .. 0x2357
	float m_f2358;	// 0x2358: the command clock (rounded to milliseconds)
	CUserCmd m_Cmd235c;	// 0x235C: the user command the command run processes (0x60 bytes, vptr 0x10462854)
	CBasePlayerHandleVec m_SimulationList;	// 0x23BC (count at +0x23C8)
	int m_iBarterTgtEntIdx;	// 0x23d0
	char m_szWolfBackupName[128];	// 0x23d4	// 0x23D0 .. 0x2453
	unsigned char m_b2454;	// 0x2454
	char m_pad2455[0x245c - 0x2455];	// 0x2455 .. 0x245B
	void *m_pInventory;	// 0x245C: the 5-dword inventory object (created by sub_101835e0)

	// ~CBasePlayer body (sub_1015df00, called by vfunc5 via stub 0x100017d5): views of the members it tears down, in destruction order.
	// Layout stays padding; the element types of the vectors are not known (CUtlVector<int> stands in), see the note on 0x1015df00.
	void sub_1015df00();	// destructor body: vptr 0x1046fbb4, delete [+0x1d24] (dtor stub 0x1000546b), delete [+0x245c] (CUtlVector, RemoveAll 0x10185790 + Purge 0x101857b0), vectors at +0x23bc, +0x1e28 (vptrs CUserCmd 0x10462854 at +0x235c, CPlayerLocalPredictedData 0x10470490 at +0x1e40), +0x1e10, +0x1d90, +0x1d7c, +0x1d68, object +0x1a1c (sub_1017a290), +0x19d8; tail jmp 0x100078c4 -> CBaseCombatCharacter body 0x103274d0
	CBasePlayerSub270 &Sub270() { return *(CBasePlayerSub270 *)((char *)this + 0x270); }	// the small polymorphic object at +0x270 (inside CBaseEntity's m_pad0270)
	int &MoveType3e0() { return *(int *)((char *)this + 0x3e0); }	// 0x3e0: the move type (inside CBaseToggle's m_pad03e0)
	void *&Ptr1d24() { return *(void **)((char *)this + 0x1d24); }	// deleted object (inside m_pad1CE4)
	CUtlVector<int> &Vec1e10() { return *(CUtlVector<int> *)((char *)this + 0x1e10); }	// inside m_pad1E10
	CUtlVector<int> &Vec1d90() { return *(CUtlVector<int> *)((char *)this + 0x1d90); }	// inside m_pad1D90
	CUtlVector<int> &Vec1d68() { return *(CUtlVector<int> *)((char *)this + 0x1d68); }	// overlaps m_pQuestRecords1D68 (its memory pointer) and m_nQuestRecords1D74 (its size)
	CUtlVector<int> &Vec23bc() { return *(CUtlVector<int> *)((char *)this + 0x23bc); }	// same storage as m_SimulationList
	void *Obj1a1c() { return (char *)this + 0x1a1c; }	// object destroyed by sub_1017a290 (no ecx-typed member known), inside m_pad1A00
	int vfunc127(int pRestore);	// slot 127 override, "CBasePlayer::Restore"/Spawn-like (plain member): +0x1e00 = 1; r = sub_10348890(pRestore); stub 0x10015311 (-> 0x1009d960, cdecl 2 args) on +0x1ce0 (2), +0x1ce4 (2), +0x1cf8 (4); on failure +0x1e00 = 0, return 0; sub_103239a0("player"); when the landmark ([gpGlobals+0x20]+0x12dc) is 0: Msg("No Landmark:%s\n", +0x12e0), the entity of slot 453 gives the spawn: slot 62(its slot 220 origin + 1.0f in z), slot 64(its slot 221); then slot 64({0, [+0x2070], [+0x2074]}), +0x2074 = 0, +0x207c = 1, +0x1570 = 0xf7, g_1070ba28 = slot 8(); with sub_100b3700() & 2: sub_1016b750(this), hull (-16,-16,0)..(16,16,36) via sub_101cf390(this, &mins, &maxs), +0x1edd = 1; else +0x1edd = 0 and the hull to 72; slot 468; sub_1017c830; +0x1dc0 = 0, +0x1e00 = 0; sub_10299ce0(pRestore); return 1
	int sub_10348890(CRestore *pRestore);	// CBaseCombatCharacter::vfunc127 (stub 0x10010d48), called directly
	void sub_103239a0(const char *pszName);	// CBaseCombatCharacter member (stub 0x10015bcc), called with "player"
	float sub_1017d900();	// fade progress 0..1 of the timer at +0x19b8 / +0x19bc (needs a live entity at +0x19c0 or +0x19cc), resets the fade fields when it has ended
	void sub_10177120();
	void sub_101835e0();	// "CBasePlayer::Inventory_CreateKey": scope trace (entity name), then allocates the 5-dword inventory object at +0x245c when it is not there yet
	int sub_1017ddd0();	// the decoded value at +0x1cd8, or a convar override
	float sub_1017deb0(int level, float time);	// the lapse time for a criminal level (ret 8, this in ecx), called by sub_1017e150
	int sub_10175290();	// slot 444: refreshes the counter at +0x1e08, else the field at +0x45c of the entity at +0x1e04
	CBaseEntity *sub_1015dc60();	// slot 167 override: resolves the entity handle at +0x1c60 (null when stale)
	bool sub_10168e10();	// slot 361 override: true when the entity handle at +0xfe8 does not resolve
	bool sub_1015ff40();	// slot 411: true when the byte at +0x1edc is set, or the float at +0x19b0 (stamped with curtime while slot 158 of the entity at +0x1c58 is true) is positive and less than 5 seconds old
	CBaseEntity *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100017d5();	// as in CPhysForce (transplant)
	float *vfunc367(float *out);	// as in CBaseEntity (transplant)
	int sub_101647a0(int act);	// NPC_TranslateActivity: scope-traced, 0x16 -> 9, 0x17 -> 0x13
	int sub_1033e4a0();	// CBaseCombatCharacter::vfunc124 (0x1033e4a0, stub 0x1000eeda): the base DrawDebugTextOverlays, called directly
	void sub_1017c300();	// "CBasePlayer::SimulatePlayerSimulatedEntities" (stub 0x1000a5a1, called by vfunc437): two scope traces (the second "...-untouch"), loop 1 over m_SimulationList (count-1..0): dead handle -> FindAndRemove, else entity->sub_10040390(); loop 2: live entity with bit 0 of the byte at +0x26b -> sub_1003d490(), dead handle -> removed with the inline compare loop
	void sub_1017c1d0(CBaseEntity *pEnt);	// "CBasePlayer::RemoveFromPlayerSimulationList": removes the entity from the handle vector at +0x23bc (count at +0x23c8) by shifting the tail down
	CBaseEntity *sub_10081890();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_100dead0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_101618a0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_10167470(char bFlag);	// "CBasePlayer::..." (0x10167470, this in ecx, ret 4, returns a CBaseEntity*): the "entity in front of the player" tracer. Returns 0 when the dialog-partner handle +0xfe8 resolves, when +0x153c != -1 and the handle +0x1538 resolves, when sub_101618a0() is set, when the local player object (sub_1023bd00()) has +0x4ac set, or when sub_10341c30 (trace-based finder, 80.0f and a cos half-angle from the convar 0x10725cec slot 1 / +0x28) returns non-zero; otherwise it does two traces (masks 0x600408b then 0x2004089, Ray_t from EyePosition slot 193 and BodyDirection3D slot 369, CTraceFilterSimple(this, 0), g_1070b254->vfunc4) and returns the hit entity when it answers !sub_100a52a0() and either its +0x98 object's slot 295 (this) is true or its +0xa0 object is passed to slot 382
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
	void sub_1015efa0();	// CHL2_Player's slot 103 ends with it (it was named vfunc103, but CBasePlayer's slot 103 is 0x1016d260): slot 407, sub_1015ef00, SetSolid(0) (inlined scope trace), move type (9, 0), sub_101cf600(this), RemoveFlag(1), then slot 457("item_w_fists", 0)
	void sub_1017d460(CBaseEntity *pEnt, float flBlend);
	void sub_1017d280(CBaseEntity *pEnt, float flBlend);
	void sub_1017d0b0(float flBlend);	// stub 0x100051d2, called by CBaseCombatCharacter::SetAsCameraTarget(this, 0) for every connected player
	void *sub_1032e120(const char *pszName);	// CBaseCombatCharacter::Weapon_Create (stub 0x1000b0b4), called directly
	void sub_1032d380(CBaseEntity *pWeapon, char bNoSwitch);	// CBaseCombatCharacter::vfunc383 (stub 0x100032b0), called directly
	void *sub_10335950(const char *pszName);	// CBaseCombatCharacter::Inventory_FindWeapon (stub 0x10015195): the carried weapon whose classname matches, 0 when none; called directly
	void sub_101784c0(CBaseEntity *pOther);	// adds the keyring item the player carries to the inventory object at +0x245c: lets the keyring look at pOther, creates the inventory when needed, hands it the loose keys and copies the keyring's records into it
	void sub_10182e00(CBaseCombatWeapon *pWeapon);	// "CBasePlayer::SetViewModel"-like: the model name of the character's default stat item for the weapon (or none when the weapon is not a ranged / usable one) is precached and handed to slot 266 of the second view model
	void sub_101711e0(float flThreshold);
	Vector *sub_10176520(Vector *pOut, float flScale);	// 0x10176520 "CBasePlayer::GetAutoaimVector": the view-angles helper called by vfunc436 / weapon code (CWeaponRanged::vfunc373 and CBaseCombatWeapon::vfunc326 push the float 0.087f = 0x3db27eb6); returns pOut
	void sub_10176930(Vector *pOut, Vector *pAngles, float flScale, int nFlag);	// 0x10176930 (ret 16): the trace/aim helper called by sub_10176520	// resets the vector pair at +0x1efc / +0x1f08 to the zero vector unless the threshold is non-zero and the pair's squared length is above flThreshold squared
	void sub_10170d60();	// the random impulse: once curtime passes the float at +0x2148 (5 seconds ahead again), clears the field at +0x210, builds a damage info (this, this, 10.0f, 0x1000) and hands slot 144 a random force vector (each component rand() * 9.155653e-5 + 2.0)
	void sub_100b1d10();	// CBaseEntity member (stub 0x1000d486), called directly by slot 434
	void vfunc434();	// slot 434 (plain member): with the player on the ground (flags bit 0, not bit 2, move type below 2): slot 449(2, 0), stamps the time at +0x148c and, when the entity of slot 209 has flag bit 12, hands the velocity plus the base velocity to sub_100b2e30

	void vfunc25(int pOther);	// slot 25 override (plain member beside the placeholder sa25; twin of slot 26): with an entity, the handle at +0x1c60 becomes the handle of its owning object (+0x9c, -1 when none)
	void vfunc26(int pOther);
	datamap_t *vfunc82();	// slot 82: the class's datamap
	int vfunc138();	// slot 138	// slot 26 override (plain member beside the placeholder sa26; twin of slot 25): with an entity, the handle at +0x1c60 becomes the handle of its owning object (+0x9c, -1 when none)
	void vfunc339(int a, float b, int c);	// slot 339: forwards to CBaseCombatCharacter::vfunc339 (float second argument)
	int vfunc340(int a, float b, float c);	// slot 340 (plain member): forwards unchanged to CBaseCombatCharacter::vfunc340
	int sub_10345480();	// CBaseAnimating member (transplant): handle at +0x6f0 -> sequence descriptor -> its +0x2e8 offset, -1 when none
	char sub_10160dc0();	// CBaseAnimating member (transplant): the float at +0x6f8 lies in the sequence descriptor's +0x2f0..+0x2f4
	char sub_101611e0(void *pEnt);	// stub 0x10008cfb: always false (xor al,al; ret 4)
void sub_1016c9d0();
	void sub_101707c0(int unused, int bTouch, const char *pszLandmark);
	void sub_100b3b00();
	void sub_10170b00();
	void sub_1017e6f0(int a);
	void sub_10170090();
	void sub_1033f6d0();
	char sub_10167370();
	void sub_1017ed00(int level, CBaseEntity *pNPC, const Vector &vecLocation);	// the cops response request: unless hunters pursue, remembers level / NPC / location (a higher level replaces a pending one) and arms the timer +0x1cf8 with a random delay
	void sub_10181be0();
	void sub_10174580();
	int sub_1017d630();
	int sub_10182810();
#include "CBasePlayer_ext.h"
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc114();	// slot 114 (0x10174dd0): a tail call of CBaseEntity::vfunc114 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	char vfunc428(void *, int);	// slot 428 (0x10161fa0): a tail call of CBaseEntity::vfunc428 (no such slot in this view: plain)
};
