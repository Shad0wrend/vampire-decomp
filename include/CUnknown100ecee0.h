// CUnknown100ecee0: a table object (default index at +4, entries of 0x264 bytes at +8, count at +0x14, 0x44 byte
// records at +0x1c, a record index table at +0x30). sub_100ecee0 looks up the record and three values for an NPC.
#pragma once

struct CTableEntry264_t
{
	char m_pad0000[0x108];
	int m_n108;
	int m_n10c;
	int m_n110;
	int m_n114;
	int m_n118;
	char m_pad011c[0x264 - 0x11c];
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
};
