// CUnknown102cabd0: a fixed list of 0x28 byte member records (entity handle at +0x20, active flag at +0x24), count at +0xa04; real name not yet known.
#pragma once

struct CUnknown102cabd0_Entry
{
	char m_pad0000[0x20];
	unsigned int m_hEntity;	// 0x20
	char m_bActive;	// 0x24
	char m_pad0025[3];
};

// An NPC-like object that can test one record (called through the stub at 0x1000591b).
class CUnknown1028ebc0
{
public:
	char sub_1028ebc0(CUnknown102cabd0_Entry *pEntry);
};

class CUnknown102cabd0
{
public:
	char m_pad0000[4];
	CUnknown102cabd0_Entry m_Entries[64];	// 0x004
	int m_nEntries;	// 0xa04

	int sub_102cabd0(CUnknown1028ebc0 *pNPC, void **pOut, int nMax);	// fills pOut with the entities of the active records the NPC accepts (at most nMax) and returns how many
};
