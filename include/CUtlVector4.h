// CUtlVector4: a CUtlVector whose elements are 4 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class CUtlVector4
{
public:
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	int sub_1003c0e0(int elem, const int *src);	// "CUtlVector::InsertBefore": grows by one, shifts the tail up, stores *src
	int sub_100c8270(int elem, const int *src);	// same as sub_1003c0e0 (another instance)
	int sub_10217080(int elem, const int *src);	// same as sub_1003c0e0 (another instance)
	int sub_102c6920(int elem, const int *src);	// same as sub_1003c0e0 (another instance)
	int sub_101a55a0(int elem, const int *src);	// same as sub_1003c0e0 (another instance)
	int sub_102dcd30(int elem, const int *src);	// same as sub_1003c0e0 (another instance)
	void sub_10071ae0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
	void sub_10084fb0(int num);	// same as sub_10071ae0 (another instance)
	void sub_1007f400(int num);	// same as sub_10071ae0 (another instance)
	void sub_101e48f0(int num);	// same as sub_10071ae0 (another instance)
	void sub_1021e430(int num);	// same as sub_10071ae0 (another instance)
	void sub_102c6c30(int num);	// same as sub_10071ae0 (another instance)
	void sub_102ce8e0(int num);	// same as sub_10071ae0 (another instance)
	void sub_102d4210(int num);	// same as sub_10071ae0 (another instance)
	void sub_102f91f0(int num);	// same as sub_10071ae0 (another instance)
};
