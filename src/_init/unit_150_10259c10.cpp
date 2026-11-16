// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10259c10 size=0xa
#include "CUtlPriorityQueue8.h"
#include "utlpriorityqueue.h"
#include "utlsortvector.h"
#define PCD_INITIALIZERS
#include "utlrbtree.h"
#include "CUtlSymbolTable.h"
// the 0x5f31c byte element of the tree (its nodes are 0x5f324 bytes: 0x100 of them are allocated up front)
struct S10259c10Entry
{
	char m_data[0x5f31c];
};
bool sub_1025c670(unsigned short *a, unsigned short *b);	// the tree's less function
// a tree of 0x100 preallocated entries and a symbol table, built together and destroyed member by member
struct S10259c10
{
	S10259c10()
		: m_Tree(0x100, 0x100, (CUtlRBTree<S10259c10Entry, unsigned short>::LessFunc_t)sub_1025c670),
		  m_Symbols(0x100, 0x100, true)
	{
	}
	CUtlRBTree<S10259c10Entry, unsigned short> m_Tree;
	CUtlSymbolTable m_Symbols;
};
S10259c10 g_1089d7c8;
// END FUNCTION

// FUNCTION: 0x10259d40 size=0xa
#define PCD_INITIALIZERS
#include "CUnknown108c1288.h"
CUnknown108c1288 g_108c1288[3];
// END FUNCTION
