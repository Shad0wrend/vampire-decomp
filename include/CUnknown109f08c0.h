// CUnknown109f08c0: a record of a global table (id at +0, name at +8); the function-local default record of
// 0x102035c0 is built with id -1. Real class name not known yet.
#pragma once

class IKVNodeView;

class CUnknown109f08c0
{
public:
	int m_id;
	int m_unk4;
	const char *m_pszName;
	unsigned int m_nExcludedFlags;	// 0x0c
	unsigned int m_nRequiredFlags;	// 0x10

	CUnknown109f08c0(int id);	// 0x1000ad62
	~CUnknown109f08c0();
	char sub_101ecca0(int nEdict);	// calls the handler function at 0x1073a3ac with (this, nEdict) when one is set, else false (stub 0x10009ac0)
	char sub_101ecb90(IKVNodeView *pKV);
};

// The table of CUnknown109f08c0 records (the object passed to 0x10220580): count at +0x14, pointers at +0x18. Find's default
// is one function-local static (guard 0x109f08a1, object 0x109f08c0, id -1): every caller inlines this one.
struct CUnknown109f08c0Set
{
	int m_unk00;
	int m_unk04;
	int m_unk08;
	int m_unk0c;
	int m_unk10;
	int m_nCount;	// 0x14
	CUnknown109f08c0 **m_pEntries;	// 0x18

	CUnknown109f08c0 *Find(int key)
	{
		for (int i = 0; i < m_nCount; i++) {
			if (m_pEntries[i]->m_id == key)
				return m_pEntries[i];
		}
		static CUnknown109f08c0 s_default(-1);
		return &s_default;
	}	// loads the record from a node: InternalName (+4), the name (+8), then the lowercased "ExcludedFlag" strings into the flag mask at +0xc and the "RequiredFlag" strings into the mask at +0x10 (sub_1025b740); false for a null node
};
