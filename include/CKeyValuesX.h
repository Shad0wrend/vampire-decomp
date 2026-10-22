// CKeyValuesX: a node of the key/value trees the game loads from its data files (the same objects as CUnknown10248a50);
// only what decompiled code needs.
#pragma once

class CUtlBuffer;

class CKeyValuesX
{
public:
	int m_iKeyName;	// 0x00: symbol of the key name
	const char *m_sValue;	// 0x04: the string value, null for a node with sub keys
	char m_pad08[0x10 - 0x08];
	CKeyValuesX *m_pPeer;	// 0x10: the next key of the same level
	CKeyValuesX *m_pSub;	// 0x14: the first sub key

	const char *sub_10248cd0(const char *pszKey, const char *pszDefault);	// "GetString" (called through the stub 0x1000ed95)
	CKeyValuesX *sub_1001569a(const char *pszName, int bCreate);	// stub 0x1001569a: finds the sub key of that name
	CKeyValuesX *sub_10004c8c();	// stub 0x10004c8c: the first sub key
	CKeyValuesX *sub_1000fa65();	// stub 0x1000fa65: the next key of the same level
	const char *sub_102480b0();	// "GetName" (stub 0x1000fec0): the key's name
	void sub_10248730(CUtlBuffer *pBuf, int nIndent);	// "RecursiveSaveToFile": writes this key and its sub keys as text, one level deeper per sub key
	void sub_1001152c(CUtlBuffer *pBuf, int nIndent);	// the stub of sub_10248730 (the recursion goes through it)
	CKeyValuesX *sub_10248af0(const char *pszName);	// "FindKey" without create (stub 0x1000c9fa): the sub key of that name, 0 when there is none
	CKeyValuesX *sub_10248b60();	// "GetNextKey" (stub 0x1000894f): the next key of the same level
};
