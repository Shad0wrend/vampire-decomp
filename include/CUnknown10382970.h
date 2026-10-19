// CUnknown10382970: an NPC (called from CNPC_VHengeyokai::vfunc448) holding a CUtlVector of (id, expiry time) pairs of
// 8 bytes at +0x66a4 (memory, allocation count, grow size, size, element pointer); real class not yet known.
#pragma once

class CUnknown10382970
{
public:
	char m_pad0000[0x66a4];
	char *m_pTimedMemory;	// 0x66a4
	int m_nTimedAlloc;	// 0x66a8
	int m_nTimedGrow;	// 0x66ac
	int m_nTimedSize;	// 0x66b0
	char *m_pTimedElements;	// 0x66b4

	void sub_10382970(int id);	// appends (id, gpGlobals->curtime + 20.0f) to the vector at +0x66a4
};
