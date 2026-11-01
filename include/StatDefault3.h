// StatDefault3: default item object (0xe0 bytes) used by a list lookup; name provisional.
#pragma once

class CStatDefault3List;

struct StatDefault3
{
	int m_0;	// 0x00
	int m_4;	// 0x04
	const char *m_pszName;	// 0x08
	int pad_0c;
	const char *m_pszDisplayName;	// 0x10
	int m_14;	// 0x14
	int m_18;	// 0x18
	int m_1c;	// 0x1c
	int m_20;	// 0x20
	int pad_24[21];
	int m_78;	// 0x78
	int m_7c;	// 0x7c
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
	int *m_d0[2];	// 0xd0..0xd7: heap arrays freed by the destructor
	int *m_pd8;	// 0xd8: array of 17 ints
	int *m_dc;	// 0xdc: heap array freed by the destructor
	StatDefault3(int);
	~StatDefault3();
	const char **sub_101d4e70(const char **pOut, int n);	// the n-th (clamped 0..5) name of the dword array at +0x40, stored to *pOut and returned
	const char **sub_101d4eb0(const char **pOut, int n);	// like sub_101d4e70 for the array at +0x58
	int sub_101d4f60(int n);	// stub 0x1000295a: index of the n-th used slot
	int sub_101d4d80();	// stub 0x100054ca
	void sub_101d3a10();	// stub 0x10012a12: resets the item before it is loaded from a data node
	void sub_101d3c10(StatDefault3 *pParent);	// stub 0x1000a245: fills every unset field (the zero ints, the lists, the flag bytes and floats) from the parent item
	void sub_101d4520(void *pNode, CStatDefault3List *pList);	// stub 0x1000a32b: loads the item from a "ClanData" node
	void sub_101d4fd0();	// stub 0x100135a7: applies the clan item to its owner (run by the clan console command)
};
