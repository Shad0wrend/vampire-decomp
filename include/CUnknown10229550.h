// CUnknown10229550: an object that owns a CUtlVector of 0x58-byte items at +0x174 (memory, allocation count, grow size,
// size, element pointer); real name not yet known.
#pragma once

struct CUnknown10229550Item
{
	char m_bActive;	// 0x00
	char m_pad01[0x40 - 1];
	int m_n40;	// 0x40, cleared when the item is queued
	char m_pad44[4];
	float m_f48;	// 0x48
	float m_f4c;	// 0x4c, set to m_f48 divided by the argument
	char m_pad50[0x58 - 0x50];
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

	void sub_10229550(CUnknown10229550Item *pItem, float flScale);	// when the item is active: stores m_f48 / flScale in m_f4c, appends a copy of the item to the vector and clears the original
};
