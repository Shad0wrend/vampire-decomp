// StatDefault60: 0x3c-byte list item built with its index (name provisional).
#pragma once

class IKVNodeView;

struct CUnknown101da880	// 16 bytes at +4
{
	int m_a[4];
	void *sub_101465b0();
};

struct S6	// 24 bytes at +0x14
{
	int m_a[6];
};

struct StatDefault60
{
	int m_index;	// 0x00
	CUnknown101da880 m_4;	// 0x04
	S6 m_14;	// 0x14
	int m_2c;
	int m_30;
	int m_34;
	int m_38;
	StatDefault60(int);
	void sub_10146990(IKVNodeView *pKV, void *pFilter);	// loads the item from a node (stub 0x10014097)
};
