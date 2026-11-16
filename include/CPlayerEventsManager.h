// CPlayerEventsManager (RTTI .?AVCPlayerEventsManager@@): a CAutoGameSystem-like manager that owns one
// utl-vector of 0x14-byte elements at +0x08 (memory, allocation count, grow size, size, element pointer).
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"	// the initializer units: the vector member is Source's CUtlVector
#endif
#include "CDirtySpatialPartitionEntityList.h"

#include "CAnchorList.h"	// g_109f3624 (Plat_Free)

class CPlayerEventsManager : public CAutoGameSystem
{
public:
	void vfunc2();	// slot 2: the Purge of the vector at +0x08
	void vfunc5();	// slot 5: the same Purge of the vector at +0x08
	CAutoGameSystem *vfunc8(unsigned int flags);	// slot 8: scalar deleting destructor (vector at +0x08, CBaseGameSystem::~CBaseGameSystem, then the delete)

#ifdef PCD_INITIALIZERS	// the vector at +0x08
	CUtlVector<int> m_vec;	// 0x08
#else
	void *m_pMemory;	// 0x08
	int m_allocationCount;	// 0x0c
	int m_growSize;	// 0x10
	int m_Size;	// 0x14
	void *m_pElements;	// 0x18
#endif
};
