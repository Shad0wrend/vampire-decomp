// CUnknown101e5ca0: a record (real name not yet known; a sibling of CVFeat) with a list of 16 byte effect blocks
// (count at +0x2c, array at +0x30).
#pragma once

#include "CVDmg_t.h"

class CUnknown101e5ca0
{
public:
	char m_pad0000[0x2c];
	int m_nEffects;	// 0x2c
	CVDmgBlock16_t *m_pEffects;	// 0x30

	int sub_101e5ca0(void *pCharacter);	// the sum over the effects of kind 0 / 1 of the multiplier-scaled value of the effect's stat in the character's stat list of that kind (0 without a character)
};
