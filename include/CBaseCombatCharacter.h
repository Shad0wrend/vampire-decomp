// CBaseCombatCharacter: base of NPCs and players.
// Only the members the recovered code needs are declared.
// New method declarations can go into CBaseCombatCharacter_ext.h (included at the end of the class body).
#pragma once

#include "CBaseEntity.h"
#include "CVStatList_t.h"
#include "QAngle.h"

struct inputdata_t;

#define CBCC_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CBaseCombatCharacter : public CBaseEntity
{
public:
	// Placeholder slots 134..251 (the base declares slots up to 133).
	virtual void a00(); virtual void a01(); virtual void a02(); virtual void a03(); virtual void a04();
	virtual void a05(); virtual void a06(); virtual void a07(); virtual void a08();
	virtual int vfunc143(float flHealth, int bitsDamageType);	// "CBaseCombatCharacter::TakeHealth": scope trace (entity name), 0 when the take-damage mode at +0x1fc is zero, else CBaseEntity::vfunc143
	CBCC_SLOTS10(a1) CBCC_SLOTS10(a2) CBCC_SLOTS10(a3) CBCC_SLOTS10(a4)
	CBCC_SLOTS10(a5) CBCC_SLOTS10(a6) CBCC_SLOTS10(a7) CBCC_SLOTS10(a8)
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

	bool sub_10336920();	// "CBaseCombatCharacter::IsMale" (matched under the provisional class name Ent)
	void sub_103326b0(float amount);
	void sub_10339560();
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
	void sub_10346760();	// "CBaseCombatCharacter::ForceMeleeReset": scope trace (entity name), sets the byte at +0xaa1 and clears the bytes at +0xaa0/+0xaa2/+0xaa3 and the dword at +0xa94
	void sub_1033ca60();	// "CBaseCombatCharacter::ClearMiscFlags": stores 0 at +0xfe4
	void sub_1033c6b0(unsigned int flags);	// "CBaseCombatCharacter::AddMiscFlag": scope trace (entity name), ORs flags into +0xfe4
	void sub_1033c770(unsigned int flags);	// "CBaseCombatCharacter::RemoveMiscFlag": scope trace (entity name), clears flags in +0xfe4
	void sub_1033c830(unsigned int flags);	// "CBaseCombatCharacter::ToggleMiscFlag": scope trace (entity name), clears flags in +0xfe4 when any are set, else sets them
	bool sub_1033c900(unsigned int flags);	// "CBaseCombatCharacter::HasMiscFlag": scope trace (entity name), (flags & +0xfe4) != 0
	bool sub_1033ce10(unsigned int low, unsigned int high);	// "CBaseCombatCharacter::HasDisciplineEffects": scope trace (entity name), (low & +0xeb0) != 0 or (+0xeb4 & high & 0x7fffffff) != 0
	bool sub_10341aa0();	// "CBaseCombatCharacter::IsUnconscious": scope trace (entity name), then bit 0 of the byte at +0xfe4
	void sub_10341b60(char unconscious);	// "CBaseCombatCharacter::SetUnconscious": scope trace (entity name), sets or clears bit 0 of +0xfe4
	void sub_10322800(unsigned int flags, int a);	// "CBaseCombatCharacter::SetOccultPowerFlag": scope trace, ors flags into the dword at +0xe38
	void sub_1033d8a0(inputdata_t *data);	// "CBaseCombatCharacter::InputClearActiveDisciplines": scope trace (entity name), then sub_10147a60()
	void sub_10147a60();
	void sub_10107050(CBaseEntity *pEnt);	// "CBaseCombatCharacter::SetDialogPartner": scope trace (entity name), stores pEnt's handle at +0xfe8 (-1 for null)
	int sub_10336a50();	// "CBaseCombatCharacter::HasUsableMeleeWeapon" worker
	bool sub_10106f90(int expression);	// "CBaseCombatCharacter::IsValidExpression": forwards to the global expression table
	void sub_101073c0(int expression);	// "CBaseCombatCharacter::GetExpress...": forwards to the global expression table
	void sub_101063a0();	// "CBaseCombatCharacter::FadeoutExpressions": scope trace (entity name), clamps the float at +8 of each 0x20-byte expression record (array at +0x10bc, count at +0x10c8) to gpGlobals->curtime
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
	char sub_103268e0(const float *pos, int a);	// "CBaseCombatCharacter::FInViewCone" worker of vfunc362
	void sub_1032f930(int amount);	// "CBaseCombatCharacter::IncrementStealthModifier": scope trace (entity name), adds amount to +0x1084
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
	void sub_103221b0(const char *msg);	// "CBaseCombatCharacter::DebugFeedTrace": scope trace (entity name), DevMsg("%f : Feeding - %s\n", gpGlobals->curtime, msg or "Feed Trace")
	void sub_1032aa40();	// "CBaseCombatCharacter::Weapon_FrameUpdate": scope trace (entity name), when the active weapon handle at +0x19a4 resolves calls slot 369(this) on that weapon
	void sub_1032e210(void *pEvent);	// "CBaseCombatCharacter::Weapon_HandleAnimEvent": scope trace (entity name), when the active weapon handle at +0x19a4 resolves calls slot 370(pEvent, this) on that weapon
	void sub_1032a910(int a, int b);	// "CBaseCombatCharacter::Weapon_SetActivity": scope trace (entity name), when the active weapon handle at +0x19a4 resolves calls slot 338(a, b) on that weapon
	void sub_1033df80();	// "CBaseCombatCharacter::ApplyDisciplineSpawnFlags": scope trace (entity name), translates spawn flag bits 5, 6, 12, 13, 14, 15 (dword at +0x204) into bits 0..5 of the discipline flags at +0xeac
	char *sub_10345980(CBaseEntity *pEnt);	// "CBaseCombatCharacter::GetMeleeDiceRolls": scope trace (entity name), finds the 16 byte record (array at +0xa88, count at +0xa94) whose leading handle resolves to pEnt; null when none
	int sub_10345de0(CBaseEntity *pEnt);	// "CBaseCombatCharacter::GetNumAttackSuccesses": as GetMeleeDiceRolls, returns the second dword of the record (0 when none)
	void sub_10323370();	// "CBaseCombatCharacter::AddToPresenceList": scope trace (entity name), appends this entity's handle (-1 when this is null) to the global vector of handles at 0x109370bc

	// Slots called directly so far; declared as plain members.
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
	void vfunc340(int a, int b, int c);
	void vfunc358();	// "CBaseCombatCharacter::PrayerEnd": scope trace (entity name), clears the prayer state at +0x14a8/+0x1475/+0x1478/+0x14aa, +0x14ac = -1, +0xff0 = 0x133 and, when the object at +0xa8 is set, slot 93(3, 0)
	char vfunc362(const float *pos);	// "CBaseCombatCharacter::FInViewCone": scope trace, then sub_103268e0(pos, field at +0x1574)
	int vfunc365(CBaseEntity *pTarget);	// "CBaseCombatCharacter::FInAimCone": scope trace (entity name), returns slot 364(target slot 197(buf, slot 193(buf), 1, 0))
	QAngle vfunc367();	// "CBaseCombatCharacter::BodyAngles": scope trace (entity name), returns the three floats returned by slot 219 by value
	int vfunc376(int a);
	void vfunc387();
	void vfunc388(void *weapon, int a);	// switches to the given weapon
	int vfunc392(void *pInfo);	// "CBaseCombatCharacter::OnTakeDamage_Dead": scope trace (entity name), unless the life state at +0x1fc is 1 lowers the health at +0x210 by the info's damage (a CVDmg_t at info+0 when set, else the float at info+0x30); returns 1
	int vfunc393();
	void vfunc403();
	void vfunc50(int a);	// scope-traced wrapper around sub_10014eb6(a, 0)
	void vfunc119();	// "CBaseCombatCharacter::Kill": scope trace (entity name), then CBaseEntity::vfunc119

#include "CBaseCombatCharacter_ext.h"

	char m_pad03e0[0x1084 - 0x3e0];
	int m_nStealthModifier;	// 0x1084
	char m_pad1088[0x13a0 - 0x1088];
	int m_field13a0;
	char m_pad13a4[0x13bc - 0x13a4];
	int m_nStatLists;
	CVStatList_t **m_pStatLists;
	char m_pad13c4[0x146c - 0x13c4];
	int m_field146c;
	char m_pad1470[0x1474 - 0x1470];
	char m_flag1474;
	char m_pad1475[0x1574 - 0x1475];
	int m_field1574;
	CBaseCombatCharacter *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100078c4();	// as in CPhysForce (transplant)
};
