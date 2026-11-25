// CUtlMultiList16: a CUtlMultiList-like container with 16-byte nodes (unsigned short indices), placeholder name
#pragma once

struct CUtlMultiList16Node
{
	char m_pad0[0xc];
	unsigned short m_Index;	// +0xc
	unsigned short m_Prev;	// +0xe
};

struct CUtlMultiList16List
{
	unsigned short m_n0;	// +0
	unsigned short m_n2;	// +2
	unsigned short m_n4;	// +4
	unsigned short m_n6;	// +6
	unsigned short m_n8;	// +8 (next)
};

class CUtlMultiList16
{
public:
	CUtlMultiList16Node *m_pNodes;	// +0x00 (16-byte nodes)
	int m_n4;
	int m_n8;
	CUtlMultiList16List *m_pLists;	// +0x0c (10-byte nodes)
	int m_n10;
	int m_n14;
	unsigned short m_nHead;	// +0x18
	char m_pad1a[0x28 - 0x1a];
	unsigned short *m_pXXX;	// 0x28
	unsigned short m_n2c;
	unsigned short m_n2e;
	unsigned short m_nCount;	// +0x30

	void sub_100d86c0();
	void sub_100d8550(int nList, int nIndex);
};
