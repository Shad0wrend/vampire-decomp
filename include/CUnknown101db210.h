// CUnknown101db210: DisciplineFX-style table class with a lazily grown array of item pointers at +0x2c (name provisional).
#pragma once

struct S6;

class CUnknown101db210
{
public:
	char m_pad0000[0x2c];
	int m_allocCount;	// 0x002c
	int m_count;	// 0x0030
	S6 **m_pItems;	// 0x0034

	S6 *sub_101db210();	// grows by one slot and returns the (lazily created) item
};
