// CUtlRBTreeNNOf<T>: the project's CUtlRBTreeNN placeholder (the tree's fields by offset) whose node links are read
// through the instance's own CUtlRBTree<T, I>::Links. The game keeps one sentinel node per instance, in the guarded
// function-local static of that Links; reading the links through the template's own Links keeps it one static in a
// whole-program build too (link audit E). The older CUtlRBTreeNNAt<sentinel address> views gave each instance a
// second sentinel static.
#pragma once

#include "utlrbtree.h"
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"

template <class T>
class CUtlRBTree16Of : public CUtlRBTree16
{
public:
	const Links_t &Links(unsigned short i) const { return *(const Links_t *)&((const CUtlRBTree<T, unsigned short> *)this)->Links(i); }
	unsigned short Parent(unsigned short i) const { return Links(i).m_Parent; }
};

template <class T>
class CUtlRBTree12Of : public CUtlRBTree12
{
public:
	const Links_t &Links(unsigned short i) const { return *(const Links_t *)&((const CUtlRBTree<T, unsigned short> *)this)->Links(i); }
};

template <class T>
class CUtlRBTree232Of : public CUtlRBTree232
{
public:
	const Links_t &Links(int i) const { return *(const Links_t *)&((const CUtlRBTree<T, int> *)this)->Links(i); }
};
