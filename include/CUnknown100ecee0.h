// CUnknown100ecee0: a table object (default index at +4, entries of 0x264 bytes at +8, count at +0x14, 0x44 byte
// records at +0x1c, a record index table at +0x30). sub_100ecee0 looks up the record and three values for an NPC.
#pragma once

struct CTableItem40_t
{
	char m_data[0x40];
};

struct CTableEntry264_t
{
	char m_pad0000[0x108];
	int m_n108;
	int m_n10c;
	int m_n110;
	int m_n114;
	int m_n118;
	CTableItem40_t m_items[4];	// 0x11c
	int m_nItems;	// 0x21c
	int m_n220;
	int m_n224;
	int m_n228;
	int m_n22c;
	int m_n230;
	char m_pad0234[0x264 - 0x234];
};

struct CTableRecord44_t
{
	char m_data[0x44];
};

struct CTableNpc_t
{
	char m_pad0000[0x64c0];
	char m_b64c0;
	char m_pad64c1[0x64d4 - 0x64c1];
	int m_n64d4;
	char m_pad64d8[0x64e8 - 0x64d8];
	int m_n64e8;
};

class CUnknown100ecee0
{
public:
	int m_pad0000;
	int m_nDefault;	// 0x04
	CTableEntry264_t *m_pEntries;	// 0x08
	char m_pad000c[0x14 - 0xc];
	int m_nCount;	// 0x14
	char m_pad0018[4];
	CTableRecord44_t *m_pRecords;	// 0x1c
	char m_pad0020[0x30 - 0x20];
	int *m_pRecordIndex;	// 0x30

	CTableRecord44_t *sub_100ecee0(CTableNpc_t *pNpc, int *pOutA, int *pOutB, int *pOutC);	// record for the NPC, and three values from its entry (A and B depend on the flag at +0x64c0)
	CTableItem40_t *sub_100ec450(int index, int *pOut1, int *pOut2, int *pOut3, int *pOut4, int *pOut5);	// random item (0x40 bytes at entry+0x11c) of the entry at index (or the default), and the five ints at entry+0x220..0x230 into the non-null outputs
};
