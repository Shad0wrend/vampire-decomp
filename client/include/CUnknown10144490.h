// CUnknown10144490: a 0x24-byte character-option record; built by sub_10144490(index).
#pragma once

class CUnknown10144490
{
public:
	int m_n0;	// 0x00: the index passed to sub_10144490
	int m_n4;	// 0x04: -1 until sub_101444c0 finds the "CharTemplate" entry
	int m_n8;	// 0x08
	int m_nC;	// 0x0c
	int m_n10;	// 0x10
	int m_n14;	// 0x14
	int m_n18;	// 0x18
	int m_n1C;	// 0x1c
	int m_n20;	// 0x20: cleared by sub_101444c0

	void *sub_10144490(int index);
	bool sub_101444c0(void *pNode);
};
