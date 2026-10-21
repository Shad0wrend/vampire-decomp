// CHolderInner24: the object whose dword at +0x24 points to a linked node (flags at +0x28, next at +0x30, previous at +0x34);
// real name not yet known. Only what matched code needs.
#pragma once

struct CHolderInner24_Node
{
	char m_pad00[0x10];
	int m_i10;
	char m_pad14[0x28 - 0x14];
	unsigned int m_flags28;	// bit 2 = has a value at +0x10, bit 3 = ended
	char m_pad2c[4];
	CHolderInner24_Node *m_pNext;	// 0x30
	CHolderInner24_Node *m_pPrev;	// 0x34
};

class CHolderInner24
{
public:
	char m_pad00[0x24];
	CHolderInner24_Node *m_pNode;	// 0x24
	char m_pad28[0x44 - 0x28];
	int m_i44;

	unsigned char sub_1030bd50();
	void sub_1030ba90();	// advances to the next node of the chain
	void sub_1030b4d0(CHolderInner24_Node *pNode, int a);
};
