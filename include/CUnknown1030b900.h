// CUnknown1030b900: an object with a flag byte at +0x48 and a copied triple at +0x4c (name provisional; the class that owns sub_1030b900).
#pragma once

// A record of a singly linked list: its triple at +0, flags dword at +0x28, the next record at +0x30.
struct CUnknown1030b900Node
{
	int m_v[3];
	char m_pad0c[0x28 - 0x0c];
	unsigned int m_flags28;
	int m_pad2c;
	CUnknown1030b900Node *m_pNext30;
};

class CUnknown1030b900
{
public:
	char m_pad0000[0x48];
	bool m_bSet48;	// 0x48
	int m_v4c[3];	// 0x4c

	void sub_1030b900(CUnknown1030b900Node *pNode);	// walks pNode to the last record of its list, copies its triple to +0x4c, sets the flag at +0x48 and the 8 bit of the record's flags
};
