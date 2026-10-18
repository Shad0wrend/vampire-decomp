// CBaseCombatCharacter: base of NPCs and players.
// Only the members the recovered code needs are declared.
#pragma once

#include "CBaseEntity.h"

class CBaseCombatCharacter : public CBaseEntity
{
public:
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
	bool sub_10106f90(int expression);	// "CBaseCombatCharacter::IsValidExpression": forwards to the global expression table
	void sub_101073c0(int expression);	// "CBaseCombatCharacter::GetExpress...": forwards to the global expression table
	void sub_10014eb6(int a, int b);	// "CBaseCombatCharacter::GetCameraViewpointPositionBase"-like worker called by slot 50

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

	char m_pad03e0[0x13a0 - 0x3e0];
	int m_field13a0;
};
