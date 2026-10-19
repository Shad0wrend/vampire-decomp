// CUnknown1006c5d0: growable write buffer (memory at +0, allocation size at +4, grow size at +8, put position at +0x10,
// flags byte at +0x14, bit 0 = error); real name not yet known.
#pragma once

class CUnknown1006c5d0
{
public:
	char *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_pad0c;
	int m_put;	// 0x10
	unsigned char m_flags;	// 0x14

	bool sub_1006c5d0(int num);	// "CUtlBuffer::CheckPut"-like: grows the allocation so that num more bytes fit; false on error
};
