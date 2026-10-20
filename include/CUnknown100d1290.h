// CUnknown100d1290: the physics shadow entity list (global pointer at 0x106b89bc): a count at +0 and the head of a singly
// linked list of 8 byte nodes (entity handle, next) at +4; real name not yet known.
#pragma once

class CBaseEntity;

struct CUnknown100d1290Node
{
	unsigned int m_hEntity;	// 0x00
	CUnknown100d1290Node *m_pNext;	// 0x04
};

class CUnknown100d1290
{
public:
	int m_nCount;	// 0x00
	CUnknown100d1290Node *m_pHead;	// 0x04

	void sub_100d1290(CBaseEntity *pEnt);	// appends pEnt's handle (-1 for null) unless the entity is already in the list
};
