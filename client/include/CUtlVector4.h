// CUtlVector4: a CUtlVector whose elements are 4 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

class CUtlVector4
{
public:
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	int sub_101be160(int elem, const int *src);	// "CUtlVector::InsertBefore": grows by one, shifts the tail up, stores *src
	int sub_1008e4b0(int elem, const int *src);
		// same as sub_1003c0e0 (another instance)
		// same as sub_1003c0e0 (another instance)
		// same as sub_1003c0e0 (another instance)
		// same as sub_1003c0e0 (another instance)
		// same as sub_1003c0e0 (another instance)
		// "CUtlVector::AddToTail" (InsertBefore at the current size, inlined): returns the new index
		// "CUtlVector::AddToTail": grows by one and stores value at the end
	void sub_1008e5a0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
	void sub_10055800(int num);
	void sub_1009ce10(int num);
	void sub_100a3440(int num);
	void sub_101a0e90(int num);
	void sub_101be210(int num);
		// same as sub_10071ae0 (another instance)
		// same as sub_10071ae0 (another instance)
		// same as sub_10071ae0 (another instance)
		// same as sub_10071ae0 (another instance)
		// same as sub_10071ae0 (another instance)
		// same as sub_10071ae0 (another instance)
		// same as sub_10071ae0 (another instance)
		// same as sub_10071ae0 (another instance)
	void sub_101352e0(int a, int b);	// "CUtlVector::Swap": exchanges the elements a and b
		// "CUtlVector<EHANDLE>::Find": index of the first element resolving to the same entity as *pHandle, or -1
		// "CUtlVector<EHANDLE>::InsertMultipleBefore": grows by num, shifts the tail, fills the new slots with -1 (invalid handle) and then copies pToInsert over them; returns elem
		// "CUtlVector<EHANDLE>::InsertMultipleBefore" (another instance, other grow function)
		// "CUtlVector::ShiftElementsLeft": moves the elements after elem + num down over elem (stdcall, 2 arguments)
};
