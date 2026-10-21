// class CAI_Expresser (RTTI .?AVCAI_Expresser@@): the speech component of an expressive NPC (0x70 bytes).
// Base CAI_Component at +0x0, primary vtable 0x1049dff8 (3 slots). Only what matched code needs.
#pragma once

#include "CAI_Component.h"
#include "CUtlMemory16.h"

void sub_1000186b();	// less func of the tree (a jump stub)
void sub_1000feb1();	// callback at +0x2c (a jump stub)

struct CAI_ExpresserMem	// CUtlMemory16 whose constructor is the out of line sub_10312f70
{
	CUtlMemory16 m_mem;
	CAI_ExpresserMem(int growSize, int initSize) { m_mem.sub_10312f70(growSize, initSize); }
};

struct CAI_ExpresserTree	// an inlined CUtlRBTree16 at +0x14, followed by the callback pointer at +0x2c
{
	void *m_pfnLess;
	CAI_ExpresserMem m_mem;
	unsigned short m_Root;
	unsigned short m_NumElements;
	unsigned short m_FirstFree;
	unsigned short m_TotalElements;
	void *m_pfn2c;

	static unsigned short InvalidIndex() { return 0xffff; }

	CAI_ExpresserTree() : m_pfnLess((void *)sub_1000186b), m_mem(0, 0), m_Root(InvalidIndex()), m_NumElements(0), m_FirstFree(InvalidIndex()), m_TotalElements(0), m_pfn2c(0)
	{
	}
};

struct CAI_ExpresserSub	// 0x1c byte member at +0x30
{
	char m_pad[0x1c];
	CAI_ExpresserSub *sub_10311490();	// constructor body (out of line)
	CAI_ExpresserSub() { sub_10311490(); }
};

struct CAI_ExpresserSink	// the object at +0x10, only its slot 3 is known
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3();
};

struct CAI_ExpresserTail	// the members at +0x4c .. +0x6f
{
	float m_n4c;
	int m_n50;
	char m_pad54[0x64 - 0x54];
	int m_n64;
	char m_b68;
	int m_n6c;

	CAI_ExpresserTail() : m_n4c(0), m_n50(100), m_n64(0), m_b68(0), m_n6c(-1) {}
};

class CAI_Expresser : public CAI_Component
{
public:
	int m_pad08;
	int m_n0c;
	CAI_ExpresserSink *m_n10;
	CAI_ExpresserTree m_Tree;	// 0x14
	CAI_ExpresserSub m_Sub;	// 0x30
	CAI_ExpresserTail m_Tail;	// 0x4c

	CAI_Expresser() : m_n0c(-1), m_n10(0)
	{
		*(char *)&m_Tail.m_n64 = 0;
		m_Tail.m_n6c = -1;
		m_Tree.m_pfn2c = (void *)sub_1000feb1;
	}

	void sub_103121a0(float a, float b);	// (0x103121a0)
};
