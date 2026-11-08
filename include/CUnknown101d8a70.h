// CUnknown101d8a70: an object with an output helper (sub_101d8b40(value, flag)); real name not yet known.
// It is the 0x3c byte roll result record the weapons build on the stack (15 dwords, a CVDmgBlock16_t at +0x1c).
#pragma once

class CBaseCombatWeapon;
class CBaseCombatCharacter;
struct CVDmgBlock16_t;

class CUnknown101d8a70
{
public:
	int m_n00;
	int m_n04;	// 0x04: the successes
	int m_n08;
	int m_n0c;	// 0x0c: the botches
	char m_pad0010[0x3c - 0x10];

	void *sub_101d8a70(void *pValue);	// forwards pValue to sub_101d8b40 together with the "v_printrolls" console variable as flag (false when the variable does not exist); returns pValue
	int *sub_101d8b40(void *pValue, bool bFlag);	// called through the stub at 0x1000e223
	CUnknown101d8a70 *sub_101d8820(int owner, CBaseCombatWeapon *pWeapon, void *pRecord, int n);	// builds the record (stub 0x1000756d), returns this
	void sub_101d88b0(int owner, CBaseCombatWeapon *pWeapon, void *pRecord, int nValue, int n, int nFeat);	// the dice roll worker (stub 0x1000cf4f)
	void sub_101d8770(CBaseCombatCharacter *pChar, CVDmgBlock16_t *pBlock, int nDice, int nDifficulty);	// rolls nDice dice against the difficulty and fills the record (stub 0x1001506e)
};
