// CUnknown101d88b0: the record of one dice roll (real name not yet known): the dice count (capped at 250), the two
// participants' engine indices, the roll block copied from the caller and the feat bonus it names.
#pragma once

#include "CVDmg_t.h"

class CVDmgSource_t;

class CUnknown101d88b0
{
public:
	int m_nDice;	// 0x00
	int m_field04;	// 0x04
	int m_field08;	// 0x08
	int m_field0c;	// 0x0c
	int m_nFeatBonus;	// 0x10: the value of the feat the block names (kind 4) for the first participant, 0 otherwise
	int m_iFirst;	// 0x14: engine index of the first participant (0 for none)
	int m_iSecond;	// 0x18: engine index of the second participant (0 for none)
	CVDmgBlock16_t m_block;	// 0x1c
	int m_field2c;	// 0x2c
	int m_field30;	// 0x30
	int m_field34;	// 0x34
	int m_field38;	// 0x38

	void sub_101d88b0(CVDmgSource_t *pFirst, CVDmgSource_t *pSecond, const CVDmgBlock16_t *pBlock, int nDice, int nTotal, int field04);	// initialises the roll: the count is capped at 250 (DevMsg "Dice roll count out of bounds: %d, capped at %d"), the participants' engine indices stored, the block copied, +0x2c = nTotal - 1, the global roll callback (0x1073938c) is called with this, and for a feat block (kind 4) with a first participant the feat bonus is looked up
};
