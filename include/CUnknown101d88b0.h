// CUnknown101d88b0: the record of one dice roll (real name not yet known): the dice count (capped at 250), the two
// participants' engine indices, the roll block copied from the caller and the feat bonus it names.
#pragma once

#include "CVDmg_t.h"

struct CUnknown101d88b0_Block	// a 16 byte roll block (kind, id, ?, multiplier) with an inline copy
{
	int m_a, m_b, m_c, m_d;

	void Copy(const CUnknown101d88b0_Block *pSrc)
	{
		m_a = pSrc->m_a;
		m_b = pSrc->m_b;
		m_c = pSrc->m_c;
		m_d = pSrc->m_d;
	}
};

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

	CUnknown101d88b0(CVDmgSource_t *pFirst, CVDmgSource_t *pSecond, int nDice, int nTotal);	// 0x101d87b0: constructs the block member and a default block, then sub_101d88b0(pFirst, pSecond, &default, nDice, nTotal, 0)

	CUnknown101d88b0(CVDmgSource_t *pFirst, const CVDmgBlock16_t *pBlock, int nDice, int nTotal);	// 0x101d8770: no second participant

	CUnknown101d88b0(CVDmgSource_t *pFirst, CVDmgBlock16_t *pBlock, int nTotal);	// 0x101d8720 (stub 0x10010361, ret 12, returns this): constructs the block member (+0x1c, stub 0x10004b7e), then sub_101d88b0(pFirst, 0, pBlock, pBlock->sub_10204900(pFirst), nTotal, 0)

	void sub_101d88b0(CVDmgSource_t *pFirst, CVDmgSource_t *pSecond, const CVDmgBlock16_t *pBlock, int nDice, int nTotal, int field04);	// initialises the roll: the count is capped at 250 (DevMsg "Dice roll count out of bounds: %d, capped at %d"), the participants' engine indices stored, the block copied, +0x2c = nTotal - 1, the global roll callback (0x1073938c) is called with this, and for a feat block (kind 4) with a first participant the feat bonus is looked up
};
