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

#include "utlrbtree.h"

struct CAI_ExpresserUse	// element of the tree at +0x14: a sentence key and the time it was last used (a CUtlMap<unsigned int, float, unsigned short> pair)
{
	unsigned int m_nKey;
	float m_flTime;
};

// The same tree as CAI_ExpresserTree, typed: sentinel (Links) at 0x10936c54, guard 0x109f076a; the less function (stub
// 0x1000186b) is called as less(a, b) through [tree+0]; the context pointer after the tree (+0x18) is copied to the global
// 0x109f075c before each search (CUtlMap's s_pLessContext). View it with CAI_Expresser::UseTree().
struct CAI_ExpresserUseTree : public CUtlRBTree<CAI_ExpresserUse, unsigned short>
{
	void *m_pLessContext;	// 0x18 of the tree (+0x2c of the expresser)
};

struct CAI_ExpresserSub	// 0x1c byte member at +0x30
{
	char m_pad[0x1c];
	CAI_ExpresserSub *sub_10311490();	// constructor body (out of line)
	void sub_10311500();	// destructor body (out of line)
	CAI_ExpresserSub() { sub_10311490(); }
};

struct CAI_ExpresserSink	// the object at +0x10, only its slots 0 / 1 (boolean answers) and 3 are known
{
	virtual bool vfunc0(); virtual bool vfunc1(); virtual void vfunc2(); virtual void vfunc3();
};

struct CAI_ExpresserTail	// the members at +0x4c .. +0x6f
{
	float m_n4c;
	int m_n50;
	char m_pad54[0x64 - 0x54];	// the sentence name text
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

	void SetSink(CAI_ExpresserSink *pSink) { m_n10 = pSink; }
	void SetHost(void *pHost) { m_pOuter = pHost; }

	virtual ~CAI_Expresser();	// slot 0
	CAI_Expresser *vfunc0(unsigned char flags);	// 0x10312e80: slot 0's scalar deleting form (plain member)
	void sub_103121a0(float a, float b);	// (0x103121a0)
	bool sub_10311ee0(int a, int b);	// asks the outer NPC (slot 540, with a) for a delay and, when it is positive, hands it on with b to sub_103121a0
	void sub_10312b50();	// the per-think step of a running sentence: with a sentence number (+0x64) set, a finished one (sub_10312230) asks the sink (slot 0) and, when it answers, ends it (sub_10312c20(0)); a running one with the flag (+0x68) asks slot 1 and ends it (sub_10312c50); otherwise the next sentence of the series (name + number) is started (sub_10311f50) and, when it cannot be, the state is cleared (sub_10312b20)
	bool sub_10312230();	// whether the time at +0x4c lies in the future (stub 0x10006767)
	void sub_10312c50();	// stub 0x1000be51
	void sub_10312c20(int a);	// stub 0x10004502
	void sub_10312aa0(const char *pszName, CGlobalEntityList_Ent *pListener);	// stub 0x10008b1b: the '~' sentence names (scripted speech) are handed to it
	int sub_10311b90();	// the sound level of a sentence: the base level (+0x50) plus a random 0..3
	bool sub_10311c10(int key, const char *pszScene);	// plays the sentence record of key (0x10311c10)
	void *sub_10312340(int key);	// the record of key (m_Sub's lookup, stub 0x1000c0d1)
	void sub_103126e0(int key);	// stub 0x10012ba7
	int sub_10311f50(const char *pszName, float flDelay, float flVolume, int nSoundLevel, int b);	// starts the named sentence, -1 when it cannot (stub 0x10005745)
};
