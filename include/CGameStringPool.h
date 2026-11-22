// CGameStringPool: the game system that owns the global string pool (0x109eed28).
// Bases from RTTI: CBaseGameSystem / IGameSystem at +0 (vftable 0x10516c28, 9 slots; GameSystemRoot.h), CStringPool
// at +4.
#pragma once

#include "GameSystemRoot.h"

class CStringPool
{
public:
	CStringPool();	// 0x101bf5d0: builds the tree of pooled strings at +0 (CUtlRBTree<int, unsigned short>: grow 0x20, 0x100 nodes, less function 0x1000730b)
	void sub_101bf640();	// the pool's destructor body (stub 0x1000a4b6): out-of-line CUtlRBTree RemoveAll (0x101bfb00), then CUtlMemory purge (grow at +0xc, Plat_Free of the pointer at +4)
	char *sub_101bf860(const char *psz);	// stub 0x1000555b: find psz in the pool's tree, or _mbsdup and insert it; returns the pooled copy (ret 4). Also called on the pool at 0x1074e9a0
	void sub_101bfb00();	// CUtlRBTree::RemoveAll (stub 0x1000c405): the tree lives at +0 of the pool
	~CStringPool();	// function 0x101bf640 (stub 0x1000a4b6): the destructor the pool globals' destroys run
	char m_pad0000[0x18];	// CUtlRBTree<const char *, unsigned short> m_Strings: less function, CUtlMemory (pointer,
						// count, grow), root, count, first free, total; 0x18 bytes, as the game's two pools
};

// Source's gamestringpool.cpp bases: VC places the base with the vtable at +0, the pool at +4, and the destroy runs
// ~CBaseGameSystem before ~CStringPool
class CGameStringPool : public CStringPool, public CBaseGameSystem
{
public:
	virtual void vfunc5();	// 0x1042bf20: empties the pool's tree
	CGameStringPool *vfunc8(unsigned int flags);	// slot 8 (0x1042bf90) written out, the scalar deleting destructor: base destructor, ~CStringPool on this+4 (null this gives 0), delete this when bit 0 of flags
	void sub_1000cfbd();	// CBaseGameSystem::~CBaseGameSystem (0x1042c2c0, stub 0x1000cfbd)
};
