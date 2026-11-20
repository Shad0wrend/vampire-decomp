// CUnknown100c80d0: a bit vector (bit count at +0, 32 bit words from +4) that sub_100c80d0 fills from a bit mask
// selecting entries of a 0x38 byte stride table whose first short is the bit index.
#pragma once

class CUnknown100c80d0
{
public:
	int m_nBits;
	unsigned int m_words[1];	// (m_nBits + 31) / 32 words

	void sub_1008e370(const unsigned int *pMask, const short *pTable, const void *pSource);	// bit count read from the dword at +0xf0 of pSource; clears the words, then sets the bit given by each selected table entry
};
