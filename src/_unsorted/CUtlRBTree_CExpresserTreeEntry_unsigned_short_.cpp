// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10313430 size=0x57
#include "CExpresserTreeEntry.h"

typedef CUtlRBTree<CExpresserTreeEntry, unsigned short> ExpresserTree;
typedef const ExpresserTree::Links_t &(ExpresserTree::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CExpresserTreeEntry,unsigned short>::Links
LinksPtr_t g_linksForce = &ExpresserTree::Links;
// END FUNCTION
