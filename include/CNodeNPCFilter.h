// CNodeNPCFilter: the entity filter of the node NPC lookups (its vtable slot 0 is vfunc0, the test of an entity).
#pragma once

#include "Vector.h"

struct CNodeNPCFilterNode	// the node a filter looks at; real name not yet known
{
	Vector *sub_102fb0d0(Vector *pOut, int nHull);	// the node's position for a hull (stub 0x1000d99a)
};

class CNodePosFilter
{
public:
    virtual bool vfunc0(void *pEnt);	// slot 0: always true
};

class CNodeNPCFilter
{
public:
    virtual bool vfunc0(void *pEnt);    // slot 0: false for an entity of kind 3 without flag 4 in the flags byte at +0xc, or kind 2 without flag 1; else the object at +8 answers its slot 527 for the entity
    virtual float vfunc1(CNodeNPCFilterNode *pNode);    // slot 1: the squared distance from the vector at +4 to the node's position for the hull at +0x10 (computed, not returned)
    Vector *m_pVec4;    // 0x4
    void *m_pObj8;    // 0x8: an object with a virtual slot 527 (0x83c)
    unsigned char m_flags0c;    // 0xc
    char m_pad000d[3];
    int m_nHull10;    // 0x10
};
