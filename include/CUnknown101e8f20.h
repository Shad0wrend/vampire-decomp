// CUnknown101e8f20: a character-owned lookup table (dword values from +0x374); real name not yet known.
#pragma once

class CBaseCombatCharacter;

class CUnknown101e8f20
{
public:
	char m_pad0000[0x374];
	int m_values[1];	// 0x374

	int sub_101e8f20(CBaseCombatCharacter *pChar);	// looks up stat 8 in pChar's stat list with id 3 (default list when it has none) and returns the table entry it selects (0 when the stat is not positive)
};
