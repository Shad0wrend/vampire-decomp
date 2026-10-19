// CHintData_WW: hint data holder (not in RTTI); only the embedded int vector at +0x20 (memory pointer, size at +0x2c) is modelled.
#pragma once

class CHintData_WW
{
public:
	char m_pad0000[0x20];
	int *m_pHints;	// 0x20
	int m_nAlloc;	// 0x24
	int m_nGrow;	// 0x28
	int m_nHints;	// 0x2c

	bool sub_103ca0d0(int hint);	// "CHintData_WW::IsHintPathable": scope trace, true when `hint` is found in the vector
};
