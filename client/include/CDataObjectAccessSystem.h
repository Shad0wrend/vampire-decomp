// CDataObjectAccessSystem (RTTI .?AVCDataObjectAccessSystem@@): table of 32 data object pointers at +8.
// Only what decompiled code needs is declared.
#pragma once
#include "CDirtySpatialPartitionEntityList.h"
#ifdef PCD_INITIALIZERS
#include "ScopeTrace.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
#endif

class CDataObjectAccessSystem : public CAutoGameSystem
{
public:
#ifdef PCD_INITIALIZERS	// the initializer unit: the global 0x106bd930 is built inline (the destroy is the implicit destructor)
	CDataObjectAccessSystem()
	{
		ScopeTrace trace("CDataObjectAccessSystem::CDataObjectAccessSystem", g_102de300, g_102de300);
		memset(m_data, 0, sizeof(m_data));
	}
#endif
	virtual bool vfunc0();	// "CDataObjectAccessSystem::Init": registers the touchlink / groundlink / step simulation / model width scale accessors
	virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7();
#ifndef PCD_INITIALIZERS	// there slot 8 is the destructor (??_E): this would be a tenth slot
	virtual CAutoGameSystem *vfunc8(unsigned int flags);	// scalar deleting destructor
#endif

	void *m_data[32];

	void sub_1011b1d0(int index, void *pData);
	void AddDataAccessor(int index, void *pData);	// scope-traced "if the slot is empty, store pData"
	void sub_100f3f80();	// destructor body
		// provisional, like vfunc8 (transplant)
		// provisional, like sub_1000cfbd (transplant)
};
