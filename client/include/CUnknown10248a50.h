// CUnknown10248a50: a node of the key/value trees the game loads from its data files (0x1c bytes, no vtable); real name not yet known.
// Created with `new CUnknown10248a50("name")`; sub_102480f0 loads a file into it.
#pragma once

struct IFileSys;

class CUnknown10248a50
{
public:
	char *m_pszName;	// 0x00
	char *m_pszString;	// 0x04
	union
	{
		int m_iValue;
		float m_flValue;
		void *m_pValue;
	};	// 0x08
	int m_iDataType;	// 0x0c: 0 string, 1 int, 2 float, 3 pointer
	CUnknown10248a50 *m_pPeer;	// 0x10
	CUnknown10248a50 *m_pSub;	// 0x14
	char m_pad0018[4];

	CUnknown10248a50(const char *pszName);	// 0x10247ba0 (stub 0x1000e363): clears the first field, then names the node
	~CUnknown10248a50();	// 0x10247da0 (stub 0x100046f1)
	bool sub_10127c90(const char *pszFile, IFileSys *pFileSys, const char *pszPathID, bool bRefresh);	// "LoadFromFile"-like (stub 0x100108b6)
	bool sub_10127f20(int unused, const char *pszBuffer, int a);	// "RecursiveLoadFromBuffer"-like (ret 0xc): parses the text with the cursor taken by address: for each token a node is made (a new node linked after the previous one, or this node renamed on the first round: its name freed and sub_10247cf0 stores the new one); a following '{' hands the cursor and a to sub_10248510; true at the end of the text
	void sub_101283c0(int pNext);	// stores the argument at +0x10 (the link to the next node)
		// copies the node, its children and its peers from pSrc into this node (stub 0x10011153)
		// the jump stub of sub_10247e40, as its own recursion calls it
	void sub_101279a0(const char *pszName);	// stub 0x10013958: sets the node's name
	void sub_10127fd0(const char **ppBuffer, int a);	// stub 0x1000a321: reads the children after a '{'
	void sub_10127c60();	// the destructor body called through its stub (0x100046f1 for 0x10247da0), as the code that deletes a node calls it
	CUnknown10248a50 *sub_10128350(const char *pszKeyName, bool bCreate);	// "FindKey" (stub 0x1001569a): the child node of that name, null when there is none (and not bCreate)
	int sub_101284c0(const char *pszKeyName, int nDefault);	// "GetInt" (stub 0x1000461a)
	float sub_10128540(const char *pszKeyName, float flDefault);	// "GetFloat" (stub 0x10009a9d)
	CUnknown10248a50 *sub_10128430(const char *pszKeyName);	// the sub key of that name (case-insensitive walk of the sub key list), null when there is none; the name is also copied to the global buffer at 0x10753f68
	CUnknown10248a50 *sub_101283a0();	// "GetFirstSubKey" (stub 0x10004c8c)
	CUnknown10248a50 *sub_101283b0();	// "GetNextKey" (stub 0x1000fa65)
};
