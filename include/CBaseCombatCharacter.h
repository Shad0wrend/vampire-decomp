// CBaseCombatCharacter: base of NPCs and players.
// Only the members the recovered code needs are declared.
#pragma once

#include "CBaseEntity.h"
#include "CVStatList_t.h"

struct inputdata_t;

#define CBCC_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CBaseCombatCharacter : public CBaseEntity
{
public:
	// Placeholder slots 134..251 (the base declares slots up to 133).
	CBCC_SLOTS10(a0) CBCC_SLOTS10(a1) CBCC_SLOTS10(a2) CBCC_SLOTS10(a3) CBCC_SLOTS10(a4)
	CBCC_SLOTS10(a5) CBCC_SLOTS10(a6) CBCC_SLOTS10(a7) CBCC_SLOTS10(a8) CBCC_SLOTS10(a9)
	CBCC_SLOTS10(b0)
	virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13();
	virtual void b14(); virtual void b15(); virtual void b16(); virtual void b17();
	virtual int vfunc252(int a, int b, int c);

	void sub_103326b0(float amount);
	void sub_10339560();
	int sub_10337a60();	// "CBaseCombatCharacter::GetVHistor..." getter
	int sub_10323210();	// "CBaseCombatCharacter::GetPresenceBenefit": returns the field at +0xe80
	void sub_10324500(int action);	// "CBaseCombatCharacter::SetIdealActivity": stores the argument at +0xff0
	void sub_103245a0(int translated);	// "CBaseCombatCharacter::SetTranslated...": stores the argument at +0xff4
	char sub_10325fa0();	// "CBaseCombatCharacter::HasAlienGibs": calls slot 138 and returns false
	void sub_10327960(int color);	// "CBaseCombatCharacter::SetBloodColor": stores the argument at +0x1570
	int sub_103282e0();	// "CBaseCombatCharacter::GetGrappleSize": normalises the result of IsMale (0x10336920) to 0/1
	void sub_10334600(int count, int ammoIndex);	// "CBaseCombatCharacter::SetAmmoCount": stores count at +0x15a4 + ammoIndex*4
	void sub_1033ca60();	// "CBaseCombatCharacter::ClearMiscFlags": stores 0 at +0xfe4
	void sub_1033c6b0(unsigned int flags);	// "CBaseCombatCharacter::AddMiscFlag": scope trace (entity name), ORs flags into +0xfe4
	bool sub_10106f90(int expression);	// "CBaseCombatCharacter::IsValidExpression": forwards to the global expression table
	void sub_101073c0(int expression);	// "CBaseCombatCharacter::GetExpress...": forwards to the global expression table
	void sub_10014eb6(int a, int b);	// "CBaseCombatCharacter::GetCameraViewpointPositionBase"-like worker called by slot 50
	void sub_10332570(inputdata_t *data);	// "CBaseCombatCharacter::InputSetHeadAsCameraTarget": scope trace, then sub_103322e0(1, 0)
	void sub_103322e0(int a, int b);
	char sub_10339b50();	// "CBaseCombatCharacter::IsBlueBlood": scope trace (entity name), then the byte at +0x93 of this entity's stat record
	void sub_10325940(inputdata_t *data);	// "CBaseCombatCharacter::InputLookAtEntityEye": scope trace, finds the named entity, then sub_10325cb0(ent, 1)
	void sub_10325cb0(void *ent, int a);

	// Slots called directly so far; declared as plain members.
	bool vfunc295(int a);
	void vfunc333(int a);
	void vfunc335();
	void vfunc336();
	int vfunc337();
	void vfunc338(int a, int b, int c);
	void vfunc339(int a, int b, int c);
	void vfunc340(int a, int b, int c);
	int vfunc376(int a);
	void vfunc387();
	int vfunc393();
	void vfunc403();
	void vfunc50(int a);	// scope-traced wrapper around sub_10014eb6(a, 0)
	void vfunc119();	// "CBaseCombatCharacter::Kill": scope trace (entity name), then CBaseEntity::vfunc119

	char m_pad03e0[0x13a0 - 0x3e0];
	int m_field13a0;
	char m_pad13a4[0x13bc - 0x13a4];
	int m_nStatLists;
	CVStatList_t **m_pStatLists;
	CBaseCombatCharacter *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100078c4();	// as in CPhysForce (transplant)
};
