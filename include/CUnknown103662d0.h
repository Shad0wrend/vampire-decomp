// CUnknown103662d0: an NPC (called from CNPC_VWerewolf::vfunc442) holding a CUtlVector of (id, expiry time) pairs of
// 8 bytes at +0x665c (memory, allocation count, grow size, size, element pointer); real class not yet known.
#pragma once

class CUnknown103662d0
{
public:
	char m_pad0000[0x665c];
	char *m_pTimedMemory;	// 0x665c
	int m_nTimedAlloc;	// 0x6660
	int m_nTimedGrow;	// 0x6664
	int m_nTimedSize;	// 0x6668
	char *m_pTimedElements;	// 0x666c

	void sub_103662d0(int id, float delay);	// appends (id, gpGlobals->curtime + delay) to the vector at +0x665c
};
