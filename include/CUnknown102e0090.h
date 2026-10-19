// CUnknown102e0090: holds the head (+0xc) of a singly linked list of enemy memory nodes; real name not yet known.
#pragma once

struct CUnknown102e0090Node
{
	char m_pad00[0x24];
	unsigned int m_hEnemy;	// entity handle
	char m_pad28[8];
	int m_value;	// 0x30
	char m_flag;	// 0x34
	char m_pad35[3];
	CUnknown102e0090Node *m_pNext;	// 0x38
};

class CUnknown102e0090
{
public:
	int m_pad00[3];
	CUnknown102e0090Node *m_pHead;	// 0x0c

	int sub_102e0090(void *enemy);	// "LastNearestNode": value of the node whose enemy matches, else of the last flagged node, else -1 with a warning
};
