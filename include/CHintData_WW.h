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
	int m_tail[6];	// 0x30..0x44, zeroed by the constructors; [0] = element pointer of the first vector, [1..5] = a second CUtlVector<int> (memory, allocation count, grow size, size, element pointer)

	int Find(int value)
	{
		for (int i = 0; i < m_nHints; i++)
		{
			if (m_pHints[i] == value)
				return i;
		}
		return -1;
	}

	bool sub_103ca0d0(int hint);	// "CHintData_WW::IsHintPathable": scope trace, true when `hint` is found in the vector
	void sub_103ca1a0(int hint);	// "CHintData_WW::AddPathableHint": scope trace, appends `hint` to the vector unless it is already in it
	void sub_103ca390(int hint);	// "CHintData_WW::AddEndpointPathableHint": same as AddPathableHint for the second vector (at +0x34)
	CHintData_WW *sub_103c9ed0(const CHintData_WW *pSrc);	// "CHintData_WW::CHintData_WW" (copy constructor): id -1, vector zeroed, scope trace, then copies the seven dwords at +4..+0x1c; returns this
	void sub_103c9fc0();	// "CHintData_WW::Init": scope trace, zeroes the seven dwords at +4..+0x1c, purges both vectors and sets the id to -1
};
