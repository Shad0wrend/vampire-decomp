// CUnknown101b2790: owner of a CUtlLinkedList-like node array (232 byte nodes at +0x54, head index at +0x60).
// sub_101b2790 walks the chain from the head until the node's first dword is -1.
#pragma once

struct CListNodeHeader_t
{
	int m_next;	// 0x00
	int m_b;	// 0x04
	int m_c;	// 0x08
	int m_d;	// 0x0c
};

struct CListNode232_t
{
	CListNodeHeader_t m_header;
	char m_pad0010[0xe8 - 0x10];
};

class CUnknown101b2790
{
public:
	char m_pad0000[0x54];
	CListNode232_t *m_pNodes;	// 0x54
	char m_pad0058[0x60 - 0x58];
	int m_nHead;	// 0x60

	void sub_1012de10();
};
