// CHintData_WW: hint data holder (not in RTTI); only the embedded int vector at +0x20 (memory pointer, size at +0x2c) is modelled.
#pragma once

class CHintData_WW
{
public:
	int m_nId;	// 0x00, -1 when unset
	int m_copy[7];	// 0x04..0x1c, copied by the copy constructor
	int *m_pHints;	// 0x20
	int m_nAlloc;	// 0x24
	int m_nGrow;	// 0x28
	int m_nHints;	// 0x2c
	int m_tail[5];	// 0x30..0x40, zeroed by the constructors

	bool sub_103ca0d0(int hint);	// "CHintData_WW::IsHintPathable": scope trace, true when `hint` is found in the vector
	CHintData_WW *sub_103c9ed0(const CHintData_WW *pSrc);	// "CHintData_WW::CHintData_WW" (copy constructor): id -1, vector zeroed, scope trace, then copies the seven dwords at +4..+0x1c; returns this
};
