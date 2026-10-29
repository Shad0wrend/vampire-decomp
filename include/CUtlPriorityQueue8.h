// CUtlPriorityQueue8: Source's CUtlPriorityQueue<T> of 8-byte elements (a heap in a CUtlVector plus the less function at +0x14).
#pragma once
#include "utlvector.h"
#include "UtlVec8.h"

class CUtlPriorityQueue8
{
public:
	typedef bool (__cdecl *LessFunc_t)(const UtlVec8Elem &, const UtlVec8Elem &);

	void sub_102f8f50(int growSize, int initSize, LessFunc_t lessfunc);	// the constructor body

	CUtlVector<UtlVec8Elem> m_heap;
	LessFunc_t m_LessFunc;
};
