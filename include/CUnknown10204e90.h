// CUnknown10204e90: a reference to a stat record: a kind (0..2, picks one of the three global stat info lists) and an index
// into that list (-1 = none); real name not yet known.
#pragma once

#include "CVStatInfoList_t.h"

class CUnknown10204e90
{
public:
	int m_nKind;	// 0x00
	int m_nIndex;	// 0x04

	int sub_10204e90(int arg);	// evaluates the referenced stat record for arg (0 without a valid reference)
	int sub_10205100(void *pCharacter);	// the cost of raising the referenced stat of the character by one: the stat's current base (character stat list of the kind), its evaluated value and the trait effect cost record give sub_10204d30; 30000 for a kind outside 0..2, 0 without a reference
	int sub_10204d30(CVStatCost_t *pCost, int nValue, int nBase);	// cost computation worker (stub 0x10014ec0)
	int sub_10204900(void *pCharacter);	// the character's current value of the referenced stat (stub 0x10013cc8)
	const char *sub_102043a0();	// the stat's name text for the log (stub 0x10001af0)
};
