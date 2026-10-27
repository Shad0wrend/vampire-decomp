// CExpresserTreeEntry: the 8 byte element of the CAI_Expresser's red-black tree (sentinel 0x10936c48), with an owned pointer at +4.
#pragma once

#include "utlrbtree.h"

struct CExpresserTreeEntry
{
	int m_n0;
	char *m_p;
};

struct CExpresserEntryTree : CUtlRBTree<CExpresserTreeEntry, unsigned short>
{
	void sub_10311500();	// deletes the owned pointer of every element, then empties and frees the tree
};
