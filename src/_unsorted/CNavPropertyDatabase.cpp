// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ea4d0 size=0x99
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
