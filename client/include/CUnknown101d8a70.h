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

	void *sub_101457a0(void *pValue);	// forwards pValue to sub_101d8b40 together with the "v_printrolls" console variable as flag (false when the variable does not exist); returns pValue
	int *sub_10145840(void *pValue, bool bFlag);	// called through the stub at 0x1000e223
		// builds the record (stub 0x1000756d), returns this
		// the dice roll worker (stub 0x1000cf4f)
		// rolls nDice dice against the difficulty and fills the record (stub 0x1001506e)
};
