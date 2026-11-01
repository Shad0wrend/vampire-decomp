// CUnknown101e9760: object with a requirement mask at +0x24 (name provisional); checked against a character's stat value 0xb.
#pragma once

#include "CCheckList.h"

class CBaseCombatCharacter;

class CUnknown101e9760
{
public:
	char m_pad0000[0x1c];
	CCheckList m_checkList;	// 0x1c: the clan conditions
	union {
		unsigned int m_dwMask;	// 0x24
		unsigned char m_bMask;
	};

	bool sub_101e9760(CBaseCombatCharacter *pChar);	// true unless the mask is set and the character's stat value 0xb contradicts it: bit 0 requires a non-zero value, bit 1 requires zero
	bool sub_101e9830(CBaseCombatCharacter *pChar);	// stub 0x1000790a is sub_101e9760; true when the character has a char template (sub_10337860 != -1), passes sub_101e9760 and any condition of the list at +0x1c
};
