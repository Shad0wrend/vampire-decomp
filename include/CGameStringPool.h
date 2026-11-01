// CGameStringPool: the game system that owns the global string pool (0x109eed28).
// Layout from RTTI: CBaseGameSystem / IGameSystem at +0 (vftable 0x10516c28, 9 slots), CStringPool at +4.
// Only what matched code needs, as plain members (same style as CSkyList.h).
#pragma once

class CStringPool
{
public:
	void sub_101bf640();	// the pool's destructor body (stub 0x1000a4b6): out-of-line CUtlRBTree RemoveAll (0x101bfb00), then CUtlMemory purge (grow at +0xc, Plat_Free of the pointer at +4)
	char m_pad0000[0x10];	// CUtlRBTree<...> of the pooled strings; real members not recovered yet
};

class CGameStringPool
{
public:
	CGameStringPool *vfunc8(unsigned int flags);	// slot 8, scalar deleting destructor: base destructor, ~CStringPool on this+4 (null this gives 0), delete this when bit 0 of flags
	void sub_1000cfbd();	// CBaseGameSystem::~CBaseGameSystem (0x1042c2c0, stub 0x1000cfbd)

	char m_pad0000[4];	// IGameSystem vftable pointer is emitted by the compiler once the class is virtual; kept out for the plain-member form
	CStringPool m_StringPool;	// 0x0004
};
