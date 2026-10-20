// CUnknown101e8480: object whose slot 0 takes a value computed from a character's stat lists (name provisional).
#pragma once

class CBaseCombatCharacter;

class CUnknown101e8480
{
public:
	virtual void vfunc0(int value);

	void sub_101e8480(CBaseCombatCharacter *pChar);	// slot 0(stat 1 of the first non-pending stat list - 1 + stat 0x18 of the same list), both from the character's stat lists (default list when none)
};
