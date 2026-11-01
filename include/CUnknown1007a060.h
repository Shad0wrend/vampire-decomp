// CUnknown1007a060: owner of a CUtlVector of heap allocated 0x194 byte records (pointer, allocation count, grow size, size,
// element pointer at +0x14); real name not yet known.
#pragma once

class CUnknown1007a060Elem
{
public:
	char m_data[0x194];
	CUnknown1007a060Elem();	// 0x10072b60 (stub 0x100113dd)
	void sub_10073260(const char *psz);	// strcpy of psz into the buffer at +0x94 (stub 0x10007d24)
};

class CUnknown1007a060
{
public:
	char m_pad0000[0x14];
	CUnknown1007a060Elem **m_pMemory;	// 0x14
	int m_allocationCount;	// 0x18
	int m_growSize;	// 0x1c
	int m_size;	// 0x20
	CUnknown1007a060Elem **m_pElements;	// 0x24

	CUnknown1007a060Elem *sub_1007a060();	// creates a record and appends it to the vector at +0x14 (AddToTail with the grow inlined); returns it
};
