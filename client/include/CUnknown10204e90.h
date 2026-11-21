// CUnknown10204e90: a reference to a stat record: a kind (0..2, picks one of the three global stat info lists) and an index
// into that list (-1 = none); real name not yet known.
#pragma once

#include "CVStatInfoList_t.h"

class CUnknown10204e90
{
public:
	int m_nKind;	// 0x00
	int m_nIndex;	// 0x04

		// evaluates the referenced stat record for arg (0 without a valid reference)
		// the cost of raising the referenced stat of the character by one: the stat's current base (character stat list of the kind), its evaluated value and the trait effect cost record give sub_10204d30; 30000 for a kind outside 0..2, 0 without a reference
		// cost computation worker (stub 0x10014ec0)
	int sub_10160b40(void *pCharacter);	// the character's current value of the referenced stat: kinds 0..3 the bounded base in the character's stat list of the kind (through sub_10204c20), kind 4 the feat's value, kind 9 the result of the function stored in the index, 0 otherwise or without a reference / character (stub 0x10013cc8)
		// stub 0x1000c45f, called by sub_10204900 with a stat list value
	const char *sub_10160740();	// the stat's name text for the log (stub 0x10001af0)
	char sub_10160660();	// whether the reference is empty / always satisfied (stub 0x100051f0)
};
