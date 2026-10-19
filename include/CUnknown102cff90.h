// CUnknown102cff90: an object holding two CUtlVector-like containers of 4-byte elements at +0xc and +0x20; real name not yet known.
#pragma once

struct CUnknown102cff90Vec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	void sub_10004a75();	// run on the second container (cleanup of its elements)
};

class CUnknown102cff90
{
public:
	char m_pad0000[0xc];
	CUnknown102cff90Vec m_first;	// 0x0c
	CUnknown102cff90Vec m_second;	// 0x20

	void sub_102cff90();	// destructor-like: purges both containers (with the inlined CUtlVector::Purge / CUtlMemory::Purge sequences)
};
