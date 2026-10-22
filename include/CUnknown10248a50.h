// CUnknown10248a50: a node of the key/value trees the game loads from its data files (0x1c bytes, no vtable); real name not yet known.
// Created with `new CUnknown10248a50("name")`; sub_102480f0 loads a file into it.
#pragma once

struct IFileSys;

class CUnknown10248a50
{
public:
	char m_pad0000[0x1c];

	CUnknown10248a50(const char *pszName);	// 0x10247ba0 (stub 0x1000e363): clears the first field, then names the node
	~CUnknown10248a50();	// 0x10247da0 (stub 0x100046f1)
	bool sub_102480f0(const char *pszFile, IFileSys *pFileSys, const char *pszPathID, bool bRefresh);	// "LoadFromFile"-like (stub 0x100108b6)
	bool sub_10248430(int unused, const char *pszBuffer, int a);	// "RecursiveLoadFromBuffer"-like (ret 0xc): parses the text with the cursor taken by address: for each token a node is made (a new node linked after the previous one, or this node renamed on the first round: its name freed and sub_10247cf0 stores the new one); a following '{' hands the cursor and a to sub_10248510; true at the end of the text
	void sub_10248a50(int pNext);	// stores the argument at +0x10 (the link to the next node)
	void sub_10247cf0(const char *pszName);	// stub 0x10013958: sets the node's name
	void sub_10248510(const char **ppBuffer, int a);	// stub 0x1000a321: reads the children after a '{'
};
