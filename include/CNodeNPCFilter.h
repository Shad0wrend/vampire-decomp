// CNodeNPCFilter: the entity filter of the node NPC lookups (its vtable slot 0 is vfunc0, the test of an entity).
#pragma once

class CNodeNPCFilter
{
public:
    virtual bool vfunc0(void *pEnt);    // slot 0: false for an entity of kind 3 without flag 4 in the flags byte at +0xc, or kind 2 without flag 1; else the object at +8 answers its slot 527 for the entity
    char m_pad0004[4];
    void *m_pObj8;    // 0x8: an object with a virtual slot 527 (0x83c)
    unsigned char m_flags0c;    // 0xc
};
