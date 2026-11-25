// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101105e0 size=0x1e
#include "CPanelMetaClassMgrImp.h"

// VC6 writes CPanelMetaClassMgrImp's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPanelMetaClassMgrImp *pcd_emit_101105e0() { return new CPanelMetaClassMgrImp; }

// TARGET: ??_GCPanelMetaClassMgrImp@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10110600 size=0x91
#include "CPanelMetaClassMgrImp.h"
#include "CUnknown1024b370.h"

extern "C" __declspec(dllimport) void Plat_Free(void *p);

struct Mem_10110600 {
	void *m_pMemory;
	int m_allocationCount;
	int m_growSize;
};

#define MEM_PURGE_(m) \
	if ((m).m_growSize != -1) { \
		if ((m).m_pMemory) { \
			Plat_Free((m).m_pMemory); \
			(m).m_pMemory = 0; \
		} \
		(m).m_allocationCount = 0; \
	}

CPanelMetaClassMgrImp::~CPanelMetaClassMgrImp()
{
	((CUnknown1024b370 *)((char *)this + 0xa4))->sub_1013d330();
	MEM_PURGE_(*(Mem_10110600 *)((char *)this + 0x90));
	((CUnknown1024b370 *)((char *)this + 0x60))->sub_1013d330();
	MEM_PURGE_(*(Mem_10110600 *)((char *)this + 0x4c));
	((CUnknown1024b370 *)((char *)this + 0x1c))->sub_1013d330();
	MEM_PURGE_(*(Mem_10110600 *)((char *)this + 0x8));
}
// END FUNCTION
