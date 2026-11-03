// CUnknown10229550: an object that owns a CUtlVector of 0x58-byte items at +0x174 (memory, allocation count, grow size,
// size, element pointer); real name not yet known. The same global object (0x10750d78) also owns the 0x20-byte active
// sound queue at +0x188, which is modelled in CListZ.h (the functions using it were matched under CListZ).
#pragma once

#include "CListZ.h"

struct CUnknown10229550Item
{
	char m_bActive;	// 0x00: first character of the name (0x40 bytes) of the sound
	char m_pad01[0x40 - 1];
	int m_n40;	// 0x40, cleared when the item is queued (the volume's bits when set)
	char m_pad44[4];
	float m_f48;	// 0x48
	float m_f4c;	// 0x4c, set to m_f48 divided by the argument
	int m_n50;	// 0x50
	int m_n54;	// 0x54
};

class CUnknown10229550
{
public:
	char m_pad0000[0x174];
	CUnknown10229550Item *m_pMemory;	// 0x174
	int m_nAllocationCount;	// 0x178
	int m_nGrowSize;	// 0x17c
	int m_nSize;	// 0x180
	CUnknown10229550Item *m_pElements;	// 0x184

	// the active-sound queue at +0x188 (same object; see CListZ.h for the item and the functions)
	CListZItem *m_pSoundMemory;	// 0x188
	int m_nSoundAllocationCount;	// 0x18c
	int m_nSoundGrowSize;	// 0x190
	int m_nSoundCount;	// 0x194 (sub_102296c0 returns it)
	CListZItem *m_pSoundElements;	// 0x198

	void sub_10229550(CUnknown10229550Item *pItem, float flScale);	// when the item is active: stores m_f48 / flScale in m_f4c, appends a copy of the item to the vector and clears the original
	void sub_102293f0(float flScale);	// the four items at +0x14 (0x58 bytes each) are each given to sub_10229550 with the scale
	void sub_10229430(const char *pszName, float flVolume, int a, float flTime, CUnknown10229550Item *pItem);	// stub 0x10006663: no name or no volume queues the item away (sub_10229550); the same name just refreshes the item, another one queues the old item away and takes over the name, volume, fade rate (volume / flTime) and the value of sub_102297a0
	int sub_102297a0();	// stub 0x10007b58
};
