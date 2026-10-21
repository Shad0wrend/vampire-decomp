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

	CUnknown109f08c0(int id);	// 0x1000ad62
	~CUnknown109f08c0();
	char sub_101ecb90(IKVNodeView *pKV);	// loads the record from a node: InternalName (+4), the name (+8), then the lowercased "ExcludedFlag" strings into the flag mask at +0xc and the "RequiredFlag" strings into the mask at +0x10 (sub_1025b740); false for a null node
};
