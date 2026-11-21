// CUnknown10227c90: growable int array (element count at +0x0, data pointer at +0x4); real name not yet known.
#pragma once

class CUnknown10227c90
{
public:
	int m_nCount;
	int *m_pData;

		// if the value is a valid index (global registry check), removes it from the array (fast remove)
	void sub_10153830(int value);	// if the value is a valid index (global registry check), appends it (reallocating the array by one element)
		// same as sub_101f1be0
};
