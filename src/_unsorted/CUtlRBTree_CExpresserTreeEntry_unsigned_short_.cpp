// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10313430 size=0x57
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "CExpresserTreeEntry.h"

typedef CUtlRBTree<CExpresserTreeEntry, unsigned short> ExpresserTree;
typedef const ExpresserTree::Links_t &(ExpresserTree::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CExpresserTreeEntry,unsigned short>::Links
LinksPtr_t g_linksForce = &ExpresserTree::Links;
// END FUNCTION
