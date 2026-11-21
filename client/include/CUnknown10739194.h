// CUnknown10739194: the object at the global 0x10739194 (its class is not known yet): a list of pointers
// with its count at +0x1c and its element array at +0x20.
#pragma once

class CUnknown10739194
{
public:
	int sub_10146220(int index);	// the element at index; 0 for a negative index, the last element when index is past the count

	char m_pad0000[0x1c];
	int m_nCount;	// 0x1c
	int *m_pElements;	// 0x20
};
