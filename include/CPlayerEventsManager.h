// CPlayerEventsManager (RTTI .?AVCPlayerEventsManager@@): a CAutoGameSystem-like manager that owns one
// utl-vector of 0x14-byte elements at +0x08 (memory, allocation count, grow size, size, element pointer).
#pragma once

#include "CAnchorList.h"	// g_109f3624 (Plat_Free)

class CPlayerEventsManager
{
public:
	void vfunc2();	// slot 2: the Purge of the vector at +0x08
	void vfunc5();	// slot 5: the same Purge of the vector at +0x08
	void *vfunc8(unsigned int flags);	// slot 8: scalar deleting destructor (vector at +0x08, CBaseGameSystem::~CBaseGameSystem, then the delete)

	char m_pad0000[8];
	void *m_pMemory;	// 0x08
	int m_allocationCount;	// 0x0c
	int m_growSize;	// 0x10
	int m_Size;	// 0x14
	void *m_pElements;	// 0x18
};
