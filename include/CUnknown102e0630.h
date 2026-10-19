// CUnknown102e0630: sibling of CUnknown102e0090 (list head at +0xc of enemy memory nodes); the value is at +0x2c here.
#pragma once

struct CUnknown102e0630Node
{
	char m_pad00[0x24];
	unsigned int m_hEnemy;	// entity handle
	char m_pad28[4];
	int m_value;	// 0x2c
	char m_pad30[4];
	char m_flag;	// 0x34
	char m_pad35[3];
	CUnknown102e0630Node *m_pNext;	// 0x38
};

class CUnknown102e0630
{
public:
	int m_pad00[3];
	CUnknown102e0630Node *m_pHead;	// 0x0c

	int sub_102e0630(void *enemy);	// "LastNearestNodeCheated": value of the node whose enemy matches, else of the last flagged node, else -1 with a warning
};
