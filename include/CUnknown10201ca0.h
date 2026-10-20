// CUnknown10201ca0: "CVStatListManager_t" (name from the scope trace of Bind; no RTTI). A growable vector of CVStatList_t pointers
// with its own bookkeeping in front of it.
#pragma once

class CVStatList_t;

class CUnknown10201ca0
{
public:
	int m_growSize;	// 0x00
	int m_nNextId;	// 0x04
	char m_pad08[8];	// 0x08
	int m_allocationCount;	// 0x10
	int m_size;	// 0x14
	CVStatList_t **m_pMemory;	// 0x18
	int m_a;	// 0x1c
	int m_b;	// 0x20

	void sub_10201ca0(int a, int b);	// "CVStatListManager_t::Bind": scope trace, stores the two arguments at +0x1c/+0x20, then appends four new CVStatList_t (ids from the counter at +4) to the vector, growing it when full
};
