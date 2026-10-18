// CUnknown100bde40: bit-buffer writer (data pointer, bit counts, overflow flag); real name (bf_write) not confirmed.
#pragma once

class CUnknown100bde40
{
public:
	bool sub_100bde40(const void *pData, int nBytes);	// "WriteBytes": WriteBits(pData, nBytes * 8)
	bool sub_10010c1c(const void *pData, int nBits);	// "WriteBits" (called through its stub at 0x10010c1c)
};
