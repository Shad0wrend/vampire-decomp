// CUnknown106b89bc: the global list at 0x106b89bc used by PhysRemoveShadow (0x1002ee60): a count at +0 and a singly
// linked list of entity-handle nodes (handle at +0, next at +4) headed at +4; real name not yet known.
#pragma once

struct CUnknown106b89bcNode
{
	unsigned int m_hEntity;	// 0x00
	CUnknown106b89bcNode *m_pNext;	// 0x04
};

class CBaseEntity;

class CUnknown106b89bc
{
public:
	int m_nCount;	// 0x00
	CUnknown106b89bcNode *m_pHead;	// 0x04

	void sub_100d13d0(CBaseEntity *pEntity);	// removes the nodes whose handle resolves to pEntity or to nothing (stub 0x100099f8)
};
