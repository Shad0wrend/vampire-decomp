// CCheckList: an array of 12 byte clan conditions (CUnknown101d7ec0_Check; count at +0, data at +4); the object at +0x1c of
// a CUnknown101e9760 record. Real name not yet known.
#pragma once

#include "CUnknown101d7ec0.h"

class CBaseCombatCharacter;

class CCheckList
{
public:
	int m_count;	// 0x00
	CUnknown101d7ec0_Check *m_pData;	// 0x04

	bool sub_101d8470(CBaseCombatCharacter *pChar);	// true when the character passes any of the conditions (CUnknown101d7ec0::sub_101d7fb0 at 0x10739140 for each)
};
