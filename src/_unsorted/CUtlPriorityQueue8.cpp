// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102f8f50 size=0x47
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CUtlPriorityQueue8.h"
CUtlPriorityQueue8::CUtlPriorityQueue8(int growSize, int initSize, LessFunc_t lessfunc)
	: m_heap(growSize, initSize), m_LessFunc(lessfunc)
{
}
// END FUNCTION
