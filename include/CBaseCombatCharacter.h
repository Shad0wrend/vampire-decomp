// CBaseCombatCharacter: base of NPCs and players.
// Only the members the recovered code needs are declared.
// New method declarations can go into CBaseCombatCharacter_ext.h / CBaseCombatCharacter_ext2.h (included at the end of the class body).
#pragma once
#include "string_t.h"
#include "CBaseCombatWeapon.h"

#include "CBaseEntity.h"
#include "CVStatList_t.h"
#include "QAngle.h"

struct inputdata_t;
struct CBaseFlexItem;

class CBaseCombatCharacter;
void __fastcall sub_103234a0(CBaseCombatCharacter *pThis);	// 0x103234a0 "CBaseCombatCharacter::RemoveFromPresenceList" (free __fastcall form: ecx = this)

#define CBCC_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CBaseCombatCharacter : public CBaseEntity
{
public:
	// Placeholder slots 134..251 (the base declares slots up to 133).
	virtual void a00(); virtual void a01(); virtual void a02(); virtual void a03(); virtual void a04();
	virtual void a05(); virtual void a06(); virtual void a07(); virtual void a08();
	virtual int vfunc124();	// slot 124 "CBaseCombatCharacter::DrawDebugTextOverlays": scope trace (entity name), CBaseEntity::vfunc124's next free line, then with overlay flag 0x400 (+0x224) one line per stat (0..0x22) of the owner's (+0x9c) stat list and a "Reaction: %s" line, then the discipline lines and "NPC: %s" when the AI object (+0x94) exists; returns the next free line
	virtual int vfunc143(float flHealth, int bitsDamageType);	// "CBaseCombatCharacter::TakeHealth": scope trace (entity name), 0 when the take-damage mode at +0x1fc is zero, else CBaseEntity::vfunc143
	void vfunc144(void *pInfo);	// slot 144 "CBaseCombatCharacter::Event_Killed" (0x1032b9b0): kill setup, weapon drop, ragdoll force; declared as a plain member (the base CBaseEntity declares the same signature)
	CBCC_SLOTS10(a1)
	virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23();
	virtual char vfunc158();	// slot 158 (CBaseEntity::vfunc158 is the same slot, declared there as a plain member)
	virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29();
	CBCC_SLOTS10(a3) CBCC_SLOTS10(a4)
	CBCC_SLOTS10(a5) CBCC_SLOTS10(a6) CBCC_SLOTS10(a7)
	virtual void a80(); virtual void a81(); virtual void a82(); virtual float *a83();	// slot 217 "CBaseEntity::GetAbsOrigin"
	virtual void a84();
	virtual float *a85();	// slot 219 "CBaseEntity::GetAbsAngles"
	virtual float *a86(); virtual void a87(); virtual void a88(); virtual void a89();
	virtual void a90(); virtual void a91(); virtual void a92(); virtual void a93();
	virtual void vfunc228(int a, int b);	// "CBaseCombatCharacter::VPhysicsShadowCollision"-like: scope trace, forwards to slot 75(a, b)
	virtual void a95(); virtual void a96(); virtual void a97(); virtual void a98(); virtual void a99();
	CBCC_SLOTS10(b0)
	virtual const char *vfunc244();	// "CBaseCombatCharacter::GetSkeletonModelName": scope trace, male or female skeleton model path (IsMale)
	virtual void b11(); virtual void b12(); virtual void b13();
	virtual void b14(); virtual void b15(); virtual void b16(); virtual void b17();
	virtual int vfunc252(int a, int b, int c);
	virtual int vfunc253(int a, int b, int c);
	virtual int vfunc254(int a, int b, int c);
	// Placeholder slots 255..373.
	virtual void c255(); virtual void vfunc256(int nBone, float *pMatrix); virtual void c257(); virtual void c258(); virtual void c259();
	CBCC_SLOTS10(c26) CBCC_SLOTS10(c27)
	virtual void c280(); virtual void c281(); virtual void c282(); virtual void c283();
	virtual void vfunc284();	// "CBaseCombatCharacter::AddSceneEx...": scope trace (entity name), runs every queued scene item of the vector at +0xa58 (0x1c byte elements, count at +0xa64): a type 10 item whose object is set goes to slot 289, then the item is marked handled (byte +8)
	virtual void c285(); virtual void c286(); virtual void c287(); virtual void c288();
	virtual void vfunc289(CBaseFlexItem *pItem);	// slot 289: starts a queued scene item
	virtual void c290(); virtual void c291();
	virtual void vfunc292(int unused1, const Vector *pDirection, int unused2);	// slot 292 "CBaseCombatCharacter::DamageFlinch": scope trace (entity name); picks one of two flinch gestures at random (0x73 / 0x74) and plays it through slot 265 with 0.1 / 0.3 and a "hit_yaw" of the angle toward the damage direction (when it points anywhere) plus a random -30..30 degrees
	virtual void c293(); virtual void c294(); virtual void c295x(); virtual char vfunc296(int a); virtual void c297();
	virtual int vfunc298(int nSection);	// slot 298: the number of weapon slots of inventory section nSection
	virtual void c299();
	CBCC_SLOTS10(c30)
	virtual void c310(); virtual void c311(); virtual void c312(); virtual void c313(); virtual void c314();
	virtual void vfunc315();	// slot 315 (+0x4ec) "CBaseCombatCharacter::MeleeSwingUpdate"
	virtual void c316(); virtual void c317(); virtual void c318(); virtual void c319();
	virtual void c320(); virtual void c321(); virtual void c322();
	virtual int vfunc323(const Vector *pDirection);	// slot 323: which side of the character a horizontal direction is on: 0 when the direction has no horizontal length, else by the angle (0..360) between the character's yaw (slot 219) and the direction's yaw: 2 for 316..360 and up to 45, 3 up to 135, 0 up to 225, 1 beyond
	virtual void c324(); virtual void c325(); virtual void c326(); virtual bool vfunc327(); virtual void c328(); virtual void c329();
	CBCC_SLOTS10(c33)
	virtual void c340(); virtual void c341(); virtual void c342(); virtual void c343(); virtual void c344(); virtual void c345(); virtual void c346(); virtual void c347();
	virtual int c348();	// slot 348 (see vfunc348, the plain member, for what it does)
	virtual void c349();
	virtual void c350(); virtual void c351(void *pTarget); virtual void c352(); virtual void c353(); virtual void c354(); virtual void c355(); virtual void c356(); virtual void c357(); virtual void c358(); virtual int vfunc359(int a);
	virtual char vfunc360();	// slot 360 (+0x5a0): a bool-like byte result, read by InputFrenzyTrigger
	virtual void c361(); virtual void c362(); virtual void c363(); virtual void c364(); virtual void c365();
	virtual void c366(); virtual void c367(); virtual void c368(); virtual void c369();
	virtual void c370(); virtual void c371(); virtual void c372(); virtual void c373();
	virtual int vfunc374(int count, int ammoIndex, int unused);	// slot 374 "CBaseCombatCharacter::GiveAmmo" by index
	void vfunc386();	// slot 386 "CBaseCombatCharacter::Weapon_Drop" (plain: a virtual here would shift the derived classes' slots)
	void sub_1032cbe0(void *pWeapon);	// unnamed 0x1032cbe0

	bool sub_1032db60(void *pWeapon);
	void sub_1032c6a0(CBaseEntity *pObject);
	int sub_103302e0(struct CTakeDamageInfo *pInfo);	// CBaseCombatCharacter::vfunc390 (OnTakeDamage_Alive, 0x103302e0), called directly by the player override
	float sub_10331770(float flDamage);	// 0x10331770: the damage-scaled force factor (called by CBasePlayer::vfunc390)	// "CBaseCombatCharacter::Weapon_CanSwitchTo": scope trace (entity name); false when the new weapon refuses (slots 312, 314) or the active weapon cannot be holstered (slot 313); then, for a player that is in a state sub_101681a0 / the switch lock describes, false (the \"item_w_unarmed\" message 0x3d is sent unless the new weapon is the unarmed one); else true (stub 0x10014c77)
	bool sub_1033d2f0(int nFlags);	// "HasDiscFlag": stub-less member (ret 4); a flag >= 0 is tested against the mask at +0xeb0, a negative flag (sign bit stripped) against +0xeb4; called by 0x101e3560 / 0x101e3730 (the old CUnknown1033d2f0.h view has the same body, score 8 on the js)
	bool sub_1033d330(unsigned int nFlags);	// copy of sub_1033d2f0 (HasDiscFlag, stub 0x100054ac, ret 4): flag >= 0 tests (+0xeb8 | +0xeb0), a negative flag (sign bit stripped) tests (+0xebc | +0xeb4); called by CDisciplineParticle::Update 0x100511e0 (0x1033d330: score 11 so far, the game keeps the parameter in edx)
	bool sub_10336920();	// "CBaseCombatCharacter::IsMale" (matched under the provisional class name Ent)
	void sub_103326b0(float amount);
	void sub_10339560();
	void sub_10337980(int nHistory);	// sets the character's history (-1 for none), called directly
	int sub_10337a60();	// "CBaseCombatCharacter::GetVHistor..." getter
	int sub_10323210();	// "CBaseCombatCharacter::GetPresenceBenefit": returns the field at +0xe80
	int sub_103232b0();	// "CBaseCombatCharacter::GetShakyHandsPenalty": scope trace, the dword at +0xe88, or (int)(2 * slot 344) when it is zero
	void sub_10324500(int action);	// "CBaseCombatCharacter::SetIdealActivity": stores the argument at +0xff0
	void sub_103245a0(int translated);	// "CBaseCombatCharacter::SetTranslated...": stores the argument at +0xff4
	char sub_10325fa0();	// "CBaseCombatCharacter::HasAlienGibs": calls slot 138 and returns false
	void sub_10327960(int color);	// "CBaseCombatCharacter::SetBloodColor": stores the argument at +0x1570
	int sub_103282e0();	// "CBaseCombatCharacter::GetGrappleSize": normalises the result of IsMale (0x10336920) to 0/1
	void sub_10334500(int amount, int ammoIndex);	// "CBaseCombatCharacter::RemoveAmmo": scope trace (entity name), subtracts amount from the count at +0x15a4 + ammoIndex*4, clamped at 0
	void sub_10334600(int count, int ammoIndex);	// "CBaseCombatCharacter::SetAmmoCount": stores count at +0x15a4 + ammoIndex*4
	int sub_103346c0(int ammoIndex);	// "CBaseCombatCharacter::GetAmmoCount": scope trace, the dword at +0x15a4 + ammoIndex*4 (0 for index -1)
	int sub_103343f0(int count, const char *pszAmmoName);	// "CBaseCombatCharacter::GiveAmmo" (by name): scope trace (entity name), looks the name up in the ammo definitions (global at 0x1070ba0c), then slot 374(count, index, 0); Msg when unknown
	void sub_10346760();	// "CBaseCombatCharacter::ForceMeleeReset": scope trace (entity name), sets the byte at +0xaa1 and clears the bytes at +0xaa0/+0xaa2/+0xaa3 and the dword at +0xa94
	bool sub_10338190(class CUnknown10204e90 *pRef);	// "CBaseCombatCharacter::VStatBuy": scope trace (entity name), pays the cost of the referenced stat from stat 0x22 of the active stat list when the stat's own list accepts the purchase
	void sub_1033ca60();	// "CBaseCombatCharacter::ClearMiscFlags": stores 0 at +0xfe4
	void sub_1033c6b0(unsigned int flags);	// "CBaseCombatCharacter::AddMiscFlag": scope trace (entity name), ORs flags into +0xfe4
	void sub_1033c770(unsigned int flags);	// "CBaseCombatCharacter::RemoveMiscFlag": scope trace (entity name), clears flags in +0xfe4
	void sub_1033c830(unsigned int flags);	// "CBaseCombatCharacter::ToggleMiscFlag": scope trace (entity name), clears flags in +0xfe4 when any are set, else sets them
	bool sub_1033c900(unsigned int flags);	// "CBaseCombatCharacter::HasMiscFlag": scope trace (entity name), (flags & +0xfe4) != 0
	bool sub_1033ce10(unsigned int low, unsigned int high);	// "CBaseCombatCharacter::HasDisciplineEffects": scope trace (entity name), (low & +0xeb0) != 0 or (+0xeb4 & high & 0x7fffffff) != 0
	void sub_1033cfb0(unsigned int flag, float duration, CBaseEntity *pSource, unsigned int extra);	// "CBaseCombatCharacter::AddDiscFlag": scope trace (entity name), when the flag is not yet in the mask at +0xeb0 / +0xeb4 sets it, stores the expiry time at +0xec0 + index*4 and appends a 16 byte record (flag, source handle, extra, source dword at +0xfb0) to the vector at +0xfb4
	bool sub_10341aa0();	// "CBaseCombatCharacter::IsUnconscious": scope trace (entity name), then bit 0 of the byte at +0xfe4
	void sub_10341b60(char unconscious);	// "CBaseCombatCharacter::SetUnconscious": scope trace (entity name), sets or clears bit 0 of +0xfe4
	void sub_10322800(unsigned int flags, int a);	// "CBaseCombatCharacter::SetOccultPowerFlag": scope trace, ors flags into the dword at +0xe38
	void sub_1033d8a0(inputdata_t *data);	// "CBaseCombatCharacter::InputClearActiveDisciplines": scope trace (entity name), then sub_10147a60()
	void sub_10147a60();
	void sub_10107050(CBaseEntity *pEnt);	// "CBaseCombatCharacter::SetDialogPartner": scope trace (entity name), stores pEnt's handle at +0xfe8 (-1 for null)
	int sub_10336a50();	// "CBaseCombatCharacter::HasUsableMeleeWeapon" worker
	bool sub_10106f90(int expression);	// "CBaseCombatCharacter::IsValidExpression": forwards to the global expression table
	const char *sub_101073c0(int expression);	// "CBaseCombatCharacter::GetExpressionName": forwards to the global expression table
	void sub_101063a0();	// "CBaseCombatCharacter::FadeoutExpressions": scope trace (entity name), clamps the float at +8 of each 0x20-byte expression record (array at +0x10bc, count at +0x10c8) to gpGlobals->curtime
	void sub_10106580(const char *pszName, int d, float a, float e, float b, float flStrength);	// "CBaseCombatCharacter::SetExpression": scope trace (entity name), FadeoutExpressions, then the strength: below 0 with a dialog partner it comes from the distance record (+0x1460) of the two edicts, clamped to 100 and scaled by 0.01, else anything outside 0.1..1.0 becomes 0.5; hands everything to sub_101067e0 (stub 0x10005e8e)
	void sub_10105e20(float *weights, char *pExpression);	// "CBaseCombatCharacter::MakeFlexweightsFromExpression": scope trace (entity name), zeroes the 128 weights, then copies each (value, index) pair of the expression (count at +0x184, pairs from +0x44) into weights[index]; warns "bad expression data" for null
	void sub_10014eb6(int a, int b);	// "CBaseCombatCharacter::GetCameraViewpointPositionBase"-like worker called by slot 50
	void sub_10332570(inputdata_t *data);	// "CBaseCombatCharacter::InputSetHeadAsCameraTarget": scope trace, then sub_103322e0(1, 0)
	void sub_10332610(inputdata_t *data);	// "CBaseCombatCharacter::InputSetBodyAsCameraTarget": scope trace, then sub_103322e0(0, 0)
	void sub_103322e0(int a, int b);
	char sub_10339b50();	// "CBaseCombatCharacter::IsBlueBlood": scope trace (entity name), then the byte at +0x93 of this entity's stat record
	char sub_10339c10();	// "CBaseCombatCharacter::HasBadBlood": same shape as sub_10339b50, byte at +0x94
	char sub_10339cd0();	// "CBaseCombatCharacter::FeedsOnBlueBloodsOnly": same shape as sub_10339b50
	void sub_10325940(inputdata_t *data);	// "CBaseCombatCharacter::InputLookAtEntityEye": scope trace, finds the named entity, then sub_10325cb0(ent, 1)
	void sub_10325a30(inputdata_t *data);	// "CBaseCombatCharacter::InputLookAtEntityCenter": same shape as sub_10325940
	void sub_10325b20(inputdata_t *data);	// "CBaseCombatCharacter::InputLookAtEntityOrigin": same shape, sub_10325cb0(ent, 3)
	void sub_10325c10(inputdata_t *data);	// "CBaseCombatCharacter::InputLookAtEntityDefault": scope trace, then sub_10325cb0(0, 0)
	void sub_10325cb0(void *ent, int a);
	void sub_1033ea90(inputdata_t *data);	// "CBaseCombatCharacter::InputFrenzyCheck": scope trace (entity name), then sub_1033eb60(integer value or 0)
	void sub_1033f3f0(inputdata_t *data);	// "CBaseCombatCharacter::InputHungerCheck": same shape as sub_1033ea90
	void sub_1033eb60(int value);
	void sub_1033f4c0(int value);	// "CBaseCombatCharacter::HungerChec...": scope trace (entity name), when the dword at +0x146c is not positive calls sub_1033eb60(value) and, if it became positive, sets the byte at +0x1474
	void sub_1033f270(inputdata_t *data);	// "CBaseCombatCharacter::InputFrenzyTrigger": scope trace (entity name), when the frenzy count at +0x146c is not positive and sub_10337f30() holds: DevMsg, slot 360, count = 10 and queues "FrenzyUpdate"
	void sub_1033f590(inputdata_t *data);	// "CBaseCombatCharacter::InputFrenz...": scope trace (entity name), counts down the dword at +0x146c; while it stays positive queues the "FrenzyUpdate" input on itself after 1.0 / the float at +0x1488, else sub_1033f6d0()
	void sub_1033f6d0();
	char sub_103268e0(const float *pos, int a);	// "CBaseCombatCharacter::FInViewCone" worker of vfunc362
	void sub_1032f930(int amount);	// "CBaseCombatCharacter::IncrementStealthModifier": scope trace (entity name), adds amount to +0x1084
	void sub_1032f9f0(int amount);	// "CBaseCombatCharacter::DecrementStealthModifier": scope trace (entity name), subtracts amount from +0x1084
	int sub_1032fab0();	// "CBaseCombatCharacter::GetStealth": scope trace (entity name), the stealth modifier at +0x1084 clamped to -10..10
	void sub_10340bd0(inputdata_t *data);	// "CBaseCombatCharacter::InputPlayFloat": scope trace (entity name), then slot 507 of the object at +0x98 (when set)
	bool sub_1033e2b0();	// "CBaseCombatCharacter::IsBusyWithDiscipline": scope trace (entity name), then bit 0 of the byte at +0x14b8
	bool sub_1033b7c0();	// "CBaseCombatCharacter::InPrayer": scope trace (entity name), then the dword at +0xfec is in 0x130..0x133
	void sub_103483c0(int a, int b, int c);	// "CBaseCombatCharacter::BeginMeltEffect": scope trace (entity name), stores b at +0x19a8, 0x20 at +0x168, c at +0x19ac, then CBaseAnimating::sub_10090890(a)
	void sub_10348490(int a, int b, int c);	// "CBaseCombatCharacter::BeginUnmeltEffect": same as BeginMeltEffect with 0x21 at +0x168
	char sub_10337300();	// "CBaseCombatCharacter::ChooseBestRangedWeapon": scope trace (entity name), weapon = slot 309(); when set calls slot 388(weapon, 0) and returns true
	char sub_10334860(void *pCurrent);	// "CBaseCombatCharacter::SwitchToNextBestWeapon": scope trace (entity name), next = slot 20 of the global at 0x1070ba0c(this, pCurrent); when it is set and differs from pCurrent returns slot 388(next, 0), else false
	void sub_1032e9f0(int index, CBaseEntity *pWeapon);	// "CBaseCombatCharacter::SetWeapon": scope trace (entity name), stores the weapon's handle in the array at +0x1624 (-1 for null)
	void *sub_1032e8b0(int index);	// "CBaseCombatCharacter::GetWeapon": scope trace (entity name), the entity behind the handle at +0x1624 + index*4 when it resolves and its dword at +0x73c is not 0xff, else null
	float sub_10346070();	// "CBaseCombatCharacter::GetRawAttackValue": scope trace (entity name), without an active weapon 0.0f; the global at 0x1093720c (slot 1 false and the float at +0x28 negative) selects the weapon's attack source value, else that float (0 when slot 1 is true)
	void sub_103221b0(const char *msg);	// "CBaseCombatCharacter::DebugFeedTrace": scope trace (entity name), DevMsg("%f : Feeding - %s\n", gpGlobals->curtime, msg or "Feed Trace")
	void sub_1032aa40();	// "CBaseCombatCharacter::Weapon_FrameUpdate": scope trace (entity name), when the active weapon handle at +0x19a4 resolves calls slot 369(this) on that weapon
	void sub_1032e210(void *pEvent);	// "CBaseCombatCharacter::Weapon_HandleAnimEvent": scope trace (entity name), when the active weapon handle at +0x19a4 resolves calls slot 370(pEvent, this) on that weapon
	void sub_1032a910(int a, int b);	// "CBaseCombatCharacter::Weapon_SetActivity": scope trace (entity name), when the active weapon handle at +0x19a4 resolves calls slot 338(a, b) on that weapon
	void sub_1033df80();	// "CBaseCombatCharacter::ApplyDisciplineSpawnFlags": scope trace (entity name), translates spawn flag bits 5, 6, 12, 13, 14, 15 (dword at +0x204) into bits 0..5 of the discipline flags at +0xeac
	char *sub_10345980(CBaseEntity *pEnt);	// "CBaseCombatCharacter::GetMeleeDiceRolls": scope trace (entity name), finds the 16 byte record (array at +0xa88, count at +0xa94) whose leading handle resolves to pEnt; null when none
	int sub_10345de0(CBaseEntity *pEnt);	// "CBaseCombatCharacter::GetNumAttackSuccesses": as GetMeleeDiceRolls, returns the second dword of the record (0 when none)
	void *sub_1032f550(int nHitBox);	// "CBaseCombatCharacter::GetFireParticleForHBox": scope trace (entity name), needs the burning flag (+0x1480) and the model; creates a "DMGFX_body_fire_emitter" for the hit box's bone in a free slot of the emitter handles (+0xff8) unless one already serves that bone
	bool sub_10170fe0();	// 0x10170fe0: true when any of the 0xe0 weapon slots holds a weapon
	bool sub_10167320();	// 0x10167320 (called by 0x101be1f0): not on the player's busy list, sub_101671a0 holds and the active weapon has its byte at +0x872 set
	void sub_10323370();	// "CBaseCombatCharacter::AddToPresenceList": scope trace (entity name), appends this entity's handle (-1 when this is null) to the global vector of handles at 0x109370bc
	Vector sub_1032b290(void *pInfo);	// 0x1032b290: the ragdoll force vector of the damage info (returned by value, ret 8)
	void sub_100532b0();	// "CBaseCombatCharacter::UpdateAuspex" (0x100532b0, called by the think at 0x100521e0)
	void sub_10052030();	// "CBaseCombatCharacter::RemoveDisc...": scope trace (entity name), for every handle of the vector at +0x14c0 (size at +0x14cc): sets the entity's dword at +0x4b8 to -1 and removes it (sub_101cd940) or, with the byte at +0x4c5 set, delays its removal by SetNextThink(10.0f); clears the entry, then empties the vector (frees the memory unless the grow size at +0x14c8 is -1)

	void sub_1033e0a0(int nDiscipline, int unused1, CBaseEntity *pUnused2);	// "CBaseCombatCharacter::AddFakedDisciplineEffect": scope trace (entity name), plays the discipline's sound (the string at +0xe4 of its record in the table at 0x1074e098; precached first) from this entity's edict to the players that can hear it (a PAS attenuation filter built inline), unless the name is empty or starts with a blank; takes three stack arguments, only the first is used

	// Slots called directly so far; declared as plain members.
	int vfunc240();	// slot 240: returns the int global at 0x1072b360 (read by 0x1014f8b0, written by PyServerSystem::vfunc0)
	int vfunc372(int a);	// slot 372: vtable slot 370 with the argument, then the argument
	int vfunc145();	// slot 145: the blood color at +0x1570
	bool vfunc73(CBaseEntity *pOther);	// "CBaseCombatCharacter::CausesImpactDamage": scope trace, (pOther's flags at +0x434 & 0x20000000) != 0
	bool vfunc295(int a);
	void *vfunc309();	// returns the best ranged weapon (or null)
	int vfunc307();	// "CBaseCombatCharacter::HasUsableMeleeWeapon": scope trace (entity name), then sub_10336a50
	void vfunc333(int a);
	float vfunc344();	// "CBaseCombatCharacter::GetShakyHandsIntensity": scope trace, the float at +0x1050 when the dword at +0x1044 is >= 0, else a constant
	void vfunc335();
	void vfunc336();
	int vfunc337();
	void vfunc338(int a, int b, int c);
	void vfunc339(int a, int b, int c);
	void vfunc339(int a, float b, int c);	// the real signature (float second argument), see CBasePlayer::vfunc339
	void vfunc340(int a, int b, int c);
	void vfunc358();	// "CBaseCombatCharacter::PrayerEnd": scope trace (entity name), clears the prayer state at +0x14a8/+0x1475/+0x1478/+0x14aa, +0x14ac = -1, +0xff0 = 0x133 and, when the object at +0xa8 is set, slot 93(3, 0)
	char vfunc362(const float *pos);	// "CBaseCombatCharacter::FInViewCone": scope trace, then sub_103268e0(pos, field at +0x1574)
	int vfunc365(CBaseEntity *pTarget);	// "CBaseCombatCharacter::FInAimCone": scope trace (entity name), returns slot 364(target slot 197(buf, slot 193(buf), 1, 0))
	QAngle vfunc367();	// "CBaseCombatCharacter::BodyAngles": scope trace (entity name), returns the three floats returned by slot 219 by value
	int vfunc376(int a);
	char vfunc379(CBaseEntity *pTarget, int nRole, int nType, int a4, int a5, int a6, char bHolster);	// "CBaseCombatCharacter::EnterGrappleState"
	void vfunc387();
	char vfunc394();	// slot 394 (+0x628) "CBaseCombatCharacter::CorpseGib" (0x10327a90, declared as a plain member like its neighbours; a virtual declaration of slots 375..397 shifts the placeholder padding of a matched source, 0x100d2b30): scope trace (entity name); when slot 396 (+0x630, bool in al) holds: sub_10129dc0(this) (cdecl), a "prop_physics" gib at sub_100a9ab0(name, slot 217(slot 219(0))) named by the character's model (slot 105), flags |= 0xa0 at +0x19c, origin / angles copied (through the object at +0x36c slots 40 / 39, else the +0x3bc.. fields, then sub_100b2f50), slot 266(this) on the prop; else when slot 397 (+0x634) holds sub_1012a6e0(this, 4, 1); then with sub_10337e40() and RandomInt(1, 20) > 19 an "item_w_severed_arm" (sub_100a9ab0, slot 103); returns true (bl)
	char vfunc388(void *weapon, int a);	// switches to the given weapon (Weapon_Switch); true when it became active
	int vfunc392(void *pInfo);	// "CBaseCombatCharacter::OnTakeDamage_Dead": scope trace (entity name), unless the life state at +0x1fc is 1 lowers the health at +0x210 by the info's damage (a CVDmg_t at info+0 when set, else the float at info+0x30); returns 1
	int vfunc393();
	char vfunc402();	// slot 402 "CBaseCombatCharacter::Event_Gibbed": scope trace (entity name), tests the violence_hgibs / violence_agibs convars, take-damage mode 0, AddSolidFlags(4) (inlined scope trace), +0x200 = 2; gibbing calls slot 395 and returns false, else slots 66 and 394
	void vfunc403();
	int vfunc404(CBaseEntity *pTarget);	// "CBaseCombatCharacter::IRelationType": scope trace (entity name), 0 for itself / null, 1 / 3 from the faction flags at +0x14bc, else the disposition of the relationship record (+0x1598, count +0x15a0) of the target or of its class (slot 138), 4 when none
	void vfunc50(int a);	// scope-traced wrapper around sub_10014eb6(a, 0)
	void vfunc51(int unused, float *pOut);	// "CBaseCombatCharacter::GetCameraTargetPosition": scope trace (entity name), with the flag byte at +0x10d4 set sub_10014eb6(pOut, 0), else copies the vector slot 192 returns into pOut
	virtual void vfunc105(const char *pszModel);	// slot 105 "CBaseCombatCharacter::SetModel": scope trace (entity name), CBaseFlex::vfunc105, then from the model header the legs flag (stat 0xb of the active stat list, +0x13cc), the aim_pitch / aim_yaw pose parameters (+0x106c / +0x1070) and the Bip01_Head bone with its axis (+0x1080 / +0x1074); +0xbc = -1
	void sub_10106c40();	// "CBaseCombatCharacter::ReloadExpressionsForMyModel" (stub 0x10001203), called directly
	void sub_100b5ab0(const char *pszModel);	// CBaseFlex::vfunc105 (stub 0x10013813), called directly
	void vfunc119();	// "CBaseCombatCharacter::Kill": scope trace (entity name), then CBaseEntity::vfunc119
	bool vfunc326(int unused1, int unused2);	// slot 326: false when the character's default stat item has the byte at +0x9e set or the first stat list with a zero field at +0x10 (default list when none) is IsEqual(0xf, 0x11); else slot 158 as a bool
	Vector vfunc369();	// "CBaseCombatCharacter::BodyDirection3D": scope trace (entity name), AngleVectors of slot 367 (BodyAngles) into a local forward vector, returned by value
	void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);	// AngleVectors (stub 0x10002310)
	void vfunc104();	// slot 104 "CBaseCombatCharacter::Precache": scope trace (entity name), the character's stat record is precached through the default item list (global 0x10738d10), then, depending on sub_102f9970, either slot 337's answer goes to sub_102f9920 or the spawn-after-links check (slot 337 masked by sub_102f9950 must equal slot 337) prints the "ERROR" DevMsg block and gives up

	void sub_1033d4b0();	// "CBaseCombatCharacter::BloodExplode": scope trace; when sub_103380d0 fails activates the two Thaumaturgy_Bloodboil_Explode effects
	int sub_10342c80(void (*pCallback)(CBaseCombatCharacter *, int, int), int nArg, bool bInvert, Vector vecCenter, float flRadius);	// "CBaseCombatCharacter::HitboxesInSphere" (scope trace)
	void vfunc314(float flDeltaTime);	// slot 314 "CBaseCombatCharacter::UpdatePoseParameters": scope trace, the shaky-hands pose smoothing
#include "CBaseCombatCharacter_ext.h"
#include "CBaseCombatCharacter_ext2.h"

	char m_pad03e0[0x5a8 - 0x3e0];
	EHANDLE m_hAnimFollowModel;	// 0x05a8
	char m_pad05ac[0x6f0 - 0x5ac];
	int m_nSequence6f0;	// 0x6f0: the animation sequence (CBaseAnimating)
	float m_flPlaybackRate6f4;	// 0x6f4: the playback rate
	float m_fl6f8;	// 0x6f8: the sequence start time used by the melee swing
	char m_pad06fc[0xa80 - 0x6fc];
	float m_flLastBCCUpdate;	// 0x0a80
	float m_flNextVampHeal;	// 0xa84: the time of the next vampire heal-over-time tick
	char m_pad0a88[0xa9c - 0xa88];
	float m_flTimeA9c;	// 0xa9c: a reuse timer (set to -1 by vfunc380; this function compares it with 0)
	char m_pad0aa0[0xaa1 - 0xaa0];
	bool m_bMeleeSwingIsLive;	// 0x0aa1
	bool m_bDidSendIncomingSwingNotice;	// 0x0aa2
	bool m_bAA3;	// 0x0aa3: the melee swing's "weapon notice sent" flag
	float m_flLastMeleeSwingUpdate;	// 0x0aa4
	Vector m_vecLastMeleeSwingPosition;	// 0x0aa8
	Vector m_angLastMeleeSwingAngles;	// 0x0ab4
	char m_pad0ac0[0xe30 - 0xac0];
	int m_nVendorE30;	// 0x0e30: index of this character's vendor in the vendor table (SyncVendorInventory)
	int m_nVendorSettingE34;	// 0x0e34
	int m_iOccultPowerFlags;	// 0x0e38
	float m_flEyeIntegRate;	// 0x0e3c
	float m_flNextEyeLookTime;	// 0x0e40
	Vector m_vEyeLookTarget;	// 0x0e44
	Vector m_vCurEyeTarget;	// 0x0e50
	float m_flHeadYaw;	// 0x0e5c
	float m_flHeadPitch;	// 0x0e60
	EHANDLE m_hEyeLookTarget;	// 0x0e64
	char m_pad0e68[0xe6c - 0xe68];
	bool m_bAimWeaponAtTarget;	// 0x0e6c
	char m_pad0e6d[0xe70 - 0xe6d];
	EHANDLE m_hWeaponAimTarget;	// 0x0e70
	Vector m_vWeaponAimOffset;	// 0x0e74
	int m_iFriendPresenceEffect;	// 0x0e80
	float m_flEnemeyPresencePercent;	// 0x0e84
	int m_iEnemyPresenceEffect;	// 0x0e88
	float m_flNextPresenceCheckTime;	// 0x0e8c
	float m_flNextComfortCheckTime;	// 0x0e90
	int m_iComfortingCount;	// 0x0e94
	int m_bitsDamageType;	// 0x0e98
	char m_rgbTimeBasedDamage[8];	// 0x0e9c
	CHandle<CBaseCombatWeapon> m_hEa4;	// 0xea4
	CHandle<CBaseCombatWeapon> m_hEa8;	// 0xea8
	int m_iDisciplineContextTgtFlags;	// 0x0eac
	int m_iDisciplineFlags;	// 0x0eb0
	int m_iDisciplineFlags2;	// 0x0eb4
	int m_iDisciplinePreFlags;	// 0x0eb8
	int m_iDisciplinePreFlags2;	// 0x0ebc
	float m_fDisciplineTimers[60];	// 0x0ec0
	int m_iDisciplineCastCounter;	// 0x0fb0
	char m_pad0fb4[0xfc8 - 0xfb4];
	bool m_bIsUnkillable;	// 0x0fc8
	char m_pad0fc9[0xfcc - 0xfc9];
	float m_flMoveStartTime;	// 0x0fcc
	int m_vDiscBloodType;	// 0x0fd0
	int m_iLastDisciplineHitBy;	// 0x0fd4
	bool m_bLastDisciplineResist;	// 0x0fd8
	char m_pad0fd9[0xfdc - 0xfd9];
	int m_iLastStoredDmg;	// 0x0fdc
	bool m_bAllowsInterpenetratingAttacks;	// 0x0fe0
	char m_pad0fe1[0xfe4 - 0xfe1];
	int m_iMiscFlags;	// 0x0fe4
	EHANDLE m_hDialogPartnerFE8;	// 0xfe8: the dialog partner (SetDialogPartner)
	int m_Activity;	// 0x0fec
	int m_IdealActivity;	// 0x0ff0
	int m_TranslatedActivity;	// 0x0ff4
	EHANDLE m_hFireEmitters[18];	// 0xff8: the body fire emitters, one per hit box
	EHANDLE m_hInteractiveUseTarget;	// 0x1040
	int m_nShakyIndex1044;	// 0x1044: the shaky-hands profile index (-1 when off)
	float m_flShakyEnd1048;	// 0x1048: the time the shaky hands end
	float m_flShakyTime104c;	// 0x104c: the last time the shake offsets were randomised
	float m_flShakyIntensity1050;	// 0x1050: the shaky-hands intensity
	float m_flShakyOffset1054[2];	// 0x1054: the current random shake offsets
	float m_flPoseCurrent105c[2];	// 0x105c: the smoothed pose parameter values
	float m_flPoseValue[2];	// 0x1064: last pose parameter values set through slot 346
	int m_nPoseIndex[2];	// 0x106c: the pose parameter indices they belong to
	Vector m_vecHeadAxis1074;	// 0x1074: the head bone's axis (0, -1, 0) rotated by the bone's pose-to-bone matrix
	int m_nHeadBone1080;	// 0x1080: the Bip01_Head bone index
	int m_nStealthModifier;	// 0x1084
	bool m_bWillTalk;	// 0x1088
	char m_pad1089[0x108c - 0x1089];
	int m_nHeadTime108c;	// 0x108c: the engine time stamp (engine slot 120) of the last head matrix update
	Vector m_vecHeadPos1090;	// 0x1090: the head bone position (CalcLookData)
	Vector m_vecHeadDir109c;	// 0x109c: the head direction (CalcLookData)
	float m_flDebugSlowedScale;	// 0x10a8
	string_t m_sTeamName;	// 0x10ac
	char m_pad10b0[0x10b4 - 0x10b0];
	int m_idxDefExpression;	// 0x10b4
	float m_flDefExpressionIntensity;	// 0x10b8
	struct CExpressionRecord	// 0x20 bytes, appended by sub_102c1a80 (scene expression event start), faded out by sub_101063a0
	{
		int m_iExpression;	// 0x00: the expression index (sub_10106a40 of the event's last parameter)
		float m_flStart;	// 0x04: curtime when it started
		float m_flFadeTime;	// 0x08: curtime + event.sub_10075f10() - event.sub_10075e70()
		char m_pad0c[0x18 - 0x0c];
		void *m_pScene18;	// 0x18: the first argument of sub_102c1a80
		void *m_pEvent1c;	// 0x1c: the scene event (second argument)
	};
	CExpressionRecord *m_pExpressions10bc;	// 0x10bc: a CUtlVector<CExpressionRecord> (cast the address of this member: memory +0x10bc, alloc count +0x10c0, grow size +0x10c4, size +0x10c8, element pointer +0x10cc); no inline ctor / dtor here on purpose (the base constructors are out of line)
	int m_nExpressionAlloc10c0;
	int m_nExpressionGrow10c4;
	int m_nExpressionCount10c8;
	CExpressionRecord *m_pExpressionElems10cc;
	float m_flCameraOverrideFadeTime;	// 0x10d0
	char m_b10d4;	// camera target flag
	char m_pad10d5[0x10dc - 0x10d5];
	EHANDLE m_hActiveIArmor;	// 0x10dc
	EHANDLE m_hLastIArmor;	// 0x10e0
	string_t m_statTemplate;	// 0x10e4
	int m_iFloatSoundFrequency;	// 0x10e8
	float m_flNextFloatSoundTime;	// 0x10ec
	char m_pad10f0[0x13a0 - 0x10f0];
	int m_field13a0;
	char m_pad13a4[0x13bc - 0x13a4];
	int m_nStatLists;
	CVStatList_t **m_pStatLists;
	char m_pad13c4[4];
	class CUnknown101f9bf0 *m_pTraits13c8;	// 0x13c8: the owner's trait id list, the object sub_101f9bf0 applies (a == character+0x13c8 at 0x101e59e6)
	int m_nHasLegs13cc;	// 0x13cc: the model has no flag 0x100 in its header flags (stat 0xb of the active stat list)
	float m_flLastFaithShieldHealTime;	// 0x13d0
	float m_flHolyLightEndTime;	// 0x13d4
	int m_iMoney;	// 0x13d8
	char m_pad13dc[0x1468 - 0x13dc];
	int m_iCurVReaction;	// 0x1468
	int m_field146c;
	float m_flNextFrenzyTimeThreshhold;	// 0x1470
	char m_flag1474;
	bool m_bCantBreakGrapple;	// 0x1475
	bool m_bIsFrenzyGrapple;	// 0x1476
	char m_pad1477[0x1478 - 0x1477];
	float m_flBreakGrappleTimer;	// 0x1478
	float m_flGrappleDamageTimer;	// 0x147c
	char m_b1480;	// burning flag
	bool m_bIsAlive;	// 0x1481
	bool m_bNeverMeleeOpponent;	// 0x1482
	char m_pad1483[0x1484 - 0x1483];
	int m_nMotionTrail;	// 0x1484
	float m_flFrenzyRate;	// 0x1488
	bool sub_103395f0();	// "CBaseCombatCharacter::CanFeed": scope trace (entity name); needs sub_10337f30, then true without a live target (handle +0x149c), else true when the target's stat list 0 gives a non-zero bounded stat 12 and the target's slot 158 holds
	char m_pad148c[0x149c - 0x148c];
	EHANDLE m_h149c;	// 0x149c: the feeding target
	int m_iBloodStolen;	// 0x14a0
	int m_iCurBloodStolenMod;	// 0x14a4
	char m_pad14a8[0x14b0 - 0x14a8];
	int m_aCurWpnActivity;	// 0x14b0
	int m_aNextWpnActivity;	// 0x14b4
	int m_bfAINPCFlags;	// 0x14b8
	int m_bfAINPCFlags2;	// 0x14bc
	EHANDLE *m_pDiscParticles14c0;	// 0x14c0: the discipline particle handles, a CUtlVector<EHANDLE> (memory +0x14c0, alloc count +0x14c4, grow size +0x14c8, size +0x14cc, element pointer +0x14d0)
	int m_nDiscParticleAlloc14c4;
	int m_nDiscParticleGrow14c8;
	int m_nDiscParticleCount14cc;
	EHANDLE *m_pDiscParticleElems14d0;
	int m_nLastObfuscateLevel;	// 0x14d4
	unsigned int m_nObfuscateMask14d8;	// 0x14d8: the obfuscate bits (one per level) the character has
	char m_bObfuscateReady14dc;	// 0x14dc
	char m_pad14dd[3];
	float m_flObfuscateTime14e0;	// 0x14e0
	char m_clientAuraCount[32];	// 0x14e4
	char m_pad1504[0x1534 - 0x1504];
	int m_nGrapple1534;	// 0x1534
	EHANDLE m_hTarget1538;	// 0x1538
	int m_nTarget153c;	// 0x153c
	int m_nTargetMode1540;	// 0x1540
	int m_nGrapple1544;	// 0x1544
	Vector m_vecGrapple1548;	// 0x1548
	char m_bGrapple1554;	// 0x1554
	EHANDLE m_hGrapple1558;	// 0x1558
	EHANDLE m_hProteanTransformOther;	// 0x155c
	float m_flProteanTransformStartTime;	// 0x1560
	float m_flNextAttack1564;	// 0x1564: the time the weapon may attack / reload again
	int m_field1568;	// 0x1568
	char m_pad156c[0x1574 - 0x156c];
	int m_field1574;
	float m_f1578;	// 0x1578: gun position offset along the right vector
	float m_f157c;	// 0x157c: along the forward vector
	float m_f1580;	// 0x1580: along the up vector
	string_t m_RelationshipString;	// 0x1584
	bool m_bCanSwitchWeapons;	// 0x1588
	bool m_bCantDropWeapons;	// 0x1589
	char m_pad158a[0x158c - 0x158a];
	int m_LootableType;	// 0x158c
	char m_pad1590[0x1594 - 0x1590];
	int m_nHitBoxSet1594;	// 0x1594: the index of the record read from the studio header's table (potence hit effect)
	struct CRelationRecord **m_ppRelationships1598;	// 0x1598: the relationship table (array of pointers to records)
	char m_pad159c[4];
	int m_nRelationships15a0;	// 0x15a0: its size
	int m_iAmmo[32];	// 0x15a4: the ammo count per ammo index
	EHANDLE m_hMyWeapons[224];	// 0x1624
	EHANDLE m_hActiveWeapon19a4;	// 0x19a4: the active weapon
	Vector vfunc389(const Vector &vecSrc);	// "CBaseCombatCharacter::Weapon_ShootPosition": scope trace (entity name), the active weapon's "muzzleflash" attachment, else vecSrc plus the gun position offsets (+0x157c forward, +0x1578 right, +0x1580 up) along the angles of slot 221; returned by value
	CBaseCombatCharacter *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100078c4();	// as in CPhysForce (transplant)
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual bool vfunc72(int);
    virtual int vfunc79();
    virtual int vfunc80();
	void sub_103418f0(inputdata_t *data);
	void sub_101067e0(const char *pszName, float a, float b, float c, float d, float e);	// 0x101067e0 "CBaseCombatCharacter::AddScriptedExpression" (scope string 0x1056bbc4): appends a CExpressionRecord to the vector at +0x10bc
	void sub_10348d00();
	int sub_103449b0(CBaseEntity *pAttacker, CBaseEntity *pOther, void *pInfo);	// 0x10348d00: grapple-release helper called by vfunc380 (searches for a free spot around the entity using the OBB at +0x270 and traces, then SetAbsOrigin / slot 216)
};
