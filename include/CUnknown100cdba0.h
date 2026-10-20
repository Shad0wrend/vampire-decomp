// CUnknown100cdba0: head of a singly linked list of keyed 0x1c byte nodes (20 byte payload, key at +0x14, next at +0x18);
// real name not yet known.
#pragma once

struct CUnknown100cdba0Data
{
	int m_f0;
	int m_f4;
	int m_f8;
	int m_fc;
	int m_f10;
};

struct CUnknown100cdba0Node
{
	CUnknown100cdba0Data m_data;	// 0x00 (m_f0 starts 0, m_fc -1, m_f10 0 in a fresh node)
	int m_key;	// 0x14
	CUnknown100cdba0Node *m_pNext;	// 0x18
};

class CUnknown100cdba0
{
public:
	CUnknown100cdba0Node *m_pHead;	// 0x00

	void sub_100cdba0(CUnknown100cdba0Data data, int key);	// sets the payload of the node with this key, adding a new node at the head when absent
};
