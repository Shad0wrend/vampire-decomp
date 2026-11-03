// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ea450 size=0x38
#include "CNavPropertyDatabase.h"
#include "CUnknown100f6d80.h"

extern void *g_10934014;
extern CUnknown100f6d80 g_106eb5d8;
void sub_102ea4a0();

// TARGET: CNavPropertyDatabase::vfunc0
bool CNavPropertyDatabase::vfunc0()
{
    if (g_10934014 == 0)
        g_10934014 = (void *)sub_102ea4a0;
    int arg;
    if (this != 0)
        arg = (int)this + 8;
    else
        arg = 0;
    g_106eb5d8.sub_100f6d80(arg);
    return true;
}
// END FUNCTION

// FUNCTION: 0x102ea4d0 size=0x99
#include "utlrbtree.h"
#include "CNavPropertyDatabase.h"
#include "CUtlRBTree12.h"

struct LLNode {
	unsigned short m_Previous;
	unsigned short m_Next;
	char m_pad[8];
};
extern CUtlRBTree12 g_10934014;	// the tree (its nodes at +4: g_10934018)
extern LLNode *g_10934018;
extern unsigned short g_10934024;
extern unsigned short g_10934026;
extern unsigned short g_10934028;
extern unsigned short g_1093402a;

void CNavPropertyDatabase::vfunc4()
{
	const CUtlRBTree12At<0x10934040> *tree = (const CUtlRBTree12At<0x10934040> *)&g_10934014;
	unsigned short prev = 0xffff;
	for (int i = g_1093402a; --i >= 0; ) {
		tree->Links((unsigned short)i);	// RemoveAll's IsValidIndex: the links (the instance's sentinel)
		g_10934018[(unsigned short)i].m_Next = prev;
		g_10934018[(unsigned short)i].m_Previous = (unsigned short)i;
		prev = (unsigned short)i;
	}
	g_10934024 = 0xffff;
	g_10934026 = 0;
	g_10934028 = g_1093402a ? 0 : 0xffff;
}
// END FUNCTION

// FUNCTION: 0x102ea5a0 size=0x21
struct CUnknown100f6e40X
{
	void sub_100f6e40(void *p);
};

extern CUnknown100f6e40X g_106eb5d8;

// TARGET: sub_102ea5a0
void __fastcall sub_102ea5a0(int p)
{
	int a;
	if (p) {
		a = p + 8;
	} else {
		a = 0;
	}
	g_106eb5d8.sub_100f6e40((void *)a);
}
// END FUNCTION

// FUNCTION: 0x102eaac0 size=0x1e
#include "CNavPropertyDatabase.h"

// TARGET: CNavPropertyDatabase::vfunc8
CNavPropertyDatabase *CNavPropertyDatabase::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
