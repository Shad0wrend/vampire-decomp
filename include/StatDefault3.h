// StatDefault3: default item object (0xe0 bytes) used by a list lookup; name provisional.
#pragma once

class CStatDefault3List;

struct StatDefault3
{
	int m_0;	// 0x00
	int m_4;	// 0x04
	int pad_08[5];
	int m_1c;	// 0x1c
	int m_20;	// 0x20
	int pad_24[23];
	int m_80;	// 0x80
	int pad_84[2];
	bool m_8c[12];	// 0x8c..0x97, [5] == true by default
	bool m_98[10];	// 0x98..0xa1
	char pad_a2[2];
	int m_a4;	// 0xa4
	bool m_a8;
	bool m_a9;
	char pad_aa[2];
	int m_ac;	// 0xac
	int m_b0;	// 0xb0
	int pad_b4[2];
	float m_bc[3];	// 0xbc.. 1.0f
	int pad_c8;
	int m_cc;	// 0xcc
	int m_d0[4];	// 0xd0..0xdc
	StatDefault3(int);
	~StatDefault3();
	int sub_101d4d80();	// stub 0x100054ca
	void sub_101d3a10();	// stub 0x10012a12: resets the item before it is loaded from a data node
	void sub_101d4520(void *pNode, CStatDefault3List *pList);	// stub 0x1000a32b: loads the item from a "ClanData" node
};
