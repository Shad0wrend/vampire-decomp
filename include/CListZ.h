// CListZ: the player/sound queue object at 0x10750d78 (the same global object CUnknown10229550.h describes; that
// file models the 0x58-byte script queue at +0x174, this one the 0x20-byte active-sound queue at +0x188).
// The functions that use this layer were matched under the provisional class CListZ, so keep using that name:
//   0x102296c0 (CUnknown102296c0::sub_102296c0) is the size getter: return m_nSize
//   0x102296e0 (free sub_102296e0) is busy(edict, index): an item at +0x10 == edict and +0x14 == index exists
//   0x10229730 is FindChannel(edict): first channel 1..6 not used by an item of that edict (-1 when all are used)
//   0x102298e0 is Play(origin, index, edict, entry): appends one item for a sound the CSoundScheme plays
#pragma once

#include "Vector.h"

// One active sound of the queue at +0x188 (0x20 bytes; 8 dwords are copied with rep movsd).
struct CListZItem
{
	Vector m_vecOrigin;	// 0x00: where the sound is played
	void *m_pEntry;		// 0x0c: the CSoundScheme 0x74-byte sound entry (CSoundSchemeSound, name at +0)
	int m_iEdict;		// 0x10: the emitter's edict index (the key sub_102296e0 / sub_10229730 match)
	int m_iIndex;		// 0x14: the scheme's entry index (its +0x5a8 counter)
	int m_iChannel;		// 0x18: the sound channel, 1..6 (from FindChannel)
	float m_flTime;		// 0x1c: curtime + frametime + 0.2 + the sound system's slot 1 result
};

class CListZ
{
public:
	char m_pad0000[0x188];
	CListZItem *m_pMemory;		// 0x188: the item array (also the CMem32_t handling the growth)
	int m_nAllocationCount;		// 0x18c
	int m_nGrowSize;		// 0x190
	int m_nSize;			// 0x194: sub_102296c0 returns this
	CListZItem *m_pElements;	// 0x198

	// 0x10229730: first channel (1..6) no item of this edict uses; -1 when all six are taken
	int sub_10229730(int iEdict);

	// 0x102298e0: append one item for a sound entry; no-op (no item) when no channel is free
	void sub_102298e0(Vector vecOrigin, int nIndex, int iEdict, void *pEntry);
};
