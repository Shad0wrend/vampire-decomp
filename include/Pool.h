// Pool: the game's fixed-size item pool (not in the RTTI). Items of m_cbItem bytes are carved out of malloc'd blocks that sit on a
// circular list (sentinel at +0x0c: next at +0x0c, previous at +0x10); a free item holds the pointer to the next free item in its
// first dword. Matched members and callers so far: sub_1013dc60 (allocate), sub_1013dbb0 (add a block, a free __fastcall in the
// matched source, stub 0x10010f41), sub_1013db10 (reset the list, stub 0x100101d1), sub_1013db40 (free all blocks, then reset).
// Used as the allocator of the sound controller (0x1072c4b0 / 0x1072c4e0 pools) and the AI pathfinder.
#pragma once

struct Pool
{
	unsigned int m_cbItem;	// 0x00: the item size in bytes (at least 4)
	unsigned int m_nItemsPerBlock;	// 0x04: how many items the first block holds (a block holds this times the number of blocks so far + 1)
	unsigned int m_nMode;	// 0x08: 0 = the first block is made at once and no more; 2 = grows without limit; other = fixed after the first block
	unsigned int m_pBlockNext;	// 0x0c: block list sentinel, next
	unsigned int m_pBlockPrev;	// 0x10: block list sentinel, previous
	char m_pad14[8];	// 0x14
	unsigned int *m_pFree;	// 0x1c: first free item (null when the pool is full)
	int m_nUsed;	// 0x20: items in use
	int m_nPeak;	// 0x24: the most items in use at once
	unsigned short m_nBlocks;	// 0x28: blocks allocated so far

	Pool *sub_1013da90(unsigned int cbItem, unsigned int nItemsPerBlock, unsigned int nMode);	// constructor body (stub-called by the pool owners): m_cbItem = max(cbItem, 4), the other two stored, m_nPeak = 0, sub_1013db10() (empty the block list), then sub_1013dbb0 (make the first block); returns this
	void sub_1013db10();	// stub 0x100101d1: empties the block list (sentinel points to itself), no blocks, no free items, no items in use
	unsigned int *sub_1013dc60(unsigned int cb);	// allocate an item of at most m_cbItem bytes (null when too big or the pool is exhausted), updating the use counts
};

void __fastcall sub_1013dbb0(Pool *pPool);	// stub 0x10010f41: carves a new block into free items when the pool has none (see m_nMode)
