// CUnknown100735a0: object holding a CUtlVector of 4-byte entries at +0x84 (name provisional): an id, a 0x80 byte name, the vector and a flag byte.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class CUnknown100735a0
{
public:
	int m_i00;	// 0x00
	char m_szName[0x80];	// 0x04
	int *m_pMemory;	// 0x84
	int m_allocationCount;	// 0x88
	int m_growSize;	// 0x8c
	int m_size;	// 0x90
	int *m_pElements;	// 0x94
	char m_b98;	// 0x98

	CUnknown100735a0();	// 0x10073380 (stub 0x100051be): clears the vector at +0x84, then sub_10073760
	void sub_100735a0(int value);	// "CUtlVector::AddToTail": grows by one and stores value at the end
	CUnknown100735a0 *sub_10073410(const CUnknown100735a0 *pOther);	// copy: the flag and the name, then a new CUnknown10075aa0 copy of each element of pOther's vector, added to this vector and told about this object
};
