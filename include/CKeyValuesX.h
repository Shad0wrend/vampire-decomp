// CKeyValuesX: a node of the key/value trees the game loads from its data files (the same objects as CUnknown10248a50);
// only what decompiled code needs.
#pragma once

class CUtlBuffer;

// vtable view of the file system object SaveToFile gets: slot 0 Open, 1 Close, 3 Write.
class IKeyValuesFileView
{
public:
	virtual int Open(const char *pFileName, const char *pOptions, const char *pPathID);
	virtual void Close(int hFile);
	virtual int Read(void *pOutput, int size, int hFile);
	virtual int Write(const void *pInput, int size, int hFile);
};

class CKeyValuesX
{
public:
	int m_iKeyName;	// 0x00: symbol of the key name
	const char *m_sValue;	// 0x04: the string value, null for a node with sub keys
	char m_pad08[0x10 - 0x08];
	CKeyValuesX *m_pPeer;	// 0x10: the next key of the same level
	CKeyValuesX *m_pSub;	// 0x14: the first sub key
	CKeyValuesX *m_pBase18;	// 0x18: the key searched next when no sub key has the name
	CKeyValuesX *sub_1000b58c(const char *pszName, int bCreate);	// the stub of sub_10248900 (the recursion goes through it)
	CKeyValuesX *sub_10248870(const char *pszName);	// creates a sub key of that name at the end of the list (stub 0x10004eee)

	const char *sub_10248cd0(const char *pszKey, const char *pszDefault);	// "GetString" (called through the stub 0x1000ed95)
	CKeyValuesX *sub_1001569a(const char *pszName, int bCreate);	// stub 0x1001569a: finds the sub key of that name
	CKeyValuesX *sub_10004c8c();	// stub 0x10004c8c: the first sub key
	CKeyValuesX *sub_1000fa65();	// stub 0x1000fa65: the next key of the same level
	const char *sub_102480b0();	// "GetName" (stub 0x1000fec0): the key's name
	void sub_10248730(CUtlBuffer *pBuf, int nIndent);	// "RecursiveSaveToFile": writes this key and its sub keys as text, one level deeper per sub key
	void sub_1001152c(CUtlBuffer *pBuf, int nIndent);	// the stub of sub_10248730 (the recursion goes through it)
	CKeyValuesX *sub_10248af0(const char *pszName);	// "FindKey" without create (stub 0x1000c9fa): the sub key of that name, 0 when there is none
	CKeyValuesX *sub_10248b60();	// "GetNextKey" (stub 0x1000894f): the next key of the same level
	float sub_10248c60(const char *pszKey, float flDefault);	// "GetFloat" (stub 0x10009a9d)
	int sub_10248c20(const char *pszKey, int nDefault);	// typed int lookup (stub 0x10014b...): the sub key of that name when it has the value type 3 its value at +8, 0 for another type, nDefault when there is no such key
	CKeyValuesX *sub_10248900(const char *pszName, char bCreate);	// the FindKey worker (stub 0x1000b58c): the sub key of that name, created through sub_10248870 when bCreate is set, else 0
	void sub_10248690(const char *pszFile, IKeyValuesFileView *pFileSystem, const char *pszPathID);	// "SaveToFile": writes the tree as text into the file
};
