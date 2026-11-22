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
// taken in a function nothing calls (a global taking it would be a dynamic initializer the game does not have): VC6 emits the inline member here
LinksPtr_t pcd_emit_10313430() { return &ExpresserTree::Links; }
// END FUNCTION
