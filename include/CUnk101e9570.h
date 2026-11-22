// CUnk101e9570: the history item (CUnknown101e98c0Item) as the guarded static default entry of 0x101ea0b0 sees it.
// Its constructor 0x101e9570 stores the argument at +0, builds the clan list at +0x1c (0x101d8230) and clears +0x24;
// the static's destroy 0x101ea120 jumps to the list's destructor 0x101d8250 with ecx = static + 0x1c.
#pragma once

struct CUnk101e9570List	// the clan list at +0x1c (CUnknown101e98c0ItemSub): count, array
{
	int m_count;	// 0x00
	void *m_pData;	// 0x04: an array with a count before it
	~CUnk101e9570List();	// 0x101d8250 (stub 0x10003e6d): frees the array, clears both
};

class CUnk101e9570
{
public:
	CUnk101e9570(int n);	// constructor 0x101e9570
	int m_n0000;	// 0x00: the constructor argument
	char m_pad0004[0x1c - 4];
	CUnk101e9570List m_list;	// 0x1c
	int m_n0024;	// 0x24
};
