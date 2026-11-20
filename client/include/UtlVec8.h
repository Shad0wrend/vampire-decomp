// UtlVec8: a CUtlVector-like container of 8-byte elements (memory pointer at +0, size at +0xc).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct UtlVec8Elem
{
	int a;
	int b;
};

struct SElem8;

class UtlVec8
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	UtlVec8Elem *m_pElements;

	void sub_10130f90(int elem, int num);	// ShiftElementsRight
		// "CUtlVector::InsertBefore": grows by one, shifts the tail up, stores *src
		// same as sub_10042200 (another instance)
		// same as sub_10042200 (another instance)
		// same as sub_10042200 (another instance)
		// same as sub_10042200 (another instance)
		// "CUtlVector::InsertBefore" without the element copy: grows by one, shifts the tail up, returns elem
		// "CUtlVector::AddToTail" (InsertBefore at the size, inlined): appends a copy of elem
		// "CUtlVector::AddToTail" taking a pointer (InsertBefore at the size, inlined): appends *src, returns its index
		// "CUtlVector::FastRemove": when the vector is not empty, copies the last element over elem and shrinks the size by one
		// the whole constructor (stub 0x1000f907), called out of line by the schedule registration functions
		// the whole destructor of such a vector (stub 0x10009516)
	void GrowVector(int num);
	void sub_1008e5a0(int num);
		// same shape as GrowVector (initial allocation 4)
		// same shape as GrowVector (initial allocation 4)
		// copy constructor-like: constructs num elements, then copies them
	void sub_10055890(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_1008e630(int elem, int num);
	void sub_1009cea0(int elem, int num);
	void sub_100a34d0(int elem, int num);
	void sub_101353f0(int elem, int num);
	void sub_1013dd10(int elem, int num);
	void sub_101a0f20(int elem, int num);
	void sub_101be2a0(int elem, int num);
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
		// provisional, like sub_10032f00 (transplant)
};
