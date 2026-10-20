// CAI_GoalEntity (RTTI .?AVCAI_GoalEntity@@): base of the AI goal entities, derived from CBaseEntity at +0x0.
// Only the members decompiled code needs.
#pragma once

#include "CBaseEntity.h"

class CAI_GoalEntity : public CBaseEntity
{
public:
	char m_pad03e0[0x468 - 0x3e0];
	unsigned int *m_pActors;	// 0x468 CUtlVector<AIHANDLE> m_actors: memory
	int m_nActorsAllocation;	// 0x46c
	int m_nActorsGrowSize;	// 0x470
	int m_nActors;	// 0x474 size
	unsigned int *m_pActorsElements;	// 0x478

	void sub_102cd3b0();	// "CAI_GoalEntity::PruneActors": removes (FastRemove, back to front) the actors whose handle no longer resolves or whose NPC state (slot 464) is 7 (dead)
	void vfunc241(int a);	// slot 241 (called directly by the derived goal classes through the stub at 0x100141e6): once per goal (flag bit 0 of the dword at +0x480), registers the goal (+0x450) in the global list, resolves/prunes the actors (bit 1 of the flags) and tells every actor through slot 244
	void sub_102cdb70(int a);	// slot 243 implementation, called directly by the derived goal classes through the stub at 0x10012b7f
	void sub_102cd4a0();	// first-time actor lookup (stub 0x1000eea8)
};
