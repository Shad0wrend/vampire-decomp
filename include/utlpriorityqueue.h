// utlpriorityqueue.h: Source's CUtlPriorityQueue<T> (tier1 utlpriorityqueue.h, 2004 public SDK form): a heap in a
// CUtlVector<T> (0x14 bytes) followed by the less function (+0x14). Only the members the game's code shows so far;
// add the SDK's others as they are needed.
#pragma once

#include "utlvector.h"

template <class T>
class CUtlPriorityQueue
{
public:
	typedef bool (*LessFunc_t)(T const &, T const &);

	CUtlPriorityQueue(int growSize = 0, int initSize = 0, LessFunc_t lessfunc = 0);

	int Count() const { return m_heap.Count(); }
	void SetLessFunc(LessFunc_t func);

protected:
	CUtlVector<T> m_heap;
	LessFunc_t m_LessFunc;
};

template <class T>
inline CUtlPriorityQueue<T>::CUtlPriorityQueue(int growSize, int initSize, LessFunc_t lessfunc)
	: m_heap(growSize, initSize), m_LessFunc(lessfunc)
{
}

template <class T>
inline void CUtlPriorityQueue<T>::SetLessFunc(LessFunc_t func)
{
	m_LessFunc = func;
}
