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
};
