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

	char m_pad03e0[0x13a0 - 0x3e0];
	int m_field13a0;
};
