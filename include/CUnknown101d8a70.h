// CUnknown101d8a70: an object with an output helper (sub_101d8b40(value, flag)); real name not yet known.
// It is the 0x3c byte roll result record the weapons build on the stack (15 dwords, a CVDmgBlock16_t at +0x1c).
#pragma once

class CBaseCombatWeapon;

class CUnknown101d8a70
{
public:
	char m_pad0000[0x3c];

	void *sub_101d8a70(void *pValue);	// forwards pValue to sub_101d8b40 together with the "v_printrolls" console variable as flag (false when the variable does not exist); returns pValue
	void sub_101d8b40(void *pValue, bool bFlag);	// called through the stub at 0x1000e223
	CUnknown101d8a70 *sub_101d8820(int owner, CBaseCombatWeapon *pWeapon, void *pRecord, int n);	// builds the record (stub 0x1000756d), returns this
};
