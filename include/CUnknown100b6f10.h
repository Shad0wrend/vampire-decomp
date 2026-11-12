// CUnknown100b6f10: sequence data of a flex scene (argument of CBaseFlex::vfunc288): a count of 0x18 byte nodes at +0x8c,
// the node table at the offset stored at +0x90. A node of type 1 follows the index stored at its +0x10 into its list.
#pragma once

struct S100b6f10Node
{
	int m_nName;	// 0x00
	int m_nType;	// 0x04
	int m_nCount;	// 0x08
	int m_pad0c;
	int m_nCurrent;	// 0x10
	int m_nListOffset;	// 0x14: offset of the list (8 byte entries, the first dword is a node index) from the node

	char *pszName() { return (char *)this + m_nName; }
	int *sub_10105830(int index);	// the list entry (8 bytes) of a type 1 node, 0 when out of range
	int LinkIndex() { int *pEntry = sub_10105830(m_nCurrent); return pEntry ? *pEntry : -1; }
};

class CUnknown100b6f10
{
public:
	S100b6f10Node *sub_100b6f10(int node);	// follows the chain of type 1 nodes to the last one

	char m_pad0000[0x8c];
	int m_nNodes;	// 0x8c
	int m_nNodeTable;	// 0x90: offset of the node table from this
	int m_unk94;
	int m_unk98;
	int m_unk9c;
	int m_unka0;
	int m_unka4;
	int m_nFlexTable;	// 0xa8: offset of the flex index table from this

	S100b6f10Node *pNode(int i) { return (S100b6f10Node *)((char *)this + m_nNodeTable) + i; }
};
