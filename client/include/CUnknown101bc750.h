// CUnknown101bc750: a priority queue (binary heap in a vector of 4-byte elements at +0x20, less function at +0x34);
// real name not yet known.
#pragma once
#include "UtlVec8.h"

struct PQHeap101bc750 : public UtlVec8
{
	char (__cdecl *m_pLessFunc)(int *a, int *b);
};

class CUnknown101bc750
{
public:
	char pad0[0x20];
	PQHeap101bc750 m_heap;

	void sub_10134200(int value);	// "CUtlPriorityQueue::Insert": appends value and sifts it up
};
