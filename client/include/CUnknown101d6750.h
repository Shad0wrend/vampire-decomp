// CUnknown101d6750: class with a lazily grown array of item pointers at +4 (name provisional).
#pragma once

struct S101d61e0;

class CUnknown101d6750
{
public:
	int m_unk0;
	int m_allocCount;	// 0x0004
	int m_count;	// 0x0008
	S101d61e0 **m_pItems;	// 0x000c

	S101d61e0 *sub_101405b0();	// grows by one slot and returns the (lazily created) item
};
