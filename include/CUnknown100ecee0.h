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
	char m_pad64c1[0x64c8 - 0x64c1];
	int m_n64c8;
	char m_pad64cc[0x64d4 - 0x64cc];
	int m_n64d4;
	char m_pad64d8[0x64e8 - 0x64d8];
	int m_n64e8;

	int sub_1008f7b0(const char *pszName);	// CBaseAnimating::LookupSequence (stub 0x1000e057), called directly
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd), called directly
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
	int m_nRecordAlloc;	// 0x20: allocation count of the 0x44-byte record vector at +0x1c
	int m_nRecordGrow;	// 0x24: its grow size
	int m_nRecordCount;	// 0x28: its size
	CTableRecord44_t *m_pRecordElems;	// 0x2c: the vector's element pointer
	int *m_pRecordIndex;	// 0x30: the 0x104-byte disposition entries (model index at +0, 0x40 stance record indices at +4)
	int m_nEntryAlloc;	// 0x34: allocation count of the entry vector at +0x30
	int m_nEntryGrow;	// 0x38: its grow size
	int m_nEntryCount;	// 0x3c: its size
	int *m_pEntryElems;	// 0x40: the vector's element pointer

	int sub_100ec640(class CBaseAnimating *pEnt);	// stub 0x1000db02: the table index of the NPC's model (looked up by slot 8 of the entity, \"Precaching disposition sequences for %s\" when new), the stance sequences (\"stance_%s_idle_%d\", \"_fidget_\", \"_trans_\") appended as a 0x44 byte record when it is not known yet
	void sub_100eb5a0(CTableEntry264_t *pSrc);	// stub 0x10001686: appends the entry (a default entry when null) to the entry vector at +8

	CTableRecord44_t *sub_100ecee0(CTableNpc_t *pNpc, int *pOutA, int *pOutB, int *pOutC);	// record for the NPC, and three values from its entry (A and B depend on the flag at +0x64c0)
	CTableItem40_t *sub_100ec450(int index, int *pOut1, int *pOut2, int *pOut3, int *pOut4, int *pOut5);
	void sub_100ec5d0(int index, int *pOut108, int *pOut10c);	// 0x100ec5d0: the two ints at entry+0x108/0x10c of the entry at index (or the default index when out of range)	// random item (0x40 bytes at entry+0x11c) of the entry at index (or the default), and the five ints at entry+0x220..0x230 into the non-null outputs
	int sub_100ed150(CTableNpc_t *pNpc, int a, int b);	// the sequence of the stance transition a -> b for the NPC ("stance_trans_<a>_<n>_<b>_<n>", then "..._1_..._1", then the table value); logs whether the animation was found
	const char *sub_100ecc10(int index);	// stub 0x10015b59: the name text of a stance
	void sub_100ed2c0(int a, const char *pszMessage);	// stub 0x1000e886: reports the message
	int sub_100ec530(const char *pszName, int bFlag);	// stub 0x10007fa9: the index of the named entry, -1 when unknown
	int sub_100eccf0(int index);	// stub 0x10015145: an int of the entry (the default entry when out of range)
	float sub_100ecdf0(int index, int a);	// stub 0x1000704a: a float of the entry
	int sub_100ecfc0(CTableNpc_t *pNpc, int nOld, int nNew);	// stub 0x1000c3fb: stance change of the NPC from nOld to nNew
	int sub_100ec360(int index, void *pNpc);	// stub 0x10006d3e: an int of the entry for the NPC
	int sub_100ec2e0(int index, void *pNpc);	// stub 0x1000509c: an int of the entry for the NPC
	float sub_100ec3d0(int index);	// stub 0x10013cc3: a float of the entry
	void sub_100ece60(int index, float *pOutMin, float *pOutMax);	// stub 0x1001109f: two floats of the entry (a random range)
	int sub_100ecc60(int index, int n);	// stub 0x100103f7: an int of the entry (the same function as EntryTable::sub_100ecc60)
};
