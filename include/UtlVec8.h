// UtlVec8: a CUtlVector-like container of 8-byte elements (memory pointer at +0, size at +0xc).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct UtlVec8Elem
{
	int a;
	int b;
};

class UtlVec8
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	UtlVec8Elem *m_pElements;

	void sub_10032f00(int elem, int num);	// ShiftElementsRight
	int sub_10042200(int elem, const UtlVec8Elem *src);	// "CUtlVector::InsertBefore": grows by one, shifts the tail up, stores *src
	int sub_102c6a50(int elem, const UtlVec8Elem *src);	// same as sub_10042200 (another instance)
	int sub_100422e0(int elem, const UtlVec8Elem *src);	// same as sub_10042200 (another instance)
	int sub_100423c0(int elem, const UtlVec8Elem *src);	// same as sub_10042200 (another instance)
	int sub_100424a0(int elem, const UtlVec8Elem *src);	// same as sub_10042200 (another instance)
	void GrowVector(int num);
	void sub_101b6a50(int num);	// same shape as GrowVector (initial allocation 4)
	void sub_1027fae0(int num);	// same shape as GrowVector (initial allocation 4)
};
