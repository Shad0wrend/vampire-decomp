// UtlVec8: a CUtlVector-like container of 8-byte elements (memory pointer at +0, size at +0xc).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

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

	void sub_10032f00(int elem, int num);	// ShiftElementsRight
	int sub_10042200(int elem, const UtlVec8Elem *src);	// "CUtlVector::InsertBefore": grows by one, shifts the tail up, stores *src
	int sub_102c6a50(int elem, const UtlVec8Elem *src);	// same as sub_10042200 (another instance)
	int sub_100422e0(int elem, const UtlVec8Elem *src);	// same as sub_10042200 (another instance)
	int sub_100423c0(int elem, const UtlVec8Elem *src);	// same as sub_10042200 (another instance)
	int sub_100424a0(int elem, const UtlVec8Elem *src);	// same as sub_10042200 (another instance)
	int sub_102f90e0(int elem);	// "CUtlVector::InsertBefore" without the element copy: grows by one, shifts the tail up, returns elem
	void sub_102beb50(UtlVec8Elem elem);	// "CUtlVector::AddToTail" (InsertBefore at the size, inlined): appends a copy of elem
	int sub_102c6780(const UtlVec8Elem *src);	// "CUtlVector::AddToTail" taking a pointer (InsertBefore at the size, inlined): appends *src, returns its index
	void sub_102f9000(int elem);	// "CUtlVector::FastRemove": when the vector is not empty, copies the last element over elem and shrinks the size by one
	UtlVec8 *sub_102c66f0(int growSize, int allocationCount);	// the whole constructor (stub 0x1000f907), called out of line by the schedule registration functions
	void sub_102c8a90();	// the whole destructor of such a vector (stub 0x10009516)
	void GrowVector(int num);
	void sub_101b6a50(int num);	// same shape as GrowVector (initial allocation 4)
	void sub_1027fae0(int num);	// same shape as GrowVector (initial allocation 4)
	void sub_101b6550(const SElem8 *src, int num);	// copy constructor-like: constructs num elements, then copies them
	void sub_10055000(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_10071ba0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_1007f4c0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_100f9860(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_101b6b10(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_101bde20(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_101bdf40(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_101e49b0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_1021e4f0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_1024c000(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_1027fba0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_102c6cf0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_102ce9a0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_102d42d0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_102dce30(int elem, int num);	// provisional, like sub_10032f00 (transplant)
	void sub_102f92b0(int elem, int num);	// provisional, like sub_10032f00 (transplant)
};
