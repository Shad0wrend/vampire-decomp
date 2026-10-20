// class CAI_Expresser (RTTI .?AVCAI_Expresser@@): the speech component of an expressive NPC (0x70 bytes).
// Base CAI_Component at +0x0, primary vtable 0x1049dff8 (3 slots). Only what matched code needs.
#pragma once

#include "CAI_Component.h"
#include "CUtlMemory16.h"

void sub_1000186b();	// less func of the tree (a jump stub)
void sub_1000feb1();	// callback at +0x2c (a jump stub)

struct CAI_ExpresserTree	// an inlined CUtlRBTree16 at +0x14
{
	void *m_pfnLess;
	CUtlMemory16 m_mem;
	unsigned short m_Root;
	unsigned short m_NumElements;
	unsigned short m_FirstFree;
	unsigned short m_TotalElements;

	CAI_ExpresserTree() : m_pfnLess((void *)sub_1000186b), m_Root(0xffff), m_NumElements(0), m_FirstFree(0xffff), m_TotalElements(0)
	{
		m_mem.sub_10312f70(0, 0);
	}
};

struct CAI_ExpresserSub	// 0x1c byte member at +0x30
{
	char m_pad[0x1c];
	CAI_ExpresserSub *sub_10311490();	// constructor body (out of line)
	CAI_ExpresserSub() { sub_10311490(); }
};

class CAI_Expresser : public CAI_Component
{
public:
	int m_pad08;
	int m_n0c;
	int m_n10;
	CAI_ExpresserTree m_Tree;	// 0x14
	void *m_pfn2c;
	CAI_ExpresserSub m_Sub;	// 0x30
	int m_n4c;
	int m_n50;
	char m_pad54[0x64 - 0x54];
	int m_n64;
	char m_b68;
	int m_n6c;

	CAI_Expresser() : m_n0c(-1), m_n10(0), m_pfn2c(0), m_n4c(0), m_n50(100), m_n64(0), m_b68(0), m_n6c(-1)
	{
		*(char *)&m_n64 = 0;
		m_n6c = -1;
		m_pfn2c = (void *)sub_1000feb1;
	}
};
