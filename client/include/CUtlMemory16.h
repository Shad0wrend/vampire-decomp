// CUtlMemory16: the memory part of a CUtlVector whose elements are 16 bytes (pointer, allocation count, grow size).
#pragma once

class CUtlMemory16
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory16 *sub_100d8790(int growSize, int allocationCount);	// constructor: allocates allocationCount * 16 bytes
		// provisional, like sub_100b4610 (transplant)
		// provisional, like sub_100b4610 (transplant)
		// provisional, like sub_100b4610 (transplant)
		// provisional, like sub_100b4610 (transplant)
	void Grow(int num);	// the stub 0x1000884b, body 0x10313f70
	void sub_10132d30(int num);
};
